/*
 * Copyright (c) by Alexander Neumann <alexander@bumpern.de>
 * Copyright (c) 2007 by Stefan Siegl <stesie@brokenpipe.de>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License (either version 2 or
 * version 3) as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 */

#include "config.h"

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <util/delay.h>
#include <stdlib.h>

#include "protocols/uip/uip.h"
#include "protocols/uip/uip_neighbor.h"

#include "core/global.h"
#include "core/debug.h"
#include "core/spi.h"
#include "network.h"
#include "core/periodic.h"
#include "core/portio/portio.h"
#include "hardware/radio/rfm12/rfm12.h"
#include "protocols/uip/ipv6.h"
#include "hardware/storage/sd_reader/sd_raw.h"
#include "core/vfs/vfs.h"


/* global configuration */
global_status_t status;

/* prototypes */
void (*jump_to_bootloader)(void) = (void *)BOOTLOADER_SECTION;


extern void ethersex_meta_init(void);
extern void ethersex_meta_startup(void);
extern void ethersex_meta_mainloop(void);
extern void periodic_process(void);

int main(void)
{
	#ifdef BOOTLOADER_SUPPORT
	_IVREG = _BV(IVCE);	            /* prepare ivec change */
	_IVREG = _BV(IVSEL);            /* change ivec to bootloader */
	#endif

	/* Clear the MCUSR Register to avoid endless wdreset loops */
	unsigned char reset_reason = 0;
	#ifdef MCUCSR
	reset_reason = MCUCSR;
	MCUCSR = 0;
	#else
		#ifdef MCUSR
		reset_reason = MCUSR;
		MCUSR = 0;
		#endif
	#endif

	/* Default DDR Config */
	#if IO_HARD_PORTS == 4 && DDR_MASK_A != 0
	DDRA = DDR_MASK_A;
	#endif
	#if DDR_MASK_B != 0
	DDRB = DDR_MASK_B;
	#endif
	#if DDR_MASK_C != 0
	DDRC = DDR_MASK_C;
	#endif
	#if DDR_MASK_D != 0
	DDRD = DDR_MASK_D;
	#endif
	#if IO_HARD_PORTS == 6
		#if DDR_MASK_E != 0
		DDRE = DDR_MASK_E;
		#endif
		#if DDR_MASK_F != 0
		DDRF = DDR_MASK_F;
		#endif
	#endif

	#ifdef STATUSLED_POWER_SUPPORT
	PIN_SET(STATUSLED_POWER);
	#endif

	//FIXME: zum ethersex meta system hinzufügen, aber vor allem anderem initalisieren
	debug_init();
	debug_printf("Ethersex " VERSION_STRING " (Debug mode)\n");

	#ifdef DEBUG_RESET_REASON
	     if (bit_is_set(reset_reason, BORF)) debug_printf("reset: Brown-out\n");
	else if (bit_is_set(reset_reason, PORF)) debug_printf("reset: Power on\n");
	else if (bit_is_set(reset_reason, WDRF)) debug_printf("reset: Watchdog\n");
	else if (bit_is_set(reset_reason, EXTRF)) debug_printf("reset: Extern\n");
	else debug_printf("reset: Unknown\n");
	#endif

	#ifdef BOOTLOADER_SUPPORT
	/* disable interrupts */
	cli();
	#else
	/* enable interrupts */
	sei();
	#endif //BOOTLOADER_SUPPORT

	#ifdef USE_WATCHDOG
		debug_printf("enabling watchdog\n");
		#ifdef DEBUG
		/* for debugging, test reset cause and jump to bootloader */
		if (MCUSR & _BV(WDRF)) {
			debug_printf("bootloader...\n");
			jump_to_bootloader();
		}
		#endif
		/* set watchdog to 2 seconds */
		wdt_enable(WDTO_2S);
		wdt_kick();
	#else //USE_WATCHDOG
		debug_printf("disabling watchdog\n");
		wdt_disable();
	#endif //USE_WATCHDOG

	#if defined(ADC_SUPPORT) || defined(ADC_LIGHT)
	/* ADC Prescaler to 64 */
	ADCSRA = _BV(ADEN) | _BV(ADPS2) | _BV(ADPS1);
	/* ADC set Voltage Reference to extern*/
	/* FIXME: move config to the right place */
	ADMUX = ADC_REF; //_BV(REFS0) | _BV(REFS1);
	#endif

	#if defined(RFM12_SUPPORT) || defined(ENC28J60_SUPPORT) \
	|| defined(DATAFLASH_SUPPORT)
	spi_init();
	#endif

	ethersex_meta_init();

	/* must be called AFTER all other initialization */
	#ifdef PORTIO_SUPPORT
	portio_init();
	#elif defined(NAMED_PIN_SUPPORT)
	np_simple_init();
	#endif

	#ifdef ENC28J60_SUPPORT
	debug_printf("enc28j60 revision 0x%x\n", read_control_register(REG_EREVID));
	debug_printf("mac: %x:%x:%x:%x:%x:%x\n",
			uip_ethaddr.addr[0],
			uip_ethaddr.addr[1],
			uip_ethaddr.addr[2],
			uip_ethaddr.addr[3],
			uip_ethaddr.addr[4],
			uip_ethaddr.addr[5]
			);
	#endif

	#ifdef STATUSLED_BOOTED_SUPPORT
	PIN_SET(STATUSLED_BOOTED);
	#endif

	ethersex_meta_startup();

	/* main loop */
	while(1) {

	wdt_kick();
	ethersex_meta_mainloop();

	#ifdef SD_READER_SUPPORT
	if (sd_active_partition == NULL) {
	    if (! sd_try_init ())
		vfs_sd_try_open_rootnode ();

	    wdt_kick();
	}
	#endif

	#ifndef BOOTLOAD_SUPPORT
		if(status.request_bootloader) {
			#ifdef CLOCK_CRYSTAL_SUPPORT
			_TIMSK_TIMER2 &= ~_BV(TOIE2);
			#endif
			#ifdef DCF77_SUPPORT
			ACSR &= ~_BV(ACIE);
			#endif
			cli();
			jump_to_bootloader();
		}

		#ifndef TEENSY_SUPPORT
		if(status.request_wdreset) {
			cli();
			wdt_enable(WDTO_15MS);
			for(;;);
		}
		#endif

		if(status.request_reset) {
			cli();

			void (* reset)(void) = NULL;
			reset();
		}
	#endif
	}

}

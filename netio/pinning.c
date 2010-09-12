/* This file has been generated by pinning m4 system automatically.
   Please do not modify it, edit the m4 scripts below pinning/ instead. */



#ifndef _PINNING_HEADER
#define _PINNING_HEADER

#undef BOOTLOADER_SECTION
#define _ISC(n,m) _BV(ISC ## n ## m)
#define _paste(n,m) n ## m
#define _paste3(a,b,c) a ## b ## c

#define _PORT_CHAR(character) PORT ## character
#define PORT_CHAR(character) _PORT_CHAR(character)

#define _PIN_CHAR(character) PIN ## character
#define PIN_CHAR(character) _PIN_CHAR(character)
 
#define _DDR_CHAR(character) DDR ## character
#define DDR_CHAR(character) _DDR_CHAR(character)


#define DDR_CONFIG_IN(pin)  DDR_CHAR( pin ## _PORT) &= ~_BV((pin ## _PIN))
#define DDR_CONFIG_OUT(pin)  DDR_CHAR( pin ## _PORT) |= _BV((pin ## _PIN))

#define PIN_BV(pin) (_BV(pin ## _PIN))
#define PIN_NR(pin) (pin ## _PIN)
#define PIN_HIGH(pin) (PIN_CHAR(pin ## _PORT) & _BV(pin ## _PIN))
#define PIN_SET(pin) PORT_CHAR(pin ## _PORT) |= _BV(pin ## _PIN)
#define PIN_CLEAR(pin) PORT_CHAR(pin ## _PORT) &= ~_BV(pin ## _PIN)
#define PIN_TOGGLE(pin) PORT_CHAR(pin ## _PORT) ^= _BV(pin ## _PIN)
#define PIN_PULSE(pin) do { PORT_CHAR(pin ## _PORT) &= ~_BV(pin ## _PIN); \
                              PORT_CHAR(pin ## _PORT) ^= _BV(pin ## _PIN); } while(0)


/*
   ATmega644p is very similar to ATmega644, therefore we just include
   that one's pinning configuration file.  The main difference is the
   second USART.
 */


/* spi defines */
#define SPI_MOSI_PORT B
#define SPI_MOSI_PIN 5
#define HAVE_SPI_MOSI 1


#ifdef PB5_USED
#  error Pinning Error: ./pinning/controllers/atmega644.m4:23: SPI_MOSI has a double define on PB5
#endif
#define PB5_USED 1
  

#define SPI_MISO_PORT B
#define SPI_MISO_PIN 6
#define HAVE_SPI_MISO 1


#ifdef PB6_USED
#  error Pinning Error: ./pinning/controllers/atmega644.m4:23: SPI_MISO has a double define on PB6
#endif
#define PB6_USED 1
  

#define SPI_SCK_PORT B
#define SPI_SCK_PIN 7
#define HAVE_SPI_SCK 1


#ifdef PB7_USED
#  error Pinning Error: ./pinning/controllers/atmega644.m4:23: SPI_SCK has a double define on PB7
#endif
#define PB7_USED 1
  

#define SPI_CS_HARDWARE_PORT B
#define SPI_CS_HARDWARE_PIN 4
#define HAVE_SPI_CS_HARDWARE 1


#ifdef PB4_USED
#  error Pinning Error: ./pinning/controllers/atmega644.m4:23: SPI_CS_HARDWARE has a double define on PB4
#endif
#define PB4_USED 1
  




#define NET_MAX_FRAME_LENGTH 1500
#define ADC_CHANNELS 8


/*
   ATmega644p is very similar to ATmega644, therefore we just include
   that one's hackery internals first.  The main difference is the
   second USART.
 */


#define _ATMEGA644

#define _SPMCR SPMCSR

/* ATmega644 specific adjustments */
#define _IVREG MCUCR
#define _EIMSK EIMSK
#define _EICRA EICRA

/* Timer0 - ASK Sense */
#define _TCCR0_PRESCALE TCCR0B
#define _VECTOR_OVERFLOW0 TIMER0_OVF_vect
#define _TIMSK_TIMER0 TIMSK0

/* Timer0 - Stella */
#define _TCCR0_PRESCALE TCCR0B
#define _OUTPUT_COMPARE_IE0 OCIE0B
#define _OUTPUT_COMPARE_REG0 OCR0B
#define _VECTOR_OUTPUT_COMPARE0 TIMER0_COMPB_vect
#define _VECTOR_OVERFLOW0 TIMER0_OVF_vect
#define _TIFR_TIMER0 TIFR0

/* Timer1 - Ticks */
#define _TIMSK_TIMER1 TIMSK1

/* Timer2 - Stella */
#define _TCCR2_PRESCALE TCCR2B
#define _OUTPUT_COMPARE_IE2 OCIE2B
#define _OUTPUT_COMPARE_REG2 OCR2B
#define _VECTOR_OUTPUT_COMPARE2 TIMER2_COMPB_vect
#define _VECTOR_OVERFLOW2 TIMER2_OVF_vect
#define _TIMSK_TIMER2 TIMSK2
#define _TIFR_TIMER2 TIFR2

/* Timer0 - PWM Melody */
#define _PWM_MELODY_COMP TIMER2_COMPA_vect
#define _PWM_MELODY_OCR OCR2A
#define _PWM_MELODY_TRCCRA TCCR2A
#define _PWM_MELODY_TRCCRB TCCR2B
#define _PWM_MELODY_COM1 COM2A1
#define _PWM_MELODY_COM0 COM2B0
#define _PWM_MELODY_WGM0 WGM20
#define _PWM_MELODY_CS0 CS20
#define _PWM_MELODY_TIMSK TIMSK2
#define _PWM_MELODY_OCIE OCIE2A

/* workaround for avr-libc devs not being able to decide how these registers
 * should be named... */
#ifdef SPCR0
    #define _SPCR0 SPCR0
#else
    #define _SPCR0 SPCR
#endif

#ifdef SPE0
    #define _SPE0 SPE0
#else
    #define _SPE0 SPE
#endif

#ifdef MSTR0
    #define _MSTR0 MSTR0
#else
    #define _MSTR0 MSTR
#endif

#ifdef SPSR0
    #define _SPSR0 SPSR0
#else
    #define _SPSR0 SPSR
#endif

#ifdef SPIF0
    #define _SPIF0 SPIF0
#else
    #define _SPIF0 SPIF
#endif

#ifdef SPDR0
    #define _SPDR0 SPDR0
#else
    #define _SPDR0 SPDR
#endif

#ifdef SPI2X0
    #define _SPI2X0 SPI2X0
#else
    #define _SPI2X0 SPI2X
#endif

#define _TIFR_TIMER1 TIFR1


#define BOOTLOADER_SECTION 0xe000 /* atmega644 with 4096 words bootloader */

/*	BOOTLOADER_SECTION 0xfc00	$7E00	512 words
	BOOTLOADER_SECTION 0xf800	$7C00	1024 words
	BOOTLOADER_SECTION 0xf000	$7800	2048 words
	BOOTLOADER_SECTION 0xe000	$7000	4096 words	*/

/* port the enc28j60 is attached to */
#define ONEWIRE_PORT D
#define ONEWIRE_PIN 6
#define HAVE_ONEWIRE 1


#ifdef PD6_USED
#  error Pinning Error: pinning/hardware/netio.m4:9: ONEWIRE has a double define on PD6
#endif
#define PD6_USED 1
  










/* port the rfm12 module CS is attached to */
#define RFM12_USE_POLL 1

#define SPI_CS_RFM12_PORT C
#define SPI_CS_RFM12_PIN 2
#define HAVE_SPI_CS_RFM12 1


#ifdef PC2_USED
#  error Pinning Error: pinning/hardware/netio.m4:50: SPI_CS_RFM12 has a double define on PC2
#endif
#define PC2_USED 1
  















#define SPI_CS_NET_PORT SPI_CS_HARDWARE_PORT
#define SPI_CS_NET_PIN SPI_CS_HARDWARE_PIN
#define HAVE_SPI_CS_NET HAVE_SPI_CS_HARDWARE

  



  /* onewire support */
  

#define PORTIO_MASK_A 255
#define PORTIO_MASK_B 15
#define PORTIO_MASK_C 251
#define PORTIO_MASK_D 191
#define PORTIO_MASK_E 255
#define PORTIO_MASK_F 255
#define PORTIO_MASK_G 255

#define DDR_MASK_A 0
#define DDR_MASK_B 176
#define DDR_MASK_C 4
#define DDR_MASK_D 0
#define DDR_MASK_E 0
#define DDR_MASK_F 0
#define DDR_MASK_G 0

#endif /* _PINNING_HEADER */

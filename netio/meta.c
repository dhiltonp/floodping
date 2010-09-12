/* This file has been generated automatically.
   Please do not modify it, edit the m4 scripts instead. */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <avr/wdt.h>
#include <stdint.h>
#include "config.h"

#if ARCH == ARCH_HOST
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include "core/host/tap.h"
#include "core/host/stdin.h"

/* for C-c exit handler */
#include <signal.h>
#include <stdlib.h>
void ethersex_meta_exit (int signal);

#endif

void dyndns_update();
void periodic_process();
extern uint8_t bootload_delay;
volatile uint8_t newtick;

/* This file has been generated by ecmd_defs.m4 automatically.
   Please do not modify it, edit the m4 scripts instead. */

#include <avr/pgmspace.h>
#include "protocols/ecmd/parser.h"

#ifndef NULL
#define NULL ((void *) 0)
#endif

/* This file has been generated with the generous help of soap_magic.m4 */

#include "protocols/soap/soap.h"

#include "network.h"
#include "core/debug.h"
#include "core/periodic.h"
#include "core/vfs/vfs.h"
#include "hardware/ethernet/enc28j60.h"
#include "hardware/onewire/onewire.h"
#include "hardware/radio/rfm12/rfm12.h"
#include "hardware/radio/rfm12/rfm12.h"
#include "protocols/uip/uip.h"
#include "protocols/uip/uip_router.h"
#include "protocols/uip/uip_arp.h"
#include "protocols/dns/resolv.h"
#include "protocols/ecmd/via_tcp/ecmd_net.h"
#include "services/httpd/httpd.h"

/* Function 0 follow */
int16_t parse_cmd_d (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_fuse (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_hostname (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_reset (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_wdreset (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_bootloader (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_nslookup (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_dns_server (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_io (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_adc_get (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_mac (char *cmd, char *output, uint16_t len);
#ifdef DEBUG_ENC28J60
int16_t parse_cmd_enc_dump (char *cmd, char *output, uint16_t len);
#endif
#ifdef ONEWIRE_DETECT_SUPPORT
int16_t parse_cmd_onewire_list (char *cmd, char *output, uint16_t len);
#endif
int16_t parse_cmd_onewire_get (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_onewire_convert (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_rfm12_status (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_rfm12_reinit (char *cmd, char *output, uint16_t len);
#ifdef RFM12_IP_SUPPORT
int16_t parse_cmd_rfm12_setbaud (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_rfm12_setbandwidth (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_rfm12_setmod (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_rfm12_setgain (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_rfm12_setdrssi (char *cmd, char *output, uint16_t len);
#endif
#ifndef TEENSY_SUPPORT
#ifdef UIP_SUPPORT
#ifndef IPV6_SUPPORT
int16_t parse_cmd_netmask (char *cmd, char *output, uint16_t len);
#endif
int16_t parse_cmd_ip (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_gw (char *cmd, char *output, uint16_t len);
#endif
#endif
#ifdef RFM12_ASK_SENDER_SUPPORT
#ifdef RFM12_ASK_TEVION_SUPPORT
int16_t parse_cmd_rfm12_ask_tevion_send (char *cmd, char *output, uint16_t len);
#endif
#ifdef RFM12_ASK_2272_SUPPORT
int16_t parse_cmd_rfm12_ask_2272_send (char *cmd, char *output, uint16_t len);
#endif
#ifdef RFM12_ASK_1527_SUPPORT
int16_t parse_cmd_rfm12_ask_1527_send (char *cmd, char *output, uint16_t len);
#endif
#endif
#ifdef RFM12_ASK_EXTERNAL_FILTER_SUPPORT
int16_t parse_cmd_rfm12_ask_external_filter (char *cmd, char *output, uint16_t len);
#endif
#ifdef RFM12_ASK_SENSING_SUPPORT
int16_t parse_cmd_rfm12_ask_sense (char *cmd, char *output, uint16_t len);
#endif
#ifdef I2C_DETECT_SUPPORT
int16_t parse_cmd_i2c_detect (char *cmd, char *output, uint16_t len);
#endif
#ifdef I2C_GENERIC_SUPPORT
int16_t parse_cmd_i2c_read_byte (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_read_byte_data (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_read_word_data (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_write_byte (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_write_byte_data (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_write_word_data (char *cmd, char *output, uint16_t len);
#endif
#ifdef I2C_LM75_SUPPORT
int16_t parse_cmd_i2c_lm75 (char *cmd, char *output, uint16_t len);
#endif
#ifdef I2C_DS1631_SUPPORT
int16_t parse_cmd_i2c_ds1631_read_temp (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_ds1631_start (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_ds1631_stop (char *cmd, char *output, uint16_t len);
#endif
#ifdef I2C_TSL2550_SUPPORT
int16_t parse_cmd_i2c_tsl2550_read_lux (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_tsl2550_pwr_up (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_tsl2550_pwr_down (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_tsl2550_mode (char *cmd, char *output, uint16_t len);
#endif
#ifdef I2C_PCA9531_SUPPORT
int16_t parse_cmd_i2c_pca9531 (char *cmd, char *output, uint16_t len);
#endif
#ifdef I2C_PCF8574X_SUPPORT
int16_t parse_cmd_i2c_pcf8574x_read (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_pcf8574x_set (char *cmd, char *output, uint16_t len);
#endif
#ifdef I2C_MAX7311_SUPPORT
int16_t parse_cmd_i2c_max7311_setDDRw (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_max7311_setOUTw (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_max7311_getDDRw (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_max7311_getOUTw (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_max7311_getINw (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_max7311_set (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_i2c_max7311_pulse (char *cmd, char *output, uint16_t len);
#endif
#ifdef MCUF_SUPPORT
#ifdef MCUF_CLOCK_SUPPORT
int16_t parse_cmd_mcuf_show_clock (char *cmd, char *output, uint16_t len);
#endif
#ifdef MCUF_SCROLLTEXT_SUPPORT
int16_t parse_cmd_mcuf_show_string (char *cmd, char *output, uint16_t len);
#endif
#ifdef MCUF_MODUL_SUPPORT
int16_t parse_cmd_mcuf_modul_list (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_mcuf_modul (char *cmd, char *output, uint16_t len);
#endif
#endif
#ifdef FS20_SUPPORT
#ifdef FS20_SEND_SUPPORT
int16_t parse_cmd_fs20_send (char *cmd, char *output, uint16_t len);
#endif
#ifdef FS20_RECEIVE_SUPPORT
int16_t parse_cmd_fs20_receive (char *cmd, char *output, uint16_t len);
#endif
#ifdef FS20_RECEIVE_WS300_SUPPORT
int16_t parse_cmd_fs20_ws300 (char *cmd, char *output, uint16_t len);
#endif
#endif
#ifndef TEENSY_SUPPORT
int16_t parse_cmd_help (char *cmd, char *output, uint16_t len);
int16_t parse_cmd_version (char *cmd, char *output, uint16_t len);
#endif
#ifdef FREE_SUPPORT
int16_t parse_cmd_free (char *cmd, char *output, uint16_t len);
#endif
#ifdef EEPROM_SUPPORT
int16_t parse_cmd_eeprom_reinit (char *cmd, char *output, uint16_t len);
#endif

/* Char array definitions follow */
const char PROGMEM ecmd_d_text[] = "d ";
const char PROGMEM ecmd_fuse_text[] = "fuse";
const char PROGMEM ecmd_hostname_text[] = "hostname";
const char PROGMEM ecmd_reset_text[] = "reset";
const char PROGMEM ecmd_wdreset_text[] = "wdreset";
const char PROGMEM ecmd_bootloader_text[] = "bootloader";
const char PROGMEM ecmd_nslookup_text[] = "nslookup ";
const char PROGMEM ecmd_dns_server_text[] = "dns server";
const char PROGMEM ecmd_io_text[] = "io";
const char PROGMEM ecmd_adc_get_text[] = "adc get";
const char PROGMEM ecmd_mac_text[] = "mac";
#ifdef DEBUG_ENC28J60
const char PROGMEM ecmd_enc_dump_text[] = "enc dump";
#endif
#ifdef ONEWIRE_DETECT_SUPPORT
const char PROGMEM ecmd_onewire_list_text[] = "1w list";
#endif
const char PROGMEM ecmd_onewire_get_text[] = "1w get";
const char PROGMEM ecmd_onewire_convert_text[] = "1w convert";
const char PROGMEM ecmd_rfm12_status_text[] = "rfm12 status";
const char PROGMEM ecmd_rfm12_reinit_text[] = "rfm12 reinit";
#ifdef RFM12_IP_SUPPORT
const char PROGMEM ecmd_rfm12_setbaud_text[] = "rfm12 setbaud";
const char PROGMEM ecmd_rfm12_setbandwidth_text[] = "rfm12 setbandwidth";
const char PROGMEM ecmd_rfm12_setmod_text[] = "rfm12 setmod";
const char PROGMEM ecmd_rfm12_setgain_text[] = "rfm12 setgain";
const char PROGMEM ecmd_rfm12_setdrssi_text[] = "rfm12 setdrssi";
#endif
#ifndef TEENSY_SUPPORT
#ifdef UIP_SUPPORT
#ifndef IPV6_SUPPORT
const char PROGMEM ecmd_netmask_text[] = "netmask";
#endif
const char PROGMEM ecmd_ip_text[] = "ip";
const char PROGMEM ecmd_gw_text[] = "gw";
#endif
#endif
#ifdef RFM12_ASK_SENDER_SUPPORT
#ifdef RFM12_ASK_TEVION_SUPPORT
const char PROGMEM ecmd_rfm12_ask_tevion_send_text[] = "rfm12 tevion";
#endif
#ifdef RFM12_ASK_2272_SUPPORT
const char PROGMEM ecmd_rfm12_ask_2272_send_text[] = "rfm12 2272";
#endif
#ifdef RFM12_ASK_1527_SUPPORT
const char PROGMEM ecmd_rfm12_ask_1527_send_text[] = "rfm12 1527";
#endif
#endif
#ifdef RFM12_ASK_EXTERNAL_FILTER_SUPPORT
const char PROGMEM ecmd_rfm12_ask_external_filter_text[] = "rfm12 external filter";
#endif
#ifdef RFM12_ASK_SENSING_SUPPORT
const char PROGMEM ecmd_rfm12_ask_sense_text[] = "rfm12 ask sense";
#endif
#ifdef I2C_DETECT_SUPPORT
const char PROGMEM ecmd_i2c_detect_text[] = "i2c detect";
#endif
#ifdef I2C_GENERIC_SUPPORT
const char PROGMEM ecmd_i2c_read_byte_text[] = "i2c rbb";
const char PROGMEM ecmd_i2c_read_byte_data_text[] = "i2c rbd";
const char PROGMEM ecmd_i2c_read_word_data_text[] = "i2c rwd";
const char PROGMEM ecmd_i2c_write_byte_text[] = "i2c wbb";
const char PROGMEM ecmd_i2c_write_byte_data_text[] = "i2c wbd";
const char PROGMEM ecmd_i2c_write_word_data_text[] = "i2c wwd";
#endif
#ifdef I2C_LM75_SUPPORT
const char PROGMEM ecmd_i2c_lm75_text[] = "lm75";
#endif
#ifdef I2C_DS1631_SUPPORT
const char PROGMEM ecmd_i2c_ds1631_read_temp_text[] = "ds1631 temp";
const char PROGMEM ecmd_i2c_ds1631_start_text[] = "ds1631 start";
const char PROGMEM ecmd_i2c_ds1631_stop_text[] = "ds1631 stop";
#endif
#ifdef I2C_TSL2550_SUPPORT
const char PROGMEM ecmd_i2c_tsl2550_read_lux_text[] = "tsl2550 lux";
const char PROGMEM ecmd_i2c_tsl2550_pwr_up_text[] = "tsl2550 up";
const char PROGMEM ecmd_i2c_tsl2550_pwr_down_text[] = "tsl2550 down";
const char PROGMEM ecmd_i2c_tsl2550_mode_text[] = "tsl2550 mode";
#endif
#ifdef I2C_PCA9531_SUPPORT
const char PROGMEM ecmd_i2c_pca9531_text[] = "pca9531";
#endif
#ifdef I2C_PCF8574X_SUPPORT
const char PROGMEM ecmd_i2c_pcf8574x_read_text[] = "pcf8574x read";
const char PROGMEM ecmd_i2c_pcf8574x_set_text[] = "pcf8574x set";
#endif
#ifdef I2C_MAX7311_SUPPORT
const char PROGMEM ecmd_i2c_max7311_setDDRw_text[] = "max7311 setDDRw";
const char PROGMEM ecmd_i2c_max7311_setOUTw_text[] = "max7311 setOUTw";
const char PROGMEM ecmd_i2c_max7311_getDDRw_text[] = "max7311 getDDRw";
const char PROGMEM ecmd_i2c_max7311_getOUTw_text[] = "max7311 getOUTw";
const char PROGMEM ecmd_i2c_max7311_getINw_text[] = "max7311 getINw";
const char PROGMEM ecmd_i2c_max7311_set_text[] = "max7311 set";
const char PROGMEM ecmd_i2c_max7311_pulse_text[] = "max7311 pulse";
#endif
#ifdef MCUF_SUPPORT
#ifdef MCUF_CLOCK_SUPPORT
const char PROGMEM ecmd_mcuf_show_clock_text[] = "mcuf showclock";
#endif
#ifdef MCUF_SCROLLTEXT_SUPPORT
const char PROGMEM ecmd_mcuf_show_string_text[] = "mcuf showstring";
#endif
#ifdef MCUF_MODUL_SUPPORT
const char PROGMEM ecmd_mcuf_modul_list_text[] = "mcuf modul list";
const char PROGMEM ecmd_mcuf_modul_text[] = "mcuf modul";
#endif
#endif
#ifdef FS20_SUPPORT
#ifdef FS20_SEND_SUPPORT
const char PROGMEM ecmd_fs20_send_text[] = "fs20 send";
#endif
#ifdef FS20_RECEIVE_SUPPORT
const char PROGMEM ecmd_fs20_receive_text[] = "fs20 receive";
#endif
#ifdef FS20_RECEIVE_WS300_SUPPORT
const char PROGMEM ecmd_fs20_ws300_text[] = "fs20 ws300";
#endif
#endif
#ifndef TEENSY_SUPPORT
const char PROGMEM ecmd_help_text[] = "help";
const char PROGMEM ecmd_version_text[] = "version";
#endif
#ifdef FREE_SUPPORT
const char PROGMEM ecmd_free_text[] = "free";
#endif
#ifdef EEPROM_SUPPORT
const char PROGMEM ecmd_eeprom_reinit_text[] = "eeprom reinit";
#endif

/* Definition of function pointer array follows */
const struct ecmd_command_t PROGMEM ecmd_cmds[] = {
	{ ecmd_d_text, parse_cmd_d },
	{ ecmd_fuse_text, parse_cmd_fuse },
	{ ecmd_hostname_text, parse_cmd_hostname },
	{ ecmd_reset_text, parse_cmd_reset },
	{ ecmd_wdreset_text, parse_cmd_wdreset },
	{ ecmd_bootloader_text, parse_cmd_bootloader },
	{ ecmd_nslookup_text, parse_cmd_nslookup },
	{ ecmd_dns_server_text, parse_cmd_dns_server },
	{ ecmd_io_text, parse_cmd_io },
	{ ecmd_adc_get_text, parse_cmd_adc_get },
	{ ecmd_mac_text, parse_cmd_mac },
#ifdef DEBUG_ENC28J60
	{ ecmd_enc_dump_text, parse_cmd_enc_dump },
#endif
#ifdef ONEWIRE_DETECT_SUPPORT
	{ ecmd_onewire_list_text, parse_cmd_onewire_list },
#endif
	{ ecmd_onewire_get_text, parse_cmd_onewire_get },
	{ ecmd_onewire_convert_text, parse_cmd_onewire_convert },
	{ ecmd_rfm12_status_text, parse_cmd_rfm12_status },
	{ ecmd_rfm12_reinit_text, parse_cmd_rfm12_reinit },
#ifdef RFM12_IP_SUPPORT
	{ ecmd_rfm12_setbaud_text, parse_cmd_rfm12_setbaud },
	{ ecmd_rfm12_setbandwidth_text, parse_cmd_rfm12_setbandwidth },
	{ ecmd_rfm12_setmod_text, parse_cmd_rfm12_setmod },
	{ ecmd_rfm12_setgain_text, parse_cmd_rfm12_setgain },
	{ ecmd_rfm12_setdrssi_text, parse_cmd_rfm12_setdrssi },
#endif
#ifndef TEENSY_SUPPORT
#ifdef UIP_SUPPORT
#ifndef IPV6_SUPPORT
	{ ecmd_netmask_text, parse_cmd_netmask },
#endif
	{ ecmd_ip_text, parse_cmd_ip },
	{ ecmd_gw_text, parse_cmd_gw },
#endif
#endif
#ifdef RFM12_ASK_SENDER_SUPPORT
#ifdef RFM12_ASK_TEVION_SUPPORT
	{ ecmd_rfm12_ask_tevion_send_text, parse_cmd_rfm12_ask_tevion_send },
#endif
#ifdef RFM12_ASK_2272_SUPPORT
	{ ecmd_rfm12_ask_2272_send_text, parse_cmd_rfm12_ask_2272_send },
#endif
#ifdef RFM12_ASK_1527_SUPPORT
	{ ecmd_rfm12_ask_1527_send_text, parse_cmd_rfm12_ask_1527_send },
#endif
#endif
#ifdef RFM12_ASK_EXTERNAL_FILTER_SUPPORT
	{ ecmd_rfm12_ask_external_filter_text, parse_cmd_rfm12_ask_external_filter },
#endif
#ifdef RFM12_ASK_SENSING_SUPPORT
	{ ecmd_rfm12_ask_sense_text, parse_cmd_rfm12_ask_sense },
#endif
#ifdef I2C_DETECT_SUPPORT
	{ ecmd_i2c_detect_text, parse_cmd_i2c_detect },
#endif
#ifdef I2C_GENERIC_SUPPORT
	{ ecmd_i2c_read_byte_text, parse_cmd_i2c_read_byte },
	{ ecmd_i2c_read_byte_data_text, parse_cmd_i2c_read_byte_data },
	{ ecmd_i2c_read_word_data_text, parse_cmd_i2c_read_word_data },
	{ ecmd_i2c_write_byte_text, parse_cmd_i2c_write_byte },
	{ ecmd_i2c_write_byte_data_text, parse_cmd_i2c_write_byte_data },
	{ ecmd_i2c_write_word_data_text, parse_cmd_i2c_write_word_data },
#endif
#ifdef I2C_LM75_SUPPORT
	{ ecmd_i2c_lm75_text, parse_cmd_i2c_lm75 },
#endif
#ifdef I2C_DS1631_SUPPORT
	{ ecmd_i2c_ds1631_read_temp_text, parse_cmd_i2c_ds1631_read_temp },
	{ ecmd_i2c_ds1631_start_text, parse_cmd_i2c_ds1631_start },
	{ ecmd_i2c_ds1631_stop_text, parse_cmd_i2c_ds1631_stop },
#endif
#ifdef I2C_TSL2550_SUPPORT
	{ ecmd_i2c_tsl2550_read_lux_text, parse_cmd_i2c_tsl2550_read_lux },
	{ ecmd_i2c_tsl2550_pwr_up_text, parse_cmd_i2c_tsl2550_pwr_up },
	{ ecmd_i2c_tsl2550_pwr_down_text, parse_cmd_i2c_tsl2550_pwr_down },
	{ ecmd_i2c_tsl2550_mode_text, parse_cmd_i2c_tsl2550_mode },
#endif
#ifdef I2C_PCA9531_SUPPORT
	{ ecmd_i2c_pca9531_text, parse_cmd_i2c_pca9531 },
#endif
#ifdef I2C_PCF8574X_SUPPORT
	{ ecmd_i2c_pcf8574x_read_text, parse_cmd_i2c_pcf8574x_read },
	{ ecmd_i2c_pcf8574x_set_text, parse_cmd_i2c_pcf8574x_set },
#endif
#ifdef I2C_MAX7311_SUPPORT
	{ ecmd_i2c_max7311_setDDRw_text, parse_cmd_i2c_max7311_setDDRw },
	{ ecmd_i2c_max7311_setOUTw_text, parse_cmd_i2c_max7311_setOUTw },
	{ ecmd_i2c_max7311_getDDRw_text, parse_cmd_i2c_max7311_getDDRw },
	{ ecmd_i2c_max7311_getOUTw_text, parse_cmd_i2c_max7311_getOUTw },
	{ ecmd_i2c_max7311_getINw_text, parse_cmd_i2c_max7311_getINw },
	{ ecmd_i2c_max7311_set_text, parse_cmd_i2c_max7311_set },
	{ ecmd_i2c_max7311_pulse_text, parse_cmd_i2c_max7311_pulse },
#endif
#ifdef MCUF_SUPPORT
#ifdef MCUF_CLOCK_SUPPORT
	{ ecmd_mcuf_show_clock_text, parse_cmd_mcuf_show_clock },
#endif
#ifdef MCUF_SCROLLTEXT_SUPPORT
	{ ecmd_mcuf_show_string_text, parse_cmd_mcuf_show_string },
#endif
#ifdef MCUF_MODUL_SUPPORT
	{ ecmd_mcuf_modul_list_text, parse_cmd_mcuf_modul_list },
	{ ecmd_mcuf_modul_text, parse_cmd_mcuf_modul },
#endif
#endif
#ifdef FS20_SUPPORT
#ifdef FS20_SEND_SUPPORT
	{ ecmd_fs20_send_text, parse_cmd_fs20_send },
#endif
#ifdef FS20_RECEIVE_SUPPORT
	{ ecmd_fs20_receive_text, parse_cmd_fs20_receive },
#endif
#ifdef FS20_RECEIVE_WS300_SUPPORT
	{ ecmd_fs20_ws300_text, parse_cmd_fs20_ws300 },
#endif
#endif
#ifndef TEENSY_SUPPORT
	{ ecmd_help_text, parse_cmd_help },
	{ ecmd_version_text, parse_cmd_version },
#endif
#ifdef FREE_SUPPORT
	{ ecmd_free_text, parse_cmd_free },
#endif
#ifdef EEPROM_SUPPORT
	{ ecmd_eeprom_reinit_text, parse_cmd_eeprom_reinit },
#endif
        { NULL, NULL }
};

/* Soap function name <-> soap rpc name mapping */
const soap_command_t PROGMEM soap_cmds[] = {
        { NULL, NULL }
};
void
ethersex_meta_init (void)
{
#if ARCH == ARCH_HOST
    signal(SIGINT, ethersex_meta_exit);
#endif

    network_init ();
    periodic_init ();
    onewire_init ();
    rfm12_init ();
}  /* End of ethersex_meta_init. */

void
ethersex_meta_netinit (void)
{
#   if defined(DYNDNS_SUPPORT) && !defined(BOOTP_SUPPORT) \
      && ((!defined(IPV6_SUPPORT)) || defined(IPV6_STATIC_SUPPORT))
    dyndns_update();
#   endif

    init_enc28j60 ();
    resolv_init ();
    ecmd_net_init ();
    httpd_init ();
} /* End of ethersex_meta_netinit. */

#if ARCH == ARCH_HOST
void
ethersex_meta_exit (int signal)
{
    if (signal != SIGINT) return;
    printf ("Shutting down Ethersex ...\n");
    exit(0);
} /* End of ethersex_meta_exit. */
#endif  /* ARCH == ARCH_HOST */


void
ethersex_meta_startup (void)
{

}  /* End of ethersex_meta_startup. */

void
ethersex_meta_mainloop (void)
{

    debug_process_uart (); wdt_kick ();
    network_process (); wdt_kick ();
    rfm12_int_process (); wdt_kick ();
    rfm12_process (); wdt_kick ();
    periodic_process(); wdt_kick();
#ifdef CPU_SLEEP
/* Works only if there are interrupts enabled, e.g. from periodic.c */
        set_sleep_mode(SLEEP_MODE_IDLE);
        sleep_mode();
#endif
}


void periodic_process(void)
{
    static uint16_t counter = 0;
#if ARCH == ARCH_HOST
    {
	fd_set fds;
	struct timeval tv = { .tv_sec = 0, .tv_usec = 20000 };

	FD_ZERO (&fds);
#ifdef ECMD_PARSER_SUPPORT
	FD_SET (0, &fds);
#endif  /* ECMD_PARSER_SUPPORT */
	FD_SET (tap_fd, &fds);
	select (tap_fd + 1, &fds, NULL, NULL, &tv);

#ifdef ECMD_PARSER_SUPPORT
	if (FD_ISSET (0, &fds))
	   stdin_read ();
#endif  /* ECMD_PARSER_SUPPORT */

	if (FD_ISSET (tap_fd, &fds))
	   tap_read ();

#else
    if (newtick) {
        newtick=0;
#endif
        counter++;
#ifdef UIP_SUPPORT
        if (uip_buf_lock ()) {
#ifdef RFM12_IP_SUPPORT
           _uip_buf_lock --;
           if (uip_buf_lock ()) {
             return;           /* hmpf, try again shortly
                                   (let's hope we don't miss too many ticks */
           }
           else {
               rfm12_status = RFM12_OFF;
               rfm12_rxstart();
           }
#else
           return;
#endif
        }
#endif


if (counter % 1 == 0) {

#       if UIP_CONF_IPV6
        if (counter == 5) {
            // Send a router solicitation every 10 seconds, as long
            // as we only got a link local address.  First time one
            // second after boot 
#           ifndef IPV6_STATIC_SUPPORT
            if(((u16_t *)(uip_hostaddr))[0] == HTONS(0xFE80)) {
                uip_router_send_solicitation();
                transmit_packet();
            }
#           endif
        }
#       endif // UIP_CONF_IPV6 
;
}

if (counter % 10 == 0) {
 
#       if UIP_CONNS <= 255
            uint8_t i;
#       else
            uint16_t i;
#endif

#           if UIP_TCP == 1
            for (i = 0; i < UIP_CONNS; i++) {
		uip_stack_set_active(uip_conns[i].stack);
                uip_periodic(i);

                // if this generated a packet, send it now 
                if (uip_len > 0)
		    router_output();
            }
#           endif // UIP_TCP == 1

#           if UIP_UDP == 1
            // check udp connections every time 
            for (i = 0; i < UIP_UDP_CONNS; i++) {
		uip_stack_set_active(uip_udp_conns[i].stack);
                uip_udp_periodic(i);

                // if this generated a packet, send it now
                if (uip_len > 0)
		    router_output();
            }
#           endif
  
;
}
/* Heil Eris! */

if (counter % 50 == 0) {
enc28j60_periodic();
}

if (counter % 500 == 0) {
counter = 0;
uip_arp_timer();
}


#ifdef  UIP_SUPPORT
   uip_buf_unlock ();
#endif

#       ifdef BOOTLOADER_SUPPORT
        if(bootload_delay)
            if(-- bootload_delay == 0) {
		cli();
		_IVREG = _BV(IVCE);	        /* prepare ivec change */
		_IVREG = 0x00;                  /* change ivec */

		#ifdef USE_WATCHDOG
			wdt_disable();
		#endif
		
                void (*jump_to_application)(void) = NULL;
                jump_to_application();
            }
#       endif
    }
}

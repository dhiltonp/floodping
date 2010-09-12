/* port the enc28j60 is attached to */
pin(SPI_CS_NET, SPI_CS_HARDWARE)

ifdef(`conf_SD_READER', `dnl
  /* port the sd-reader CS is attached to */
  pin(SPI_CS_SD_READER, PB2, OUTPUT)
')dnl

ifdef(`conf_ONEWIRE', `dnl
  /* onewire support */
  pin(ONEWIRE, PD6)
')dnl

ifdef(`conf_STELLA', `dnl
  /* stella port 1 */
  STELLA_PORT1_RANGE(PC0,PC7)
')dnl

dnl STELLA_PORT2_RANGE(PA0,PA3)

ifdef(`conf_STATUSLED_POWER', `dnl
pin(STATUSLED_POWER, PA3, OUTPUT)
')dnl

ifdef(`conf_STATUSLED_BOOTED', `dnl
pin(STATUSLED_BOOTED, PA3, OUTPUT)
')dnl

ifdef(`conf_STATUSLED_NETLINK', `dnl
pin(STATUSLED_NETLINK, PA2, OUTPUT)
')dnl

ifdef(`conf_STATUSLED_TX', `dnl
pin(STATUSLED_TX, PA1, OUTPUT)
')dnl

ifdef(`conf_STATUSLED_RX', `dnl
pin(STATUSLED_RX, PA0, OUTPUT)
')dnl

ifdef(`conf_FS20', `dnl
/* fs20 support */
pin(FS20_SEND, PB2)
ifdef(`conf_FS20_RECEIVE', `dnl
/* DO NOT CHANGE PIN!  USES INTERNAL COMPARATOR! */
pin(FS20_RECV, PB3)
')dnl
')dnl

ifdef(`conf_RFM12', `dnl
/* port the rfm12 module CS is attached to */
RFM12_NO_INT
pin(SPI_CS_RFM12, PC2, OUTPUT)
')

ifdef(`conf_ZBUS', `dnl
/* port config for zbus */
pin(ZBUS_RXTX_PIN, PD2)
')

ifdef(`conf_ECMD_SERIAL_USART_RS485', `dnl
pin(ECMD_SERIAL_USART_TX, PC2)
')

ifdef(`conf_RC5', `
pin(RC5_SEND, PD4)
')

ifdef(`conf_LTC1257', `
  pin(LTC1257_CLK, PA2, OUTPUT)
  pin(LTC1257_DATA, PA1, OUTPUT)
  pin(LTC1257_LOAD, PA0, OUTPUT)
')

ifdef(`conf_USTREAM', `
  pin(VS1053_CS, PB0, OUTPUT)
  pin(VS1053_DREQ, PB3, INPUT)
')

ifdef(`conf_HD44780', `
  pin(HD44780_RS, PD3)
  pin(HD44780_RW, PD2)
  pin(HD44780_EN1, PB0)
  pin(HD44780_D4, PD4)
  pin(HD44780_D5, PD5)
  pin(HD44780_D6, PD6)
  pin(HD44780_D7, PD7)
')

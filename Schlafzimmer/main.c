
#include <avr/io.h>
#include <avr/wdt.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "i2c-master.h"
#include "i2c-rtc.h"

void InitPWM() {
	DDRB = (1 << PB1) | (1 << PB2) | (1 << PB3);
	TCCR1A = (1 << COM1A1) | (1 << COM1B1) | (1 << WGM10);
	TCCR1B = (1 << CS10);
	TCCR2 = (1 << CS20) | (1 << WGM20) | (1 << COM21);
}


uint8_t LinearizeForEye(uint8_t x) {
	//	if (x >= 0 && x < 5) {
	return (x);
	//	} else if (x >= 5 && x < 50) {
	//		return (x / 5);
	//	}
	//	return (((uint16_t) x) * x) >> 8;
}

char g_cPWMr = 0;
char g_cPWMg = 0;
char g_cPWMb = 0;

void SetColor(uint8_t uiR, uint8_t uiG, uint8_t uiB) {
	g_cPWMr = LinearizeForEye(uiR) * 0.85;
	g_cPWMg = LinearizeForEye(uiG) * 1;
	g_cPWMb = LinearizeForEye(uiB) * 0.75;
	OCR1BL = g_cPWMr;
	OCR1AL = g_cPWMg;
	OCR2 = g_cPWMb;
}

int uiLastCmd = 0;
int uiLastCmdTimer = 0;

#define         SLAVE_ADDR_IR        0b00110100
#define         SLAVE_ADDR_DISTANCE  0b00111100

int main() {
	wdt_reset();
	WDTCR |= (1 << WDP0) | (1 << WDP1) | (1 << WDP2);
	InitPWM();

	i2c_master_init();

	sei();

	_delay_ms(100);
	wdt_reset();
	SetColor(0xff, 0, 0);
	_delay_ms(100);
	wdt_reset();
	SetColor(0, 0xff, 0);
	_delay_ms(100);
	wdt_reset();
	SetColor(0, 0, 0xff);
	_delay_ms(100);
	wdt_reset();

	uint8_t i2c_errorcode, i2c_status;
	if (!i2c_rtc_init(&i2c_errorcode, &i2c_status)) // initialize rtc
			{
		SetColor(0xff, 0, 0);
		while (1)
			;
	}

	int uiLight = 0;
	int uiLightCmd = 0;
	int uiTempLight = 0;

	while (1) {

		wdt_reset();
		for (int uiTmp = 0; uiTmp < 30; uiTmp++) {
			_delay_ms(1);
			wdt_reset();
		}

		uint8_t i2c_rtc_status;

		i2c_master_start_wait(SLAVE_ADDR_IR + I2C_WRITE);
		if (i2c_master_write(0, &i2c_rtc_status) == 0)
				{
			if (i2c_master_rep_start(SLAVE_ADDR_IR + I2C_READ
			, &i2c_rtc_status) == 0)
					{
				int command = (i2c_master_read_ack() << 8)
						| i2c_master_read_ack();
				int addr = (i2c_master_read_ack() << 8) | i2c_master_read_nak();
				i2c_master_stop();

				i2c_master_start_wait(SLAVE_ADDR_IR + I2C_WRITE);
				i2c_master_write(0, &i2c_rtc_status);
				i2c_master_write(1, &i2c_rtc_status);
				i2c_master_stop();

				if (addr == 0b1110111100000000) {
					switch (command) {
					case 0:
						break;
					case 1:
						break;
					case 2:
						uiLight = 0;
						break;
					case 3:
						uiLight = 1;
						break;
					}
				}
			}
		}
		i2c_master_stop();

		i2c_master_start_wait(SLAVE_ADDR_DISTANCE + I2C_WRITE);
		if (i2c_master_write(0, &i2c_rtc_status) == 0)
				{
			if (i2c_master_rep_start(SLAVE_ADDR_DISTANCE + I2C_READ
			, &i2c_rtc_status) == 0)
					{
				uiLightCmd = i2c_master_read_ack();
				uiTempLight = i2c_master_read_nak();
				i2c_master_stop();

				i2c_master_start_wait(SLAVE_ADDR_DISTANCE + I2C_WRITE);
				i2c_master_write(0, &i2c_rtc_status);
				i2c_master_write(1, &i2c_rtc_status);
				i2c_master_stop();

				switch(uiLightCmd)
				{
				case 1:
					uiLight = 0;
					break;
				case 2:
					uiLight = 1;
					break;
				}
			}
		}
		i2c_master_stop(); // set stop conditon = release bus

		if (uiTempLight == 3) {
			SetColor(0x00, 0xff, 0x00);
		} else if (uiTempLight == 4) {
			SetColor(0xff, 0x00, 0x00);
		} else if (uiTempLight == 5) {
			SetColor(0x4, 0, 0);
		} else if (uiTempLight == 6) {
			SetColor(0x7f, 0xff, 0x7f);
		} else if (uiLight == 0) {
			SetColor(0, 0, 0);
		} else if (uiLight == 1) {
			SetColor(0xff, 0xff, 0xb0);
		}

	}
	return 0;
}
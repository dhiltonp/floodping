/************************************************************************/
/*                                                                      */
/*                      1-Wire Example					*/
/*                                                                      */
/*              Author: Peter Dannegger                                 */
/*                      danni@specs.de                                  */
/*                                                                      */
/************************************************************************/
#ifndef _main_h_
#define _main_h_

#define W1_POW	PD4
#define W1_PIN	PD5
#define W1_IN	PIND
#define W1_OUT	PORTD
#define W1_DDR	DDRD


#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <util/delay.h>

#define uchar unsigned char
#define uint unsigned int
#define bit uchar
#define idata
#define code

#include "global.h"
#include "1wire.h"
#include "tempmeas.h"
#include "timebase.h"

#endif

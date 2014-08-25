/*	Simple Delay Routines
	Copyright (C) 2014 Jesus Ruben Santa Anna Zamudio.

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef DELAYPORT_H
#define DELAYPORT_H

#if defined (PLIB_PIC16)

#include <xc.h>
// Include project specific configuration header file
#include "Config.h"
// Use built-in XC8 compiler macros for delay
#define delay_ms(x)	_delay((unsigned long)((x)*(CONFIG_TIMING_MAIN_CLOCK/1000.0)))
#define delay_us(x)	_delay((unsigned long)((x)*(CONFIG_TIMING_MAIN_CLOCK/1000000.0)))
#define delay_cycles(x) _delay(x)

#elif defined ( PLIB_PIC18 )

#include <xc.h>
// Include project specific configuration header file
#include "Config.h"
// Use built-in XC8 compiler macros for delay
#define delay_ms(x)	__delay_ms(x)
#define delay_us(x)	__delay_us(x)
#define delay_cycles(x) __delay32(x)

#elif defined ( PLIB_PIC24 )

#include <xc.h>
// Include project specific configuration header file
#include "Config.h"
// Use built-in XC16 compiler macros for delay
#define delay_ms(x)	__delay_ms(x)
#define delay_us(x)	__delay_us(x)
#define delay_cycles(x) __delay32(x)

#elif defined ( PLIB_RBPI )

#include "wiringPi.h"
#define delay_ms(x)	delay(x)
#define delay_us(x)	delayMicroseconds(x)

#endif

#endif
// End of Header file

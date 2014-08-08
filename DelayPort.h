#ifndef DELAYPORT_H
#define DELAYPORT_H

#if defined (PLIB_PIC16)

#include <xc.h>
#define delay_ms(x)	_delay((unsigned long)((x)*(CONFIG_TIMING_MAIN_CLOCK/1000.0)))
#define delay_us(x)	_delay((unsigned long)((x)*(CONFIG_TIMING_MAIN_CLOCK/1000000.0)))
#define delay_cycles(x) _delay(x)

#elif defined ( PLIB_PIC18 )

#include <xc.h>
#define delay_ms(x)	__delay_ms(x)
#define delay_us(x)	__delay_us(x)
#define delay_cycles(x) __delay32(x)

#elif defined ( PLIB_PIC24 )

#include <xc.h>
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

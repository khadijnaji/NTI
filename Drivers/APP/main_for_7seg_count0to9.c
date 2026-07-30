#include "STD_Types.h"
#include "Bit_Math.h"
#include "DIO_int.h"
#include "DIO_config.h"
#include "SEVEN_SEG_int.h"
#include "avr/delay.h"


int main(void)
{
	DIO_voidInitialization( );
	for (int i=0 ;1; i++)
	{
		DIO_voidSetPortValue ( PORTAID , SevenSegment_u8DecTo7segConvert(i , ON));
		_delay_ms(500);
		if(i==9)
			i=0;
	}
	return 0;
}

/*
 * BlinkALed.c
 *
 * Created: 30.11.2017 14:19:56
 * Author : st117648
 */ 

#define F_CPU 16000000L

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	/* LED A3 ( PORTB01) als Ausgang setzen */
	DDRB = 0x02;
	
	/* Sensor Bandanfang und Bandende als Einngang definieren */
	DDRD = 0x00;
	PORTD = 0x0C;
	
    while (1) {
		
		if ((PIND & 0x03) ==0){
			PORTB = 0x02;
			_delay_ms(100);
			PORTB = 0x00;
			_delay_ms(100);
		}
		else{
			PORTB = 0x02;
			_delay_ms(500);
			PORTB = 0x00;
			_delay_ms(500);
		}
	}
}
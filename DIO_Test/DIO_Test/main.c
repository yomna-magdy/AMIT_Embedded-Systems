/*
 * DIO_Test.c
 *
 * Created: 4/4/2025 12:47:59 PM
 * Author : Yomna Magdy
 */ 


# define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"


int main(void)
{
 
 /*PORTS DIRECTION*/
 DIO_voidSetPortDirection(DIO_PORTA , DIO_PORT_OUTPUT);
 DIO_voidSetPortDirection(DIO_PORTB , DIO_PORT_OUTPUT);
 DIO_voidSetPortDirection(DIO_PORTC , DIO_PORT_OUTPUT);
 DIO_voidSetPortDirection(DIO_PORTD , DIO_PORT_INPUT );
 
 /*PORTS VALUE*/
 
 DIO_voidSetPortValue(DIO_PORTA, DIO_PORT_HIGH);
 DIO_voidSetPortValue(DIO_PORTC, DIO_PORT_LOW);
 
 
 
 
 
 
 //
 ///*   /* Replace with your application code */
 ///*VAR TO GET SWITCH STATE*/
 //u8 local_U8SW1, local_U8SW2, local_U8SW3;
 //
 //
 ///*SWITCH 1*/
//
 //DIO_voidSetPinDirection(DIO_PORTD, DIO_PIN2, DIO_PIN_INPUT);
 //
 ///*SWITCH 2*/
 //DIO_voidSetPinDirection(DIO_PORTD, DIO_PIN3, DIO_PIN_INPUT);
 //
//
///*SWITCH 3*/
 //DIO_voidSetPinDirection(DIO_PORTD, DIO_PIN4, DIO_PIN_INPUT);
 //
 ///*LEDS*/
 //
 //DIO_voidSetPinDirection(DIO_PORTC, DIO_PIN0, DIO_PIN_OUTPUT);
 //DIO_voidSetPinDirection(DIO_PORTC, DIO_PIN1, DIO_PIN_OUTPUT);
 //DIO_voidSetPinDirection(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
 //
 ///*BUZZER*/
 //
 //DIO_voidSetPinDirection(DIO_PORTC, DIO_PIN5, DIO_PIN_OUTPUT);
 //
 //
 
    while (1) 
    {
		
		
		
DIO_voidTogglePortValue(DIO_PORTB);
_delay_ms(1000);		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			//
		///*FIRST SWITCH*/
		//
		//DIO_voidGetPinValue(DIO_PORTD, DIO_PIN2, &local_U8SW1);
		//
		//
		//if (local_U8SW1 == 0 )
		//{
			//DIO_voidSetPinValue(DIO_PORTC, DIO_PIN0, DIO_PIN_HIGH);
		//}
		//else
		//{
			//DIO_voidSetPinValue(DIO_PORTC, DIO_PIN0, DIO_PIN_LOW);
		//}
		//
		///*SECOND SWITCH*/
		//DIO_voidGetPinValue(DIO_PORTD, DIO_PIN3, &local_U8SW2);
		//
		//if (local_U8SW2 == 0 )
		//{
			///*TOGGLE*/
			//DIO_voidTogglePinValue(DIO_PORTC, DIO_PIN1);
			//
			///*BUZZER */
			//DIO_voidTogglePinValue(DIO_PORTC, DIO_PIN5);
			//
			//_delay_ms(2000);
		//}
		//else
		//{	    DIO_voidSetPinValue(DIO_PORTC, DIO_PIN1, DIO_PIN_LOW);
				//DIO_voidSetPinValue(DIO_PORTC, DIO_PIN5, DIO_PIN_LOW);
		//}
		//
		///*THIRD SWITCH REVERSE CONNECTION*/
		//DIO_voidGetPinValue(DIO_PORTD, DIO_PIN4, &local_U8SW3);
		//
		//if (local_U8SW3 == 0 )
		//{
			//DIO_voidSetPinValue(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
		//}
		//else
		//{
				//DIO_voidSetPinValue(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);	
		//}
		
	}
}


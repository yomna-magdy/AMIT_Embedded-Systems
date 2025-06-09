/*
 * LED_Test.c
 *
 * Created: 4/13/2025 7:21:43 AM
 * Author : yomna
 */ 

#include <avr/io.h>

/*UTILES_LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/*MCAL*/
#include "DIO_interface.h"

/*HAL*/
#include "LED_interface.h"



int main(void)
{
	 DIO_voidSetPinDirection(PORTC, DIO_PIN2 , DIO_PIN_OUTPUT);
	 
    /* Replace with your application code */
    while (1) 
    {
		DIO_voidSetPinValue(PORTC,DIO_PIN2 , DIO_PIN_HIGH);
    }
}


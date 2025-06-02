/*
 * BUZZER_program.c
 *
 * Created: 4/20/2025 1:08:06 PM
 *  Author: yomna
 */ 


/*UTILES_LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/*MCAL*/
#include "DIO_interface.h"

/*HAL*/
#include "LED_interface.h"


void BUZZER_voidInit  (u8 copy_u8BuzzerPort, u8 copy_u8BuzzerPin){

DIO_voidSetPinDirection(copy_u8BuzzerPort, copy_u8BuzzerPin, DIO_PIN_OUTPUT)	

}


void BUZZER_voidOn    (u8 copy_u8BuzzerPort, u8 copy_u8BuzzerPin){
	
	
	 DIO_voidSetPinValue(copy_u8BuzzerPort, copy_u8BuzzerPin, DIO_PIN_HIGH);
	
	
	
}
void BUZZER_voidOff   (u8 copy_u8BuzzerPort, u8 copy_u8BuzzerPin){
	
	
		DIO_voidSetPinValue(copy_u8BuzzerPort, copy_u8BuzzerPin, DIO_PIN_LOW);

	
}
void BUZZER_voidToggle(u8 copy_u8BuzzerPort, u8 copy_u8BuzzerPin){
	
	DIO_voidTogglePinValue(copy_u8BuzzerPort, copy_u8BuzzerPin);
}

/*
 * SWITCH_program.c
 *
 * Created: 4/20/2025 5:57:43 PM
 *  Author: yomna
 */ 



/*UTILES_LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/*MCAL*/
#include "DIO_interface.h"

/*HAL*/
#include "SWITCH_interface.h"



void Switch_voidInit(u8 copy_u8SwitchPort, u8 copy_u8SwitchPin){
	DIO_voidSetPinDirection(copy_u8SwitchPort, copy_u8SwitchPin, DIO_PIN_INPUT);
	
}
void Switch_voidGitSwitchState(u8 copy_u8SwitchPort, u8 copy_u8SwitchPin, u8 copy_u8SwitchConnectionType, u8* copy_pu8SwitchState){
		if (copy_pu8SwitchState !=NULL)
		{		
			u8 local_u8PinVal;
			DIO_voidGetPinValue(copy_u8SwitchPort, copy_u8SwitchPin, &local_u8PinVal)
				switch (copy_u8SwitchConnectionType)
				{
					case SWITCH_FORWARD_CONNECTION:
					switch(local_u8PinVal){
						case DIO_PIN_LOW:
						*copy_pu8SwitchState = SWITCH_NOT_PRESSED;
						break;
						
					case DIO_PIN_HIGH:
					*copy_pu8SwitchState = SWITCH_PRESSED;
					
					break;
					}
					break;
					
					case SWITCH_REVERSE_CONNECTION:
					
						switch(local_u8PinVal){
							case DIO_PIN_LOW:
							*copy_pu8SwitchState = SWITCH_PRESSED;
							break;
							
							case DIO_PIN_HIGH:
							*copy_pu8SwitchState = SWITCH_NOT_PRESSED;
							
							break;
						}
						
						
					break;
				}

		}
			
}
void Switch_voidInitPullUpResist  (u8 copy_u8SwitchPort, u8 copy_u8SwitchPin, u8 copy_u8SwitchConnectionType){
	
	if (SWITCH_REVERSE_CONNECTION == copy_u8SwitchConnectionType)
	{
		DIO_voidActivePinInPullUpResistance(copy_u8SwitchPort, copy_u8SwitchPin);
	}
}
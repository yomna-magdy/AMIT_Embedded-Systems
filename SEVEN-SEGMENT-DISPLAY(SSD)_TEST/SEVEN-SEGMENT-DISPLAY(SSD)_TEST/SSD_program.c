/*
 * SSD.c
 *
 * Created: 4/22/2025 1:45:56 PM
 *  Author: yomna
 */ 


#define F_CPU          16000000UL
#include <util/delay.h>
/*UTILES_LIB*/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

/*MCAL*/

#include "DIO_interface.h"

/*HAL*/

#include "SSD_interface.h"
#include "SSD_config.h"
#include "SSD_privet.h"






static u8 PRV_u8Numbers[10] = {SSD_ZERO, SSD_ONE, SSD_TWO, SSD_THREE, SSD_FOUR, SSD_FIVE, SSD_SIX, SSD_SEVEN, SSD_EIGHT, SSD_NINE};
	
	
	
void SSD_voidInit(void){
	
	DIO_voidSetPortDirection(SSD_DATA_PORT, DIO_PORT_OUTPUT);
	DIO_voidSetPinDirection(SSD_ENABLE_PORT, SSD_K1_ENABLE_PIN ,DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(SSD_ENABLE_PORT, SSD_K2_ENABLE_PIN ,DIO_PIN_OUTPUT);
		
}
	
	
void SSD_voidDisplayOneDigitNumper(u8 copy_u8Id, u8 copy_u8DesiredNumber){
	
if(copy_u8DesiredNumber <= 9){




switch(copy_u8Id){
	case SSD_ID_1:
		#if SSD_TYPE == SSD_COM_CATHODE
	 	DIO_voidSetPortValue(SSD_DATA_PORT, PRV_u8Numbers[copy_u8DesiredNumber]);
		DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K1_ENABLE_PIN, DIO_PIN_LOW);
		DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K2_ENABLE_PIN, DIO_PIN_HIGH);
			
		#elif SSD_TYPE == SSD_COM_ANODE
	DIO_voidSetPortValue(SSD_DATA_PORT, ~(PRV_u8Numbers[copy_u8DesiredNumber]));
	DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K1_ENABLE_PIN, DIO_PIN_HIGH);
	DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K2_ENABLE_PIN, DIO_PIN_LOW);
	#endif
	
	break;
	
	
	case SSD_ID_2:
		#if SSD_TYPE == SSD_COM_CATHODE	
		DIO_voidSetPortValue(SSD_DATA_PORT, PRV_u8Numbers[copy_u8DesiredNumber]);
		DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K2_ENABLE_PIN, DIO_PIN_LOW);
		DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K1_ENABLE_PIN, DIO_PIN_HIGH);
		
		#elif SSD_TYPE == SSD_COM_ANODE
		DIO_voidSetPortValue(SSD_DATA_PORT, ~(PRV_u8Numbers[copy_u8DesiredNumber]));
		DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K2_ENABLE_PIN, DIO_PIN_HIGH);
		DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K1_ENABLE_PIN, DIO_PIN_LOW);
		#endif
		
		
	break;

}		
}


}
	
	
	
void SSD_voidDisplayTwoDigitNumper( u8 copy_u8DesiredNumber){
	
	if(copy_u8DesiredNumber <= 99 ){
	u8 local_u8Tens = copy_u8DesiredNumber / 10;
	u8 local_u8Ones = copy_u8DesiredNumber % 10;
	
	
	DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K1_ENABLE_PIN, DIO_PIN_LOW);
	DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K2_ENABLE_PIN, DIO_PIN_LOW);
	
	
	DIO_voidSetPortValue(SSD_DATA_PORT, PRV_u8Numbers[local_u8Tens]);
	DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K1_ENABLE_PIN, DIO_PIN_HIGH);
	_delay_ms(10);
	DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K1_ENABLE_PIN, DIO_PIN_LOW);
	
	DIO_voidSetPortValue(SSD_DATA_PORT, PRV_u8Numbers[local_u8Ones]);
	DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K2_ENABLE_PIN, DIO_PIN_HIGH);
	_delay_ms(10);
	DIO_voidSetPinValue(SSD_ENABLE_PORT, SSD_K2_ENABLE_PIN, DIO_PIN_LOW);
	
	}
	
	
	
}



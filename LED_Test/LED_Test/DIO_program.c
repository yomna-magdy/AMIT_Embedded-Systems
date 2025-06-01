/*
 * DIO_program.c
 *
 * Created: 4/4/2025 12:50:29 PM
 *  Author: yomna
 */ 

#include <avr/io.h>

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "DIO_interface.h"
#include "DIO_register.h"


/*PIN API's*/
void DIO_voidSetPinDirection(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinDirection)
{
if(( copy_u8PortId<=3) && ( copy_u8PinId<=7) && ( copy_u8PinDirection <= 1)){
		switch(copy_u8PortId){
			case DIO_PORTA:
				switch(copy_u8PinDirection){
					case DIO_PIN_INPUT:
						CLR_BIT(DDRA_REG, copy_u8PinId);
							break;
					case DIO_PIN_OUTPUT:
						SET_BIT(DDRA_REG, copy_u8PinId);
							break;
				}
			case DIO_PORTB:
				switch(copy_u8PinDirection){
					case DIO_PIN_INPUT:
						CLR_BIT(DDRB_REG, copy_u8PinId);
							break;
					case DIO_PIN_OUTPUT:
						SET_BIT(DDRB_REG, copy_u8PinId);
							break;}
			case DIO_PORTC:
				switch(copy_u8PinDirection){
					case DIO_PIN_INPUT:
						CLR_BIT(DDRC_REG, copy_u8PinId);
							break;
					case DIO_PIN_OUTPUT:
						SET_BIT(DDRC_REG, copy_u8PinId);
							break;
				}
			case DIO_PORTD:
				switch(copy_u8PinDirection){
					case DIO_PIN_INPUT:
						CLR_BIT(DDRD_REG, copy_u8PinId);
							break;
					case DIO_PIN_OUTPUT:
						SET_BIT(DDRD_REG, copy_u8PinId);
							break;
								
				}
				}
				}
				
else
	{
		//return Error State
	}
	
	


		}

void DIO_voidSetPinValue(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinValue ){
	if (( copy_u8PortId<=3) && ( copy_u8PinId<=7) && ( copy_u8PinValue <= 1)){
		switch(copy_u8PortId){
		
			case DIO_PORTA:
				switch(copy_u8PinValue){
					case DIO_PIN_LOW:
						CLR_BIT(PORTA_REG, copy_u8PinId);
							break;
					case DIO_PIN_HIGH:
						SET_BIT(PORTA_REG, copy_u8PinId);
							break;
							}
	
			case DIO_PORTB:
				switch(copy_u8PinValue){
					case DIO_PIN_LOW:
						CLR_BIT(PORTB_REG, copy_u8PinId);
							break;
					case DIO_PIN_HIGH:
						SET_BIT(PORTB_REG, copy_u8PinId);
							break;
	}
	
	
			case DIO_PORTC:
				switch(copy_u8PinValue){
					case DIO_PIN_LOW:
						CLR_BIT(PORTC_REG, copy_u8PinId);
							break;
					case DIO_PIN_HIGH:
						SET_BIT(PORTC_REG, copy_u8PinId);
							break;
		}
		
		
			case DIO_PORTD:
				switch(copy_u8PinValue){
					case DIO_PIN_LOW:
						CLR_BIT(PORTD_REG, copy_u8PinId);
							break;
					case DIO_PIN_HIGH:
						SET_BIT(PORTD_REG, copy_u8PinId);
							break;
			}
		}
	}
		
		 
	else
	{
	}
	
}




void DIO_voidGetPinValue(u8 copy_u8PortId, u8 copy_u8PinId, u8* copy_Pu8PinValue)
{
	if (( copy_u8PortId<=3) && ( copy_u8PinId<=7) && ( copy_Pu8PinValue != NULL ))
	{
		switch (copy_u8PortId)
		{
		case DIO_PORTA:
			*copy_Pu8PinValue = GET_BIT(PINA_REG, copy_u8PinId);
			break;
		
		case DIO_PORTB:
			*copy_Pu8PinValue = GET_BIT(PINB_REG, copy_u8PinId);
			break;
		
		case DIO_PORTC:
			*copy_Pu8PinValue = GET_BIT(PINC_REG, copy_u8PinId);
			break;
		
		case DIO_PORTD:
			*copy_Pu8PinValue = GET_BIT(PIND_REG, copy_u8PinId);
			break;
		}
	} 
	else
	{
	}
}
	
	
	
void DIO_voidTogglePinValue(u8 copy_u8PortId, u8 copy_u8PinId){
	if ((copy_u8PortId <= 3) && (copy_u8PinId <= 7))
	{
		switch (copy_u8PortId)
		{
			case DIO_PORTA:
				TOG_BIT(PORTA_REG, copy_u8PinId);
			break;
			
			
			case DIO_PORTB:
				TOG_BIT(PORTB_REG, copy_u8PinId);
			break;
			
			
			case DIO_PORTC:
				TOG_BIT(PORTC_REG, copy_u8PinId);
			break;
			
			
			case DIO_PORTD:
				TOG_BIT(PORTD_REG, copy_u8PinId);
			break;
		}
	} 
	else
	{
	}
	
}
	
	
	
	
void DIO_voidActivePinInPullUpResistance(u8 copy_u8PortId, u8 copy_u8PinId){
	if ((copy_u8PortId <= 3) && (copy_u8PinId <= 7))
	{
		 switch (copy_u8PortId)
		 {
			 case DIO_PORTA:
			 SET_BIT(PORTA_REG, copy_u8PinId);
			 break;
			 
			 
			 case DIO_PORTB:
			 SET_BIT(PORTB_REG, copy_u8PinId);
			 break;
			 
			 
			 case DIO_PORTC:
			 SET_BIT(PORTC_REG, copy_u8PinId);
			 break;
			 
			 
			 case DIO_PORTD:
			 SET_BIT(PORTD_REG, copy_u8PinId);
			 break;
		 }
	} 
	else
	{
	}
	
}


/*PORT API's*/

void DIO_voidSetPortDirection(u8 copy_u8PortId, u8 copy_u8PortDirection){
if ((copy_u8PortId <=3) && ((DIO_PORT_INPUT == copy_u8PortDirection ) || (DIO_PORT_OUTPUT == copy_u8PortDirection)))
{
	switch (copy_u8PortId)
	{
	case DIO_PORTA:
	DDRA_REG = copy_u8PortDirection;
	break;
		
	case DIO_PORTB:
	DDRB_REG = copy_u8PortDirection;
	break;
	
	case DIO_PORTC:
	DDRC_REG = copy_u8PortDirection;
	break;
	
	case DIO_PORTD:
	DDRD_REG = copy_u8PortDirection;
	break;
	}
	
} 
else
{
}
}




void DIO_voidSetPortValue(u8 copy_u8PortId, u8 copy_u8PortValue){
	if ((copy_u8PortId <=3))
	{
		switch (copy_u8PortId)
		{
		case DIO_PORTA:
		PINA_REG = copy_u8PortValue;
			break;
			
			
		case DIO_PORTB:
		PINB_REG = copy_u8PortValue;
			break;
			
			
		case DIO_PORTC:
		PINC_REG = copy_u8PortValue;
			break;
			
			
		case DIO_PORTD:
		PIND_REG = copy_u8PortValue;
			break;
		}
	}
	else
	{
	}

}



void DIO_voidGetPortValue(u8 copy_u8PortId, u8* copy_Pu8PortValue){
	if ((copy_u8PortId <=3) && (copy_Pu8PortValue != NULL))
	{
		switch (copy_u8PortId)
		{
		case DIO_PORTA:
		*copy_Pu8PortValue=PINA_REG;
			break;
			
		case DIO_PORTB:
		*copy_Pu8PortValue=PINB_REG;
		break;
		
		case DIO_PORTC:
		*copy_Pu8PortValue=PINC_REG;
		break;
		
		case DIO_PORTD:
		*copy_Pu8PortValue=PIND_REG;
		break;
		}
	}
	else
	{
	}
}



void DIO_voidTogglePortValue(u8 copy_u8PortId){
	
	if ((copy_u8PortId <=DIO_PORTD))
	{ switch (copy_u8PortId)
	{
	case DIO_PORTA:
	PORTA_REG =(~PORTA_REG);
		break;

	case DIO_PORTB:
	PORTB_REG =(~PORTB_REG);
	break;

	case DIO_PORTC:
	PORTC_REG =(~PORTC_REG);
	break;

	case DIO_PORTD:
	PORTD_REG =(~PORTD_REG);
	break;

	}
	}
	else
	{
	}

}


void DIO_voidActivePortInPullUpResistance(u8 copy_u8PortId){
	if ((copy_u8PortId <=3))
	{
		switch (copy_u8PortId)
		{
		case DIO_PORTA:
		PORTA_REG = 0xff;
			break;
			
		case DIO_PORTB:
		PORTB_REG = 0xff;
			break;
			
		case DIO_PORTC:
		PORTC_REG = 0xff;
			break;
			
		case DIO_PORTD:
		PORTD_REG = 0xff;
			break;
		}
	}
	else
	{
	}

	
	
}
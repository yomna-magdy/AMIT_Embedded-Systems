/*
 * DIO_interface.h
 *
 * Created: 4/4/2025 12:50:51 PM
 *  Author: yomna
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/*MACROS FOR DIO PORT ID*/
#define DIO_PORTA		 0
#define DIO_PORTC		 1
#define DIO_PORTB		 2
#define DIO_PORTD		 3


/*MACROS FOR DIO PORT MODE*/
#define DIO_PORT_INPUT    0x00
#define DIO_PORT_OUTPUT   0xff


/*MACROS FOR DIO PORT VALUE*/
#define DIO_PORT_LOW    0x00
#define DIO_PORT_HIGH   0xff



/*MACROS FOR DIO PIN MODE*/
#define DIO_PIN_INPUT    0
#define DIO_PIN_OUTPUT   1


/*MACROS FOR DIO PIN ID*/
#define DIO_PIN0         0
#define DIO_PIN1         1
#define DIO_PIN2         2
#define DIO_PIN3         3
#define DIO_PIN4         4
#define DIO_PIN5         5
#define DIO_PIN6         6
#define DIO_PIN7         7

/*MACROS FOR DIO PIN  STATE*/
#define DIO_PIN_LOW      0
#define DIO_PIN_HIGH     1


                               /************************************** APIS PROTO TYPES **************************************/
/*PIN API's*/

void DIO_voidSetPinDirection			(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinDirection);
void DIO_voidSetPinValue				(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinValue);
void DIO_voidGetPinValue				(u8 copy_u8PortId, u8 copy_u8PinId, u8* copy_Pu8PinValue);
void DIO_voidTogglePinValue				(u8 copy_u8PortId, u8 copy_u8PinId);
void DIO_voidActivePinInPullUpResistance(u8 copy_u8PortId, u8 copy_u8PinId);


/*PORT API's*/

void DIO_voidSetPortDirection			 (u8 copy_u8PortId, u8 copy_u8PortDirection);
void DIO_voidSetPortValue				 (u8 copy_u8PortId, u8 copy_u8PortValue);
void DIO_voidGetPortValue				 (u8 copy_u8PortId, u8* copy_Pu8PortValue);
void DIO_voidTogglePortValue			 (u8 copy_u8PortId);
void DIO_voidActivePortInPullUpResistance(u8 copy_u8PortId);





#endif /* DIO_INTERFACE_H_ */
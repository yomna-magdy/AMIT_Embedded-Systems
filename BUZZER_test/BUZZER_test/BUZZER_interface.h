/*
 * BUZZER_interface.h
 *
 * Created: 4/20/2025 1:07:41 PM
 *  Author: yomna
 */ 


#ifndef BUZZER_INTERFACE_H_
#define BUZZER_INTERFACE_H_







/********************APIS PORT TYPES*********************/

void BUZZER_voidInit  (u8 copy_u8BuzzerPort, u8 copy_u8BuzzerPin);
void BUZZER_voidOn    (u8 copy_u8BuzzerPort, u8 copy_u8BuzzerPin, u8 copy_u8BuzzerConnectionType);
void BUZZER_voidOff   (u8 copy_u8BuzzerPort, u8 copy_u8BuzzerPin, u8 copy_u8BuzzerConnectionType);
void BUZZER_voidToggle(u8 copy_u8BuzzerPort, u8 copy_u8BuzzerPin);



#endif /* BUZZER_INTERFACE_H_ */
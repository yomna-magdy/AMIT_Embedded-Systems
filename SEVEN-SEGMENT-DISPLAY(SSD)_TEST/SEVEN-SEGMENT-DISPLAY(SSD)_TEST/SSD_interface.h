/*
 * SSD_interface.h
 *
 * Created: 4/22/2025 1:44:59 PM
 *  Author: yomna
 */ 


#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_

#define SSD_ID_1				1
#define SSD_ID_2				2

/*************************************API's**********************************/
void SSD_voidInit(void);
void SSD_voidDisplayOneDigitNumper(u8 copy_u8Id, u8 copy_u8DesiredNumber);
void SSD_voidDisplayTwoDigitNumper( u8 copy_u8DesiredNumber);


#endif /* SSD_INTERFACE_H_ */
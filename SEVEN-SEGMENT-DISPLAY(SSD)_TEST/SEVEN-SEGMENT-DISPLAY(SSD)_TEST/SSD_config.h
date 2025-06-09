/*
 * SSD_config.h
 *
 * Created: 4/22/2025 1:45:24 PM
 *  Author: yomna
 */ 


#ifndef SSD_CONFIG_H_
#define SSD_CONFIG_H_

                                 /*MACROS FOR SSD DECODER PINS CONFIGURATIONS*/

#define SSD_DATA_PORT		        DIO_PORTA
#define SSD_ENABLE_PORT             DIO_PORTB
#define SSD_K1_ENABLE_PIN			DIO_PIN1
#define SSD_K2_ENABLE_PIN			DIO_PIN2


#define SSD_DATA_PORT               DIO_PORTA


/* Options For SSD Type
1- SSD_COM_CATHODE
2- SSD_COM_ANNODE
*/


#define SSD_TYPE                    SSD_COM_CATHODE

#endif /* SSD_CONFIG_H_ */
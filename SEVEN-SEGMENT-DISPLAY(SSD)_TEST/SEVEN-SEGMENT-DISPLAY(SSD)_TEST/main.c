/*
 * SEVEN-SEGMENT-DISPLAY(SSD)_TEST.c
 *
 * Created: 4/22/2025 1:20:13 PM
 * Author : yomna
 */ 

#include <avr/io.h>

/*UTILES_LIB*/

#include "BIT_MATH.h"
#include "STD_TYPES.h"

/*MCAL*/

#include "DIO_interface.h"

/*HAL*/

#include "SSD_interface.h"


int main(void)
{
    /* Replace with your application code */
	SSD_voidInit();


    while (1) 
    {
		SSD_voidDisplayTwoDigitNumper(75);
    }
}


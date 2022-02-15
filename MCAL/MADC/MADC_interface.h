/*
 * MADC_interface.h
 *
 *  Created on: Oct 19, 2021
 *      Author: Omar
 */

#ifndef MCAL_MADC_MADC_INTERFACE_H_
#define MCAL_MADC_MADC_INTERFACE_H_


#define MADC_CHANNEL_0				0
#define MADC_CHANNEL_1				1
#define MADC_CHANNEL_2				2
#define MADC_CHANNEL_3				3
#define MADC_CHANNEL_4				4
#define MADC_CHANNEL_5				5
#define MADC_CHANNEL_6				6
#define MADC_CHANNEL_7				7


void MADC_voidInit(void);
u16 MADC_voidADCread(u8 Copy_ADCchannel);


#endif /* MCAL_MADC_MADC_INTERFACE_H_ */

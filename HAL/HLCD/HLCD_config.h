/*
 * HLCD_config.h
 *
 *  Created on: Oct 11, 2021
 *      Author: aya_enan
 */

#ifndef HLCD_HLCD_CONFIG_H_
#define HLCD_HLCD_CONFIG_H_


#define PORT_DATA      DIO_u8_PORTA
#define PORT_CONTROL   DIO_u8_PORTA

#define HLCD_RS_PIN    DIO_u8_PIN1

#define HLCD_E_PIN     DIO_u8_PIN2

#define HLCD_D4_PIN   DIO_u8_PIN3
#define HLCD_D5_PIN   DIO_u8_PIN4
#define HLCD_D6_PIN   DIO_u8_PIN5
#define HLCD_D7_PIN   DIO_u8_PIN6
/*
 *   choose Function SET :
 *   FUNCTION_SET_8BIT_MODE_2LINES
 *   FUNCTION_SET_8BIT_MODE_1LINES
 *   FUNCTION_SET_4BIT_MODE_2LINES
 *   FUNCTION_SET_4BIT_MODE_1LINES
 */


#define FUNCTION_SET  FUNCTION_SET_4BIT_MODE_2LINES

/*
 * choose DISPLAY_ON_OFF :
 * DISPLAY_ON_CURSOR_ON_BLINK
 * DISPLAY_ON_CURSOR_ON_NOBLINK
 * DISPLAY_ON_CURSOR_OFF_NOBLINK
 * DISPLAY_OFF
 */
#define DISPLAY_ON_OFF  DISPLAY_ON_CURSOR_ON_NOBLINK

/*
 * choose ENTRY_MODE_SET:
 * ENTRY_MODE_SET_INCREASE
 * ENTRY_MODE_SET_DECREASE
 */
#define ENTRY_MODE_SET ENTRY_MODE_SET_INCREASE
#endif /* HLCD_HLCD_CONFIG_H_ */

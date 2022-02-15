/*
 * MTIMER0_config.h
 *
 *  Created on: Oct 17, 2021
 *      Author: aya_enan
 */

#ifndef MTIMER0_MTIMER0_CONFIG_H_
#define MTIMER0_MTIMER0_CONFIG_H_

/*
 * options for prescaler :
 *    MTIMER0_PRESCALER_NO_CLOCK
	  MTIMER0_PRESCALER_NO_PRESCALER
	  MTIMER0_PRESCALER_8
	  MTIMER0_PRESCALER_64
	  MTIMER0_PRESCALER_256
	  MTIMER0_PRESCALER_1024
	  MTIMER0_PRESCALER_EXTCLK_FALL
	  MTIMER0_PRESCALER_EXTCLK_RISE
 */
#define MTIMER0_PRESCALER  MTIMER0_PRESCALER_64

/*
 *  options for mode:
 *  MTIMER0_MODE_NORMAL
    MTIMER0_MODE_CTC
    MTIMER0_MODE_FAST_PWM
    MTIMER0_MODE_PHASE_CORRECT
 */

#define MTIMER0_MODE   MTIMER0_MODE_FAST_PWM

/*
 * options for OC0 mode:
 *  MTIMER0_OC0_DISCONNECTED
    MTIMER0_OC0_TOG
    MTIMER0_OC0_CLEAR
    MTIMER0_OC0_SET
    MTIMER0_OC0_FASTPWM_NONINVERTED
	MTIMER0_OC0_FASTPWM_INVERTED
 */

#define MTIMER0_OC0_MODE   MTIMER0_OC0_FASTPWM_NONINVERTED





#endif /* MTIMER0_MTIMER0_CONFIG_H_ */

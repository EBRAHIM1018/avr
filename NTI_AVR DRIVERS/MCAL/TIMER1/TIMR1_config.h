/*
 * TIMR1_config.h
 *
 * Created: 09/03/2023 11:48:21 م
 *  Author: Ebrahim Ahmed
 */ 


#ifndef TIMR1_CONFIG_H_
#define TIMR1_CONFIG_H_

/*Range
#define TIMER2_NORMAL
#define TIMER2_CTC
#define TIMER2_FAST_PWM
#define TIMER2_PHASE_PWM
*/

#define TIMER1_MODE 		TIMER1_NORMAL
/*Range
//#define		NO_PRESCALLER			0
#define TIMER2_DIV_BY_1
#define TIMER2_DIV_BY_8
#define TIMER2_DIV_BY_32
#define TIMER2_DIV_BY_64
#define TIMER2_DIV_BY_128
#define TIMER2_DIV_BY_256
#define TIMER2_DIV_BY_1024
*/
#define TIMER1_PRESCALER  	TIMER1_DIV_BY_8

/*Range
#define TIMER2_NO_ACTION
#define TIMER2_TOGGLE
#define TIMER2_SET
#define TIMER2_CLEAR
#define TIMER2_NIN_INVERTING
#define TIMER2_INVERTING
*/

#define TIMER1_COM_EVENT   TIMER1_NO_ACTION

#define TIMER1_A      ENABLE
#define TIMER1_B      DISABLE


#endif /* TIMR1_CONFIG_H_ */
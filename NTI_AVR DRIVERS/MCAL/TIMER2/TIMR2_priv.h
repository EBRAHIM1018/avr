﻿/*
 * TIMR2_priv.h
 *
 * Created: 09/03/2023 11:15:31 م
 *  Author: Ebrahim Ahmed
 */ 


#ifndef TIMR2_PRIV_H_
#define TIMR2_PRIV_H_


#define TIMSK	 (*(volatile u8 * )0x59)
#define OCR2 	 (*(volatile u8 * )0x43)
#define TCCR2	 (*(volatile u8 * )0x45)
#define TCNT2	 (*(volatile u8 * )0x44)
#define TIFR	 (*(volatile u8 * )0x58)
#define SFIOR	 (*(volatile u8 * )0x50)
#define ASSR	 (*(volatile u8 * )0x42)





#define TIMER2_NORMAL 		1
#define TIMER2_CTC 			2
#define TIMER2_FAST_PWM 	3
#define TIMER2_PHASE_PWM 	4

#define	NO_PRESCALLER			0
#define TIMER2_DIV_BY_1         1
#define TIMER2_DIV_BY_8         2
#define TIMER2_DIV_BY_32        3
#define TIMER2_DIV_BY_64        4
#define TIMER2_DIV_BY_128       5
#define TIMER2_DIV_BY_256       6
#define TIMER2_DIV_BY_1024      7



#define TIMER2_NO_ACTION	100
#define TIMER2_TOGGLE		12
#define TIMER2_SET			20
#define TIMER2_CLEAR		25


#define TIMER2_NIN_INVERTING	20
#define TIMER2_INVERTING		25




#endif /* TIMR2_PRIV_H_ */
/*
 * TIMR1_int.h
 *
 * Created: 09/03/2023 11:55:56 م
 *  Author: Ebrahim Ahmed
 */ 


#ifndef TIMR1_INT_H_
#define TIMR1_INT_H_



void TIMER1_void_Init(void);


void TIMER1_void_SetTimerReg(u8 Copy_uint8Val);


void TIMER1_void_SetCompareVal(u8 Copy_uint8Val);


void TIMER1_void_SetInput_Capture_Register_Val(u8 Copy_uint8Val);


void TIMER1_void_EnableOVInt(void);


void TIMER1_void_DisableOVInt(void);



void TIMER1_void_EnableCTCInt(void);


void TIMER1_void_DisableCTCInt(void);


void TIMER1_void_EnableICUInt(void);



void TIMER1_void_DisableICUInt(void);


void TIMER1_void_SetOVCallBack(void (*Copy_ptr) (void) ) ;



void TIMER1_void_SetCTCACallBack(void (*Copy_ptr) (void) );
void TIMER1_void_SetCTCBCallBack(void (*Copy_ptr) (void) );
void TIMER1_void_SetICUCallBack(void (*Copy_ptr) (void) ) ;





#endif /* TIMR1_INT_H_ */
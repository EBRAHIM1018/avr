/*
 * INT_EEBROM.h
 *
 * Created: 11/03/2023 10:59:33 ص
 *  Author: Ebrahim Ahmed
 */ 


#ifndef INT_EEBROM_H_
#define INT_EEBROM_H_


void EEBROM_WRITE (u16 Address, u8 data) ;
void EEBROM_READ (u16 address);
void EEBROM_intEnable(void);
void EEBROM_intDisable(void);

#endif /* INT_EEBROM_H_ */
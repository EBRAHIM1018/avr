/*
 * EEPROM_prog.c
 *
 * Created: 11/03/2023 11:44:11 ص
 *  Author: Ebrahim Ahmed
 */ 


#include "PRIV_EEPROM.h"
#include "INT_EEBROM.h"


void EEBROM_WRITE(u16 Address, u8 Data)
{
	while(EECR & (1<<EEWE));
	EEAR = Address;
	EEDR = Data;
	EECR |= (1<<EEMWE);
	EECR |= (1<<EEWE);
	
}







void EEBROM_READ (u16 Address);
{
	while(EECR & (1<<EEWE));
	EEAR = Address;
	EECR |= (1<<EERE);
    return EEDR;
	
}
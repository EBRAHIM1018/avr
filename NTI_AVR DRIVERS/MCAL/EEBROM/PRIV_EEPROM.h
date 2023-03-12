/*
 * PRIV_EEPROM.h
 *
 * Created: 11/03/2023 10:35:57 ص
 *  Author: Ebrahim Ahmed
 */ 


#ifndef PRIV_EEPROM_H_
#define PRIV_EEPROM_H_

/**************************The EEPROM Address Register************/
#define			EEARH			*((volatile u8 *)0x3F)
#define			EEARL			*((volatile u8 *)0x3E)

#define			EEDR			*((volatile u8 *)0x3D)  //The EEPROM Data Register
#define			EECR			*((volatile u8 *)0x3C)  //The EEPROM Control Register

#define			SPMCR			*((volatile u16 *)0x57) //Store Program Memory Enable


#define  Enable                  1
#define  Disable                 0


#define  EERIE                   3
#define  EEMWE                   2
#define  EEWE                    1
#define  EERE                    0



#endif /* PRIV_EEPROM_H_ */
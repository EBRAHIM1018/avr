/*
 * ADC_private.h
 *
 * Created: 10/03/2023 10:01:32 م
 *  Author: Ebrahim Ahmed
 */ 


#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of ADCSRA    	*/
/**			   Register	is  0X26						    	*/
/****************************************************************/
/**			   ADCSRA : MCU Control Register contains control	*/
/** 		   bits for interrupt sense control and general 	*/
/**            MCU functions.							    	*/
/****************************************************************/

#define ADCSRA		*((volatile u8 * ) (0X26))

/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of MCUCSR   	*/
/**			   Register	is  0X54.								*/
/****************************************************************/
/**			   MCUCSR : MCU Control and Status Register			*/
/****************************************************************/

#define ADMUX       *((volatile u8 * ) (0X27))

/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of GICR     	*/
/**			   Register	is  0X5B.								*/
/****************************************************************/
/**			   GICR : General Interrupt Control Register		*/
/****************************************************************/

#define ADCL        *((volatile u8 * ) (0X24))


/****************************************************************/
/** !comment : From Data Sheet :  Memory mapped of GIFR     	*/
/**			   Register	is  0X5A.						    	*/
/****************************************************************/
/**			   GIFR : General Interrupt Flag Register			*/
/****************************************************************/

#define ADCH        *((volatile u8 * ) (0X25))

#define SFIOR       *((volatile u8 * ) (0X50))
#define SREG		*((volatile u8 * ) (0X5F))


void __vector_16(void) __attribute__(( signal , used ));




#endif /* ADC_PRIVATE_H_ */
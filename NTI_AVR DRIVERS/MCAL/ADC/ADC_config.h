/*
 * ADC_config.h
 *
 * Created: 10/03/2023 09:54:05 م
 *  Author: Ebrahim Ahmed
 */ 


#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_



/****************************************************************/
/** !comment : Please Enter the Voltage Reference				*/
/** 		   VOLTAGE_REFERENCE can be : 						*/
/*					    					AREF 				*/
/*						    				AVCC 				*/
/*							    			INTERNAL			*/
/****************************************************************/

#define VOLTAGE_REFERENCE			AVCC



/****************************************************************/
/** !comment : Please Enter the ADJUSTMENT						*/
/** 		   ADJUSTMENT can be : 								*/
/*					    					RIGHT_ADJUSTMENT	*/
/*							    			LEFT_ADJUSTMENT		*/
/****************************************************************/
/****************************************************************/
/** NOTE	 : The preferred adjustment for a 8 bits Resolution	*/
/*				is LEFT_ADJUSTMENT and for a 10 bits Resolution	*/
/*				is RIGHT_ADJUSTMENT								*/
/****************************************************************/

#define ADJUSTMENT				LEFT_ADJUSTMENT


/****************************************************************/
/** !comment : Please Enter the Voltage Reference				*/
/** 		   VOLTAGE_REFERENCE can be : 						*/
/*					    					AVCC 				*/
/*						    				AREF 				*/
/*							    			INTERNAL			*/
/****************************************************************/

#define ADC_CHANNEL_NUMBER		ch0


/****************************************************************/
/** !comment : Please Enter the Voltage Reference				*/
/** 		   VOLTAGE_REFERENCE can be : 						*/
/*					    					AVCC 				*/
/*						    				AREF 				*/
/*							    			INTERNAL			*/
/****************************************************************/

#define ADC_AUTO_TRIGGER_SOURCE		FREE_RUNNING_MODE

/****************************************************************/
/** !comment : Please Enter the Voltage Reference				*/
/** 		   VOLTAGE_REFERENCE can be : 						*/
/*					    					AVCC 				*/
/*						    				AREF 				*/
/*							    			INTERNAL			*/
/****************************************************************/

#define ADC_PRESCALLER				DIVID_BY_64


/****************************************************************/
/** !comment :              DIO PINS    			          	*/ 
/****************************************************************/


#endif /* ADC_CONFIG_H_ */
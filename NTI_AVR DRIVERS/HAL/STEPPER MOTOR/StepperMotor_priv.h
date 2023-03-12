/*
 * StepperMotor_priv.h
 *
 * Created: 03/03/2023 02:36:11 م
 *  Author: Ebrahim Ahmed
 */ 


#ifndef STEPPERMOTOR_PRIV_H_
#define STEPPERMOTOR_PRIV_H_


/*********************************************************************/
/* comment :Define pins and port for Data type [ StepperMotor ] 	**/			
/*********************************************************************/


typedef struct steppermotor
{
	
	u8 blue_pin ;    /*  Blue wire for Stepper Motor		 */
	
	u8 pink_pin ;    /*  Pink wire for Stepper Motor		 */
	
	u8 yellow_pin ;  /*  Yellow wire for Stepper Motor		 */
	
	u8 orange_pin ;  /*  Orange wire for Stepper Motor		 */
	
	u8 blue_port ;   /*  a port for blue wire for Stepper Motor		 */
	
	u8 pink_port ;   /*  a port for pink wire for Stepper Motor		 */
	
	u8 yellow_port ; /*  a port for yellow wire for Stepper Motor		 */
	
	u8 orange_port ; /*  a port for orange wire for Stepper Motor		 */
	
}StepperMotor ;

#endif /* STEPPERMOTOR_PRIV_H_ */
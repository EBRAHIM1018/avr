/*
 * StepperMotor_int.h
 *
 * Created: 02/03/2023 10:41:39 م
 *  Author: Ebrahim Ahmed
 */ 


#ifndef STEPPERMOTOR_INT_H_
#define STEPPERMOTOR_INT_H_

/****************************************************************/
/*********************** STD LIB DIRECTIVES *********************/
/****************************************************************/

#include "std_types.h"
#include "bit_math.h"

/****************************************************************/
/*********************** Component DIRECTIVES *******************/
/****************************************************************/

#include "dio.h"
#include "StepperMotor_priv.h"
#include "StepperMotor_config.h"



/****************************************************************/
/* Description    : his function used to initialize Stepper  	*/ 
/*																*/
/*					Inputs : void					  			*/
/*					Return : void		 					    */
/****************************************************************/

void StepperMotor_voidInit (u8 motorNumber);

/****************************************************************/
/* Description    : This function used for stepper motor to  	*/ 
/*                   the direction of the rotation and angle    */
/*					  of rotation and motor speed & steps       */
/*																*/
/*					Inputs : motorNumber , direction , speed    */
/*                            type_steps , NumberOfSteps        */
/*					Return : void		 					    */
/****************************************************************/

void StepperMotor_voidMove (u8 MotorNumber , u8 Direction , u16 Speed ,u16 NumberOfSteps);





#endif /* STEPPERMOTOR_INT_H_ */
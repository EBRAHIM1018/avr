/*
 * GIE_int.h
 *
 * Created: 09/03/2023 10:52:52 م
 *  Author: Ebrahim Ahmed
 */ 


#ifndef GIE_INT_H_
#define GIE_INT_H_

/*****************************************************************/
/* Description    : This function used to Enable GIE			 */
/*																 */
/*					Inputs : void					  			 */
/*					Return : void		 					     */
/*****************************************************************/

void GIE_voidEnable();


/*****************************************************************/
/* Description    : This function used to Disable GIE			 */
/*																 */
/*					Inputs : void					  			 */
/*					Return : void		 					     */
/*****************************************************************/

void GIE_voidDisable();


#define SREG		* ( ( volatile u8 * ) ( 0X5F ) )

#endif /* GIE_INT_H_ */
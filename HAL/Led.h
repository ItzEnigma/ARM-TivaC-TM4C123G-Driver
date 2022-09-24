/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Led.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef LED_H
#define LED_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "../MCAL/DIO/DIO.h"
#include "../MCAL/MCU/Mcu.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define SysTick_OnTime                       (u32)16000
#define SysTick_OffTime                      (u32)32000

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef DIO_Channel                 LED_Channel;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void LED_TOG(LED_Channel led);


 
#endif  /* LED_H */

/**********************************************************************************************************************
 *  END OF FILE: Led.h
 *********************************************************************************************************************/

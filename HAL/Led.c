/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Led.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Led.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void LED_TOG(u08 led)        
* \Description     : This API toggles the pre-sent                                
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : [led - led pin number corresponding to MCU] -     
* \Parameters (out): None                                                      
* \Return value:   : None                                 
*******************************************************************************/
void LED_TOG(LED_Channel led)
{
    static u08 isOn = FALSE;
	DIO_ToggleChannel(led);
    isOn = !(isOn);
    if (isOn)   Mcu_SysTick_SetReloadValue(SysTick_OnTime);
    else        Mcu_SysTick_SetReloadValue(SysTick_OffTime);
}


/**********************************************************************************************************************
 *  END OF FILE: Led.c
 *********************************************************************************************************************/

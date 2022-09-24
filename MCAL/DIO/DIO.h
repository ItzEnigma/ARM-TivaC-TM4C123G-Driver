/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  DIO.h
 *       Module:  -
 *
 *  Description:  Contains MCU Port Functions Prototypes
 *  
 *********************************************************************************************************************/
#ifndef DIO_H
#define DIO_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "DIO_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define BB_PERIPHERAL_BASE_START                                               0x40000000
#define BB_PERIPHERAL_BASE_ALIAS_START                                         0x42000000

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
/*                             ******************** BITBANDING ********************
                bit_word_offset = (byte_offset x 32) + (bit_number x 4)
                bit_word_addr = bit_band_base (alias) + bit_word_offset                      */
#define BitBand_Peripheral(REG, BIT)    *(volatile u32*)((BB_PERIPHERAL_BASE_ALIAS_START) + (((((REG - BB_PERIPHERAL_BASE_START)+0x3FC)*32)) + (BIT*4)))



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/******************************************* Pin APIs ********************************************/

/***********************************************************************************
* Syntax          : (enum (Zero/One)) DIO_ReadChannel(u08 channel)        
* Description     : API for reading MCU channel without knowing the port.                                                                         
* Sync\Async      : Synchronous                                               
* Reentrancy      : Reentrant                                             
* Parameters (in) : [channel - pin number corresponding to MCU] -                     
* Parameters (out): None                                                      
* Return value:   : DIO_PinLevel enum  0
*                                       1
************************************************************************************/
DIO_PinLevel_e      DIO_ReadChannel  ( DIO_Channel channel );
/**********************************************************************************************************************/

/***********************************************************************************
* Syntax          : void DIO_WriteChannel(u08 channel, enum(Zero/One) level)        
* Description     : API for writing level on MCU channel without knowing the port.                                                                         
* Sync\Async      : Synchronous                                               
* Reentrancy      : Reentrant                                             
* Parameters (in) : [channel - pin number corresponding to MCU] -
                    [level   - pin value (DIO_LOW/DIO_HIGH)]                    
* Parameters (out): None                                                      
* Return value:   : None
************************************************************************************/
void                DIO_WriteChannel ( DIO_Channel channel, DIO_PinLevel_e level );
/**********************************************************************************************************************/

/***********************************************************************************
* Syntax          : void DIO_ToggleChannel(u08 channel, enum(Zero/One) level)        
* Description     : API for toggling level on MCU channel without knowing the port.                                                                         
* Sync\Async      : Synchronous                                               
* Reentrancy      : Reentrant                                             
* Parameters (in) : [channel - pin number corresponding to MCU] -          
* Parameters (out): None                                                      
* Return value:   : None
************************************************************************************/
void                DIO_ToggleChannel( DIO_Channel channel );
/**********************************************************************************************************************/

/******************************************* Port APIs ********************************************/

/***********************************************************************************
* Syntax          : u08 Dio_ReadPort(enum{PORTA : PORTF} port)        
* Description     : API for reading MCU port.                                                                         
* Sync\Async      : Synchronous                                               
* Reentrancy      : Reentrant                                             
* Parameters (in) : [port - desired port corresponding to MCU] -                     
* Parameters (out): None                                                      
* Return value:   : u08 ===> 0 : 255
************************************************************************************/
DIO_PortLevel       Dio_ReadPort     ( DIO_Port_e port);
/**********************************************************************************************************************/

/***********************************************************************************
* Syntax          : void DIO_WritePort(enum{PORTA : PORTF} port, u08 value)        
* Description     : API for writing value on MCU port.                                                                         
* Sync\Async      : Synchronous                                               
* Reentrancy      : Reentrant                                             
* Parameters (in) : [port    - port corresponding to MCU] -
                    [value   - port value (0 : 255)]                    
* Parameters (out): None                                                      
* Return value:   : None
************************************************************************************/
void                DIO_WritePort    ( DIO_Port_e port, DIO_PortLevel value );
/**********************************************************************************************************************/

 
#endif  /* DIO_H */

/**********************************************************************************************************************
 *  END OF FILE: DIO.h
 *********************************************************************************************************************/

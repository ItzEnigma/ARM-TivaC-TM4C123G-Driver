/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  -
 *
 *  Description:  Contains Definitions and Mapping of the MCU (TM4C123GH6PM) Peripherals Registers
 *  
 *********************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "../../Common/Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/********************************************* GPIO DATA Registers ***************************************************/
                                        /*  [APB] GPIO DATA BASE    */
#define GPIO_PORTA_APB_BASE_ADDRESS           					                (0x40004000)
#define GPIO_PORTB_APB_BASE_ADDRESS           					                (0x40005000)
#define GPIO_PORTC_APB_BASE_ADDRESS           					                (0x40006000)
#define GPIO_PORTD_APB_BASE_ADDRESS           					                (0x40007000)
#define GPIO_PORTE_APB_BASE_ADDRESS           					                (0x40024000)
#define GPIO_PORTF_APB_BASE_ADDRESS           					                (0x40025000)
                                        /*  [AHB] GPIO DATA BASE    */
#define GPIO_PORTA_AHB_BASE_ADDRESS                                             (0x40058000)
#define GPIO_PORTB_AHB_BASE_ADDRESS                                             (0x40059000)
#define GPIO_PORTC_AHB_BASE_ADDRESS                                             (0x4005A000)
#define GPIO_PORTD_AHB_BASE_ADDRESS                                             (0x4005B000)
#define GPIO_PORTE_AHB_BASE_ADDRESS                                             (0x4005C000)
#define GPIO_PORTF_AHB_BASE_ADDRESS                                             (0x4005D000)






/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**** SYS Peripheral3 CLK - struct corresponding to clock state for peripherals registers ******/
typedef struct 
{
    REGISTER_TAG GPIODIR;
    REGISTER_TAG GPIOIS;
    REGISTER_TAG GPIOIBE;    
    REGISTER_TAG GPIOIEV;
    REGISTER_TAG GPIOIM;    
    REGISTER_TAG GPIORIS;
    REGISTER_TAG GPIOMIS;    
    REGISTER_TAG GPIOICR;
    REGISTER_TAG GPIOAFSEL; 
}GPIO_REG_SET1;

typedef struct 
{
    REGISTER_TAG GPIODR2R;
    REGISTER_TAG GPIODR4R;
    REGISTER_TAG GPIODR8R;
    REGISTER_TAG GPIOODR;
    REGISTER_TAG GPIOPUR;
    REGISTER_TAG GPIOPDR;    
    REGISTER_TAG GPIOSLR;
    REGISTER_TAG GPIODEN;    
    REGISTER_TAG GPIOLOCK;
    REGISTER_TAG GPIOCR;    
    REGISTER_TAG GPIOAMSEL;
    REGISTER_TAG GPIOPCTL;    
    REGISTER_TAG GPIOADCCTL;
    REGISTER_TAG GPIODMACTL;
}GPIO_REG_SET2;

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/

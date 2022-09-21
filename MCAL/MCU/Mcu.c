/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Mcu.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Mcu.h"

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
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void Mcu_ClockInit(void)
{
    /******************** Configuring OSC Source *********************/
    if (MCU_MAIN_OSC_STATE  ==  1){     /* Disabled */
        /*  Force PIOSC with no PLL and System Clock Divisor */
        SYSCTRL_REGISTER_REGISTER_RCC |= (0x078E3AD1) | (0X2810);
    }
    else if (MCU_MAIN_OSC_STATE  ==  0){     /* Enabled */
        /*  Use 6 MHZ & PLL  */
        SYSCTRL_REGISTER_REGISTER_RCC = 0x078E3AD1;
        SYSCTRL_REGISTER_REGISTER_RCC &= ~((1 << 0) | (1 << 4) | (1 << 11) | (1 << 13) | (0xF << 23)); 
        SYSCTRL_REGISTER_REGISTER_RCC |= (MCU_MAIN_OSC_STATE << 4) | (MCU_SYSDIV_VAL << 23) | (1 << 22);
        while((SYS_CTRL_REGISTER_PLLSTAT & (1 << 0)) == 0);     /*  Waiting for PLL To LOCK  */
    }
    else{
        // MISRA Rule
    }
}

void Mcu_PeripheralClocksInit(void)
{
    /**************************************** Configuring Peripherals Clock Gates *********************************************/
    SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET1->RCGCGPIO.REG |= ( (GPIOA_CLK_STATE << GPIOA_CLK) | (GPIOB_CLK_STATE << GPIOB_CLK) |
                                                             (GPIOC_CLK_STATE << GPIOC_CLK) | (GPIOD_CLK_STATE << GPIOD_CLK) |
                                                             (GPIOE_CLK_STATE << GPIOE_CLK) | (GPIOF_CLK_STATE << GPIOF_CLK) );

    SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET1->RCGCWD.REG  |= ( (WD0_CLK_STATE << WD0_CLK) | (WD1_CLK_STATE << WD1_CLK) );

    SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET2->RCGCADC.REG |= ( (ADC0_CLK_STATE << ADC0_CLK) | (ADC1_CLK_STATE << ADC1_CLK) );

    SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET1->RCGCTIMER_16TO32.REG |= ( (TIMR0_16TO32_CLK_STATE << TIMER0_CLK_16TO32) | 
                            (TIMR1_16TO32_CLK_STATE << TIMER1_CLK_16TO32) | (TIMR2_16TO32_CLK_STATE << TIMER2_CLK_16TO32) |
                            (TIMR3_16TO32_CLK_STATE << TIMER3_CLK_16TO32) | (TIMR4_16TO32_CLK_STATE << TIMER4_CLK_16TO32) | 
                            (TIMR5_16TO32_CLK_STATE << TIMER5_CLK_16TO32) );
    
    SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET3->RCGCWTIMER_32TO64.REG |= ( (TIMR0_32TO64_CLK_STATE << TIMER0_CLK_32TO64) | 
                            (TIMR1_32TO64_CLK_STATE << TIMER1_CLK_32TO64) | (TIMR2_32TO64_CLK_STATE << TIMER2_CLK_32TO64) |
                            (TIMR3_32TO64_CLK_STATE << TIMER3_CLK_32TO64) | (TIMR4_32TO64_CLK_STATE << TIMER4_CLK_32TO64) | 
                            (TIMR5_32TO64_CLK_STATE << TIMER5_CLK_32TO64) );

    SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET1->RCGCUART.REG |= ( (UART0_CLK_STATE << UART0_CLK) | (UART1_CLK_STATE << UART1_CLK) |
                                                             (UART2_CLK_STATE << UART2_CLK) | (UART3_CLK_STATE << UART3_CLK) |
                                                             (UART4_CLK_STATE << UART4_CLK) | (UART5_CLK_STATE << UART5_CLK) |
                                                             (UART6_CLK_STATE << UART6_CLK) | (UART7_CLK_STATE << UART7_CLK) );
}


void Mcu_Init(void){
    Mcu_ClockInit();
    Mcu_PeripheralClocksInit();
}

/**********************************************************************************************************************
 *  END OF FILE: Mcu.c
 *********************************************************************************************************************/

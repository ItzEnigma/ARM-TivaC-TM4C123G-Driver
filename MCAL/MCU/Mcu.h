/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu.h
 *       Module:  -
 *
 *  Description:  Contains Micro-Controller Initialization (System/Clock/...)
 *  
 *********************************************************************************************************************/
#ifndef MCU_H
#define MCU_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


#include "Mcu_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef void (*SysTick_Notification)(void);

/*  GPIO Clock Gate Register    */
typedef enum{
    GPIOA_CLK,
    GPIOB_CLK,
    GPIOC_CLK,
    GPIOD_CLK,
    GPIOE_CLK,
    GPIOF_CLK
}GPIO_CLOCK_GATE_REGISTER;

/*  WDT Clock Gate Register    */
typedef enum{
    WD0_CLK,
    WD1_CLK
}WDT_CLOCK_GATE_REGISTER;

/*  Timer 16/32 Bit Clock Gate Register    */
typedef enum{
    TIMER0_CLK_16TO32,
    TIMER1_CLK_16TO32,
    TIMER2_CLK_16TO32,
    TIMER3_CLK_16TO32,
    TIMER4_CLK_16TO32,
    TIMER5_CLK_16TO32
}TIMER_16TO32_CLOCK_GATE_REGISTER;

/*  Timer 32/64 Bit Clock Gate Register    */
typedef enum{
    TIMER0_CLK_32TO64,
    TIMER1_CLK_32TO64,
    TIMER2_CLK_32TO64,
    TIMER3_CLK_32TO64,
    TIMER4_CLK_32TO64,
    TIMER5_CLK_32TO64
}TIMER_32TO64_CLOCK_GATE_REGISTER;

/*  UART Clock Gate Register    */
typedef enum{
    UART0_CLK,
    UART1_CLK,
    UART2_CLK,
    UART3_CLK,
    UART4_CLK,
    UART5_CLK,
    UART6_CLK,
    UART7_CLK
}UART_CLOCK_GATE_REGISTER;

/*  ADC Clock Gate Register    */
typedef enum{
    ADC0_CLK,
    ADC1_CLK
}ADC_CLOCK_GATE_REGISTER;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Mcu_ClockInit(void);

void Mcu_PeripheralClocksInit(void);

void Mcu_SysTick_Init(void);

void SysTick_SetNotification(SysTick_Notification);

void SysTick_Handler(void);

void Mcu_Init(void);

 
#endif  /* MCU_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu.h
 *********************************************************************************************************************/

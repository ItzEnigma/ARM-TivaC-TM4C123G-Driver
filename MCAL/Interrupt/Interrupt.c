/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Interrupt.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../../Common/Std_Types.h"
#include "Interrupt.h"

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
* \Syntax          : void Interrupt_Init(void)        
* \Description     : Initializes the NVIC priority mode and configures the Vector Table Interrupts and their priorities.                                                                                                                                                                        
* \Parameters (in) : none
* \Parameters (out): None                                                      
* \Return value:   : none
*******************************************************************************/
void Interrupt_Init(void)
{
    /******************** Configuring Priority Grouping\Subgrouping for system in APINT Register *********************/
    APINT |= (0x05FA0000 | (INTERRUPT_PRIORITY_MODE << 8));

    /************** Enable\Disable NVIC_ENx Registers (Enabling and Disabling Peripherals Interrupts) ****************/  
// GPIOx Interrupt ENABLE
    if (GPIO_PORTA_STATE == ENABLE)                     NVIC_REGISTER_EN->N0.b0  = ENABLE;
    if (GPIO_PORTB_STATE == ENABLE)                     NVIC_REGISTER_EN->N0.b1  = ENABLE;
    if (GPIO_PORTC_STATE == ENABLE)                     NVIC_REGISTER_EN->N0.b2  = ENABLE;
    if (GPIO_PORTD_STATE == ENABLE)                     NVIC_REGISTER_EN->N0.b3  = ENABLE;
    if (GPIO_PORTE_STATE == ENABLE)                     NVIC_REGISTER_EN->N0.b4  = ENABLE;
    if (GPIO_PORTF_STATE == ENABLE)                     NVIC_REGISTER_EN->N0.b30 = ENABLE;

// UARTx Interrupt ENABLE
    if (UART0_STATE      == ENABLE)                     NVIC_REGISTER_EN->N0.b5   = ENABLE;
    if (UART1_STATE      == ENABLE)                     NVIC_REGISTER_EN->N0.b6   = ENABLE;
    if (UART2_STATE      == ENABLE)                     NVIC_REGISTER_EN->N1.b1   = ENABLE;
    if (UART3_STATE      == ENABLE)                     NVIC_REGISTER_EN->N1.b27  = ENABLE;
    if (UART4_STATE      == ENABLE)                     NVIC_REGISTER_EN->N1.b28  = ENABLE;
    if (UART5_STATE      == ENABLE)                     NVIC_REGISTER_EN->N1.b29  = ENABLE;
    if (UART6_STATE      == ENABLE)                     NVIC_REGISTER_EN->N1.b30  = ENABLE;
    if (UART7_STATE      == ENABLE)                     NVIC_REGISTER_EN->N1.b31  = ENABLE;

// ADCx Interrupt ENABLE
    if (ADC0_SEQUENCE0_STATE    ==  ENABLE)             NVIC_REGISTER_EN->N0.b14   = ENABLE;
    if (ADC0_SEQUENCE1_STATE    ==  ENABLE)             NVIC_REGISTER_EN->N0.b15   = ENABLE;
    if (ADC0_SEQUENCE2_STATE    ==  ENABLE)             NVIC_REGISTER_EN->N0.b16   = ENABLE;
    if (ADC0_SEQUENCE3_STATE    ==  ENABLE)             NVIC_REGISTER_EN->N0.b17   = ENABLE;
    if (ADC1_SEQUENCE0_STATE    ==  ENABLE)             NVIC_REGISTER_EN->N1.b16   = ENABLE;
    if (ADC1_SEQUENCE1_STATE    ==  ENABLE)             NVIC_REGISTER_EN->N1.b17   = ENABLE;
    if (ADC1_SEQUENCE2_STATE    ==  ENABLE)             NVIC_REGISTER_EN->N1.b18   = ENABLE;
    if (ADC1_SEQUENCE3_STATE    ==  ENABLE)             NVIC_REGISTER_EN->N1.b19   = ENABLE;

// SSIx Interrupt ENABLE
    if (SSI0_STATE     ==   ENABLE)                     NVIC_REGISTER_EN->N0.b7    = ENABLE;
    if (SSI1_STATE     ==   ENABLE)                     NVIC_REGISTER_EN->N1.b2    = ENABLE;
    if (SSI2_STATE     ==   ENABLE)                     NVIC_REGISTER_EN->N0.b25   = ENABLE;
    if (SSI3_STATE     ==   ENABLE)                     NVIC_REGISTER_EN->N0.b26   = ENABLE;

// Watchdog Timer0\Timer1 Interrupt ENABLE
    if (WATCHDOG_TIMERS0AND1_STATE  ==   ENABLE)        NVIC_REGISTER_EN->N0.b18    = ENABLE;

// I2Cx Interrupt ENABLE
    if (I2C0_STATE     ==   ENABLE)                     NVIC_REGISTER_EN->N0.b8    = ENABLE;
    if (I2C1_STATE     ==   ENABLE)                     NVIC_REGISTER_EN->N0.b5    = ENABLE;
    if (I2C2_STATE     ==   ENABLE)                     NVIC_REGISTER_EN->N2.b4    = ENABLE;
    if (I2C3_STATE     ==   ENABLE)                     NVIC_REGISTER_EN->N2.b5    = ENABLE;
// ANALOG_COMPARATORx Interrupt ENABLE
    if (ANALOG_COMPARATOR0_STATE       ==   ENABLE)     NVIC_REGISTER_EN->N0.b25    = ENABLE;
    if (ANALOG_COMPARATOR1_STATE       ==   ENABLE)     NVIC_REGISTER_EN->N0.b26    = ENABLE;

// QEIx Interrupt ENABLE
    if (QEI0_STATE      ==   ENABLE)                    NVIC_REGISTER_EN->N0.b13    = ENABLE;
    if (QEI1_STATE      ==   ENABLE)                    NVIC_REGISTER_EN->N1.b6     = ENABLE;

// DMA SOFTWARE Interrupt ENABLE
    if (DMA_SOFTWARE_STATE      ==   ENABLE)            NVIC_REGISTER_EN->N1.b14    = ENABLE;

// DMA ERROR Interrupt ENABLE
    if (DMA_ERROR_STATE     ==   ENABLE)                NVIC_REGISTER_EN->N1.b15    = ENABLE;

// TIMERxA\TimerxB Interrupt ENABLE
    if (TIMER0A_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N0.b19    = ENABLE;
    if (TIMER0B_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N0.b20    = ENABLE;
    if (TIMER1A_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N0.b21    = ENABLE;
    if (TIMER1B_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N0.b22    = ENABLE;
    if (TIMER2A_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N0.b23    = ENABLE;
    if (TIMER2B_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N0.b24    = ENABLE;
    if (TIMER3A_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N1.b3    = ENABLE;
    if (TIMER3B_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N1.b4    = ENABLE;
    if (TIMER4A_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N2.b6    = ENABLE;
    if (TIMER4B_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N2.b7    = ENABLE;
    if (TIMER5A_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N2.b28    = ENABLE;
    if (TIMER5B_16TO32_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N2.b29    = ENABLE;
    if (TIMER0A_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N2.b30    = ENABLE;
    if (TIMER0B_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N2.b31    = ENABLE;
    if (TIMER1A_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b0    = ENABLE;
    if (TIMER1B_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b1    = ENABLE;
    if (TIMER2A_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b2    = ENABLE;
    if (TIMER2B_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b3    = ENABLE;
    if (TIMER3A_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b4    = ENABLE;
    if (TIMER3B_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b5    = ENABLE;
    if (TIMER4A_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b6    = ENABLE;
    if (TIMER4B_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b7    = ENABLE;
    if (TIMER5A_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b8    = ENABLE;
    if (TIMER5B_32TO64_BIT_STATE        ==   ENABLE)     NVIC_REGISTER_EN->N3.b9    = ENABLE;

// CANx Interrupt ENABLE
    if (CAN0_STATE      ==   ENABLE)                    NVIC_REGISTER_EN->N1.b7    = ENABLE;
    if (CAN1_STATE      ==   ENABLE)                    NVIC_REGISTER_EN->N1.b8    = ENABLE;

// Flash Memory and EEPROM Control Interrupt ENABLE
    if (FLASH_AND_EEPROM_CONTROLL_STATE     ==   ENABLE)     NVIC_REGISTER_EN->N0.b29    = ENABLE;

// USB Interrupt ENABLE
    if (USB_STATE       ==   ENABLE)                         NVIC_REGISTER_EN->N1.b12    = ENABLE;

// PWM Interrupt ENABLE
    if (PWM0_FAULT_STATE    ==    ENABLE)                 NVIC_REGISTER_EN->N0.b9         = ENABLE;
    if (PWM0_GENERATOR0_STATE   ==    ENABLE)                 NVIC_REGISTER_EN->N0.b10    = ENABLE;
    if (PWM0_GENERATOR1_STATE   ==    ENABLE)                 NVIC_REGISTER_EN->N0.b11    = ENABLE;
    if (PWM0_GENERATOR2_STATE   ==    ENABLE)                 NVIC_REGISTER_EN->N0.b12    = ENABLE;
    if (PWM0_GENERATOR3_STATE   ==    ENABLE)                 NVIC_REGISTER_EN->N1.b13    = ENABLE;
    if (PWM1_GENERATOR0_STATE   ==    ENABLE)                 NVIC_REGISTER_EN->N4.b6    = ENABLE;
    if (PWM1_GENERATOR1_STATE   ==    ENABLE)                 NVIC_REGISTER_EN->N4.b7    = ENABLE;
    if (PWM1_GENERATOR2_STATE   ==    ENABLE)                 NVIC_REGISTER_EN->N4.b8    = ENABLE;
    if (PWM1_GENERATOR3_STATE   ==    ENABLE)                 NVIC_REGISTER_EN->N4.b9    = ENABLE;
    if (PWM1_FAULT_STATE    ==    ENABLE)                 NVIC_REGISTER_EN->N4.b10       = ENABLE;

// System Control Interrupt ENABLE
    if (SYSTEM_CONTROL_STATE    ==  ENABLE)                    NVIC_REGISTER_EN->N0.b28   = ENABLE;

// Hibernation Module Interrupt ENABLE
    if (HIBERNATION_MODULE_STATE    ==  ENABLE)                NVIC_REGISTER_EN->N1.b11   = ENABLE;

// System Exception Interrupt ENABLE
    if (SYSTEM_EXCEPTION_IMPRECISE_STATE    ==  ENABLE)        NVIC_REGISTER_EN->N3.b10   = ENABLE;

    /****************************** Configuring Priority Grouping\Subgrouping for system in APINT Register ****************************/ 
    /*                              PRI0                                   */
    NVIC_REGISTER_PRI->N0.REG |= ( (GPIO_PORTA_PRI << 5) | (GPIO_PORTB_PRI << 13) | (GPIO_PORTC_PRI << 21) | (GPIO_PORTD_PRI << 29) );
    /*                              PRI1                                   */
    NVIC_REGISTER_PRI->N1.REG |= ( (GPIO_PORTE_PRI << 5) | (UART0_PRI << 13) | (UART1_PRI << 21) | (SSI0_PRI << 29) );
    /*                              PRI2                                   */
    NVIC_REGISTER_PRI->N2.REG |= ( (I2C0_PRI << 5) | (PWM0_FAULT_PRI << 13) | (PWM0_GENERATOR0_PRI << 21) | (PWM1_GENERATOR0_PRI << 29) );
    /*                              PRI3                                   */
    NVIC_REGISTER_PRI->N3.REG |= ( (PWM0_GENERATOR2_PRI << 5) | (QEI0_PRI << 13) | (ADC0_SEQUENCE0_PRI << 21) | (ADC0_SEQUENCE1_PRI << 29) );
    /*                              PRI4                                   */
    NVIC_REGISTER_PRI->N4.REG |= ( (ADC0_SEQUENCE2_PRI << 5) | (ADC0_SEQUENCE3_PRI << 13) | (WATCHDOG_TIMERS0AND1_PRI << 21) | (TIMER0A_16TO32_BIT_PRI << 29) );
    /*                              PRI5                                   */
    NVIC_REGISTER_PRI->N5.REG |= ( (TIMER0B_16TO32_BIT_PRI << 5) | (TIMER1A_16TO32_BIT_PRI << 13) | (TIMER1B_16TO32_BIT_PRI << 21) | (TIMER2A_16TO32_BIT_PRI << 29) );
    /*                              PRI6                                   */
    NVIC_REGISTER_PRI->N6.REG |= ( (TIMER2B_16TO32_BIT_PRI << 5) | (ANALOG_COMPARATOR0_PRI << 13) | (ANALOG_COMPARATOR1_PRI << 21) );
    /*                              PRI7                                   */
    NVIC_REGISTER_PRI->N7.REG |= ( (SYSTEM_CONTROL_PRI << 5) | (FLASH_AND_EEPROM_CONTROLL_PRI << 13) | (GPIO_PORTF_PRI << 21) );
    /*                              PRI8                                   */
    NVIC_REGISTER_PRI->N8.REG |= ( (UART2_PRI << 13) | (SSI1_PRI << 21) | (TIMER3A_16TO32_BIT_PRI << 29) );
    /*                              PRI9                                   */
    NVIC_REGISTER_PRI->N9.REG |= ( (TIMER3B_16TO32_BIT_PRI << 5) | (I2C1_PRI << 13) | (QEI1_PRI << 21) | (CAN0_PRI << 29) );
    /*                              PRI10                                   */
    NVIC_REGISTER_PRI->N10.REG |= ( (CAN1_PRI << 5) | (HIBERNATION_MODULE_PRI << 29) );
    /*                              PRI11                                   */
    NVIC_REGISTER_PRI->N11.REG |= ( (USB_PRI << 5) | (PWM0_GENERATOR3_PRI << 13) | (DMA_SOFTWARE_PRI << 21) | (DMA_ERROR_PRI << 29) );
    /*                              PRI12                                   */
    NVIC_REGISTER_PRI->N12.REG |= ( (ADC1_SEQUENCE0_PRI << 5) | (ADC1_SEQUENCE1_PRI << 13) | (ADC1_SEQUENCE2_PRI << 21) | (ADC1_SEQUENCE3_PRI << 29) );
    /*                              PRI14                                   */
    NVIC_REGISTER_PRI->N14.REG |= ( (SSI2_PRI << 13) | (SSI3_PRI << 21) | (UART3_PRI << 29) );
    /*                              PRI15                                   */
    NVIC_REGISTER_PRI->N15.REG |= ( (UART4_PRI << 5) | (UART5_PRI << 13) | (UART6_PRI << 21) | (UART7_PRI << 29) );
    /*                              PRI17                                  */
    NVIC_REGISTER_PRI->N17.REG |= ( (I2C2_PRI << 5) | (I2C3_PRI << 13) | (TIMER4A_16TO32_BIT_PRI << 21) | (TIMER4B_16TO32_BIT_PRI << 29) );
    /*                              PRI23                                  */
    NVIC_REGISTER_PRI->N23.REG |= ( (TIMER5A_16TO32_BIT_PRI << 5) | (TIMER5B_16TO32_BIT_PRI << 13) | (TIMER0A_32TO64_BIT_PRI << 21) | (TIMER0B_32TO64_BIT_PRI << 29) );
    /*                              PRI24                                  */
    NVIC_REGISTER_PRI->N24.REG |= ( (TIMER1A_32TO64_BIT_PRI << 5) | (TIMER1B_32TO64_BIT_PRI << 13) | (TIMER2A_32TO64_BIT_PRI << 21) | (TIMER2B_32TO64_BIT_PRI << 29) );
    /*                              PRI25                                  */
    NVIC_REGISTER_PRI->N25.REG |= ( (TIMER3A_32TO64_BIT_PRI << 5) | (TIMER3B_32TO64_BIT_PRI << 13) | (TIMER4A_32TO64_BIT_PRI << 21) | (TIMER4B_32TO64_BIT_PRI << 29) );
    /*                              PRI26                                  */
    NVIC_REGISTER_PRI->N26.REG |= ( (TIMER5A_32TO64_BIT_PRI << 5) | (TIMER5B_32TO64_BIT_PRI << 13) | (SYSTEM_EXCEPTION_IMPRECISE_PRI << 21) );
    /*                              PRI33                                  */
    NVIC_REGISTER_PRI->N33.REG |= ( (PWM1_GENERATOR0_PRI << 21) | (PWM1_GENERATOR1_PRI << 29) );
    /*                              PRI34                                  */
    NVIC_REGISTER_PRI->N15.REG |= ( (PWM1_GENERATOR2_PRI << 5) | (PWM1_GENERATOR3_PRI << 13) | (PWM1_FAULT_PRI << 21) );
}

/**********************************************************************************************************************
 *  END OF FILE: Interrupt.c
 *********************************************************************************************************************/

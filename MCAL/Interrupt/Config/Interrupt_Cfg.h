/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Interrupt_Cfg.h
 *       Module:  -
 *
 *  Description:  Contains User configuartion for the Interrupt Driver.  
 *  
 *********************************************************************************************************************/
#ifndef INTERRUPT_CFG_H
#define INTERRUPT_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "../Interrupt_Types.h"

/**********************************************************************************************************************
 *  Configuration
 *********************************************************************************************************************/

/************************** Interrupt Priority Grouping Mode *********************************/
/*  INTERRUPT_PRIORITY_1 :  8 Main group priorities and No Sub-priorities
    INTERRUPT_PRIORITY_2 :  4 Main group priorities and 2 sub-prorities for each group
    INTERRUPT_PRIORITY_3 :  2 Main group priorities and 4 sub-prorities for each group
    INTERRUPT_PRIORITY_4 :  1 Main group priorities and 8 sub-prorities                      */
#define INTERRUPT_PRIORITY_MODE                                     INTERRUPT_PRIORITY_1


/************************** Interrupts ENABLE\DISABLE Configuration *********************************/
#define     GPIO_PORTA_STATE                                        ENABLE
#define     GPIO_PORTB_STATE                                        ENABLE
#define     GPIO_PORTC_STATE                                        ENABLE
#define     GPIO_PORTD_STATE                                        ENABLE
#define     GPIO_PORTE_STATE                                        ENABLE
#define     GPIO_PORTF_STATE                                        ENABLE

#define     UART0_STATE                                             ENABLE
#define     UART1_STATE                                             DISABLE
#define     UART2_STATE                                             DISABLE
#define     UART3_STATE                                             DISABLE
#define     UART4_STATE                                             DISABLE
#define     UART5_STATE                                             DISABLE
#define     UART6_STATE                                             DISABLE
#define     UART7_STATE                                             DISABLE

#define     ADC0_SEQUENCE0_STATE                                    DISABLE
#define     ADC0_SEQUENCE1_STATE                                    DISABLE
#define     ADC0_SEQUENCE2_STATE                                    DISABLE
#define     ADC0_SEQUENCE3_STATE                                    DISABLE

#define     ADC1_SEQUENCE0_STATE                                    DISABLE
#define     ADC1_SEQUENCE1_STATE                                    DISABLE
#define     ADC1_SEQUENCE2_STATE                                    DISABLE
#define     ADC1_SEQUENCE3_STATE                                    DISABLE

#define     SSI0_STATE                                              DISABLE
#define     SSI1_STATE                                              DISABLE
#define     SSI2_STATE                                              DISABLE
#define     SSI3_STATE                                              DISABLE

#define     WATCHDOG_TIMERS0AND1_STATE                              DISABLE

#define     I2C0_STATE                                              DISABLE
#define     I2C1_STATE                                              DISABLE
#define     I2C2_STATE                                              DISABLE
#define     I2C3_STATE                                              DISABLE

#define     ANALOG_COMPARATOR0_STATE                                DISABLE
#define     ANALOG_COMPARATOR1_STATE                                DISABLE

#define     QEI0_STATE                                              DISABLE
#define     QEI1_STATE                                              DISABLE

#define     DMA_SOFTWARE_STATE                                      DISABLE
#define     DMA_ERROR_STATE                                         DISABLE

#define     TIMER0A_16TO32_BIT_STATE                                DISABLE
#define     TIMER0B_16TO32_BIT_STATE                                DISABLE

#define     TIMER1A_16TO32_BIT_STATE                                DISABLE
#define     TIMER1B_16TO32_BIT_STATE                                DISABLE

#define     TIMER2A_16TO32_BIT_STATE                                DISABLE
#define     TIMER2B_16TO32_BIT_STATE                                DISABLE

#define     TIMER3A_16TO32_BIT_STATE                                DISABLE
#define     TIMER3B_16TO32_BIT_STATE                                DISABLE

#define     TIMER4A_16TO32_BIT_STATE                                DISABLE
#define     TIMER4B_16TO32_BIT_STATE                                DISABLE

#define     TIMER5A_16TO32_BIT_STATE                                DISABLE
#define     TIMER5B_16TO32_BIT_STATE                                DISABLE

#define     TIMER0A_32TO64_BIT_STATE                                DISABLE
#define     TIMER0B_32TO64_BIT_STATE                                DISABLE

#define     TIMER1A_32TO64_BIT_STATE                                DISABLE
#define     TIMER1B_32TO64_BIT_STATE                                DISABLE

#define     TIMER2A_32TO64_BIT_STATE                                DISABLE
#define     TIMER2B_32TO64_BIT_STATE                                DISABLE

#define     TIMER3A_32TO64_BIT_STATE                                DISABLE
#define     TIMER3B_32TO64_BIT_STATE                                DISABLE

#define     TIMER4A_32TO64_BIT_STATE                                DISABLE
#define     TIMER4B_32TO64_BIT_STATE                                DISABLE

#define     TIMER5A_32TO64_BIT_STATE                                DISABLE
#define     TIMER5B_32TO64_BIT_STATE                                DISABLE

#define     CAN0_STATE                                              DISABLE
#define     CAN1_STATE                                              DISABLE

#define     FLASH_AND_EEPROM_CONTROLL_STATE                         DISABLE  

#define     USB_STATE                                               DISABLE

#define     PWM0_FAULT_STATE                                        DISABLE
#define     PWM0_GENERATOR0_STATE                                   DISABLE
#define     PWM0_GENERATOR1_STATE                                   DISABLE
#define     PWM0_GENERATOR2_STATE                                   DISABLE
#define     PWM0_GENERATOR3_STATE                                   DISABLE

#define     PWM1_GENERATOR0_STATE                                   DISABLE
#define     PWM1_GENERATOR1_STATE                                   DISABLE
#define     PWM1_GENERATOR2_STATE                                   DISABLE
#define     PWM1_GENERATOR3_STATE                                   DISABLE
#define     PWM1_FAULT_STATE                                        DISABLE

#define     SYSTEM_CONTROL_STATE                                    DISABLE

#define     HIBERNATION_MODULE_STATE                                DISABLE

#define     SYSTEM_EXCEPTION_IMPRECISE_STATE                        DISABLE


/************************** Interrupts Priority Configuration *********************************/
/*       INTERRUPT_PRIORITY (0 : 7)   
 *        0 ===> Highest Priority
 *        7 ===> Lowest Priority                                                              */
/*                              PRI0                                   */ 
#define     GPIO_PORTA_PRI                                              0
#define     GPIO_PORTB_PRI                                              0
#define     GPIO_PORTC_PRI                                              0
#define     GPIO_PORTD_PRI                                              0
/*                              PRI1                                   */ 
#define     GPIO_PORTE_PRI                                              0
#define     UART0_PRI                                                   0
#define     UART1_PRI                                                   0
#define     SSI0_PRI                                                    0
/*                              PRI2                                   */ 
#define     I2C0_PRI                                                    0
#define     PWM0_FAULT_PRI                                              0
#define     PWM0_GENERATOR0_PRI                                         0
#define     PWM0_GENERATOR1_PRI                                         0
/*                              PRI3                                   */ 
#define     PWM0_GENERATOR2_PRI                                         0
#define     QEI0_PRI                                                    0
#define     ADC0_SEQUENCE0_PRI                                          0
#define     ADC0_SEQUENCE1_PRI                                          0
/*                              PRI4                                   */ 
#define     ADC0_SEQUENCE2_PRI                                          0
#define     ADC0_SEQUENCE3_PRI                                          0
#define     WATCHDOG_TIMERS0AND1_PRI                                    0
#define     TIMER0A_16TO32_BIT_PRI                                      0
/*                              PRI5                                   */ 
#define     TIMER0B_16TO32_BIT_PRI                                      0
#define     TIMER1A_16TO32_BIT_PRI                                      0
#define     TIMER1B_16TO32_BIT_PRI                                      0
#define     TIMER2A_16TO32_BIT_PRI                                      0
/*                              PRI6                                   */ 
#define     TIMER2B_16TO32_BIT_PRI                                      0
#define     ANALOG_COMPARATOR0_PRI                                      0
#define     ANALOG_COMPARATOR1_PRI                                      0
/*                              PRI7                                   */ 
#define     SYSTEM_CONTROL_PRI                                          0
#define     FLASH_AND_EEPROM_CONTROLL_PRI                               0
#define     GPIO_PORTF_PRI                                              0
/*                              PRI8                                   */
#define     UART2_PRI                                                   0
#define     SSI1_PRI                                                    0 
#define     TIMER3A_16TO32_BIT_PRI                                      0
/*                              PRI9                                   */
#define     TIMER3B_16TO32_BIT_PRI                                      0
#define     I2C1_PRI                                                    0
#define     QEI1_PRI                                                    0 
#define     CAN0_PRI                                                    0
/*                              PRI10                                  */
#define     CAN1_PRI                                                    0
#define     HIBERNATION_MODULE_PRI                                      0
/*                              PRI11                                  */
#define     USB_PRI                                                     0 
#define     PWM0_GENERATOR3_PRI                                         0
#define     DMA_SOFTWARE_PRI                                            0
#define     DMA_ERROR_PRI                                               0
/*                              PRI12                                  */
#define     ADC1_SEQUENCE0_PRI                                          0 
#define     ADC1_SEQUENCE1_PRI                                          0
#define     ADC1_SEQUENCE2_PRI                                          0
#define     ADC1_SEQUENCE3_PRI                                          0
/*                              PRI13                                  */

/*                              PRI14                                  */
#define     SSI2_PRI                                                    0 
#define     SSI3_PRI                                                    0
#define     UART3_PRI                                                   0
/*                              PRI15                                  */
#define     UART4_PRI                                                   0
#define     UART5_PRI                                                   0 
#define     UART6_PRI                                                   0
#define     UART7_PRI                                                   0
/*                              PRI16                                  */

/*                              PRI17                                  */
#define     I2C2_PRI                                                    0
#define     I2C3_PRI                                                    0 
#define     TIMER4A_16TO32_BIT_PRI                                      0
#define     TIMER4B_16TO32_BIT_PRI                                      0
/*                              PRI18                                  */
/*                              PRI19                                  */
/*                              PRI20                                  */
/*                              PRI21                                  */
/*                              PRI22                                  */

/*                              PRI23                                  */
#define     TIMER5A_16TO32_BIT_PRI                                      0
#define     TIMER5B_16TO32_BIT_PRI                                      0 
#define     TIMER0A_32TO64_BIT_PRI                                      0
#define     TIMER0B_32TO64_BIT_PRI                                      0
/*                              PRI24                                  */
#define     TIMER1A_32TO64_BIT_PRI                                      0
#define     TIMER1B_32TO64_BIT_PRI                                      0
#define     TIMER2A_32TO64_BIT_PRI                                      0
#define     TIMER2B_32TO64_BIT_PRI                                      0
/*                              PRI25                                  */ 
#define     TIMER3A_32TO64_BIT_PRI                                      0
#define     TIMER3B_32TO64_BIT_PRI                                      0
#define     TIMER4A_32TO64_BIT_PRI                                      0
#define     TIMER4B_32TO64_BIT_PRI                                      0
/*                              PRI26                                  */ 
#define     TIMER5A_32TO64_BIT_PRI                                      0
#define     TIMER5B_32TO64_BIT_PRI                                      0
#define     SYSTEM_EXCEPTION_IMPRECISE_PRI                              0
/*                              PRI27                                  */ 
/*                              PRI28                                  */ 
/*                              PRI29                                  */ 
/*                              PRI30                                  */ 
/*                              PRI31                                  */ 
/*                              PRI32                                  */

/*                              PRI33                                  */ 
#define     PWM1_GENERATOR0_PRI                                         0
#define     PWM1_GENERATOR1_PRI                                         0
/*                              PRI34                                  */ 
#define     PWM1_GENERATOR2_PRI                                         0
#define     PWM1_GENERATOR3_PRI                                         0
#define     PWM1_FAULT_PRI                                              0
 
#endif  /* INTERRUPT_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Interrupt_Cfg.h
 *********************************************************************************************************************/

/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Interrupt_Types.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef INTERRUPT_TYPES_H
#define INTERRUPT_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*                           Enable\Disable                                      */
#ifndef ENABLE
    #define ENABLE                                                   1
#endif
#ifndef DISABLE
    #define DISABLE                                                  0
#endif

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef enum{
    INTERRUPT_PRIORITY_1        =       4,
    INTERRUPT_PRIORITY_2,
    INTERRUPT_PRIORITY_3,
    INTERRUPT_PRIORITY_4
} Interrupt_Priority_Config_e;

/************************** Interrupt Vector Table Types *********************************/
typedef enum{
    GPIO_PORTA                        =       0,
    GPIO_PORTB                        =       1,
    GPIO_PORTC                        =       2,
    GPIO_PORTD                        =       3,
    GPIO_PORTE                        =       4,
    UART0                             =       5,
    UART1                             =       6,
    SSI0                              =       7,
    I2C0                              =       8,
    PWM0_FAULT                        =       9,
    PWM0_GENERATOR0                   =      10,
    PWM0_GENERATOR1                   =      11,
    PWM0_GENERATOR2                   =      12,
    QEI0                              =      13,
    ADC0_SEQUENCE0                    =      14,
    ADC0_SEQUENCE1                    =      15,
    ADC0_SEQUENCE2                    =      16,
    ADC0_SEQUENCE3                    =      17,
    WATCHDOG_TIMERS0AND1              =      18,
    TIMER0A_16TO32_BIT                =      19,
    TIMER0B_16TO32_BIT                =      20,
    TIMER1A_16TO32_BIT                =      21,
    TIMER1B_16TO32_BIT                =      22,
    TIMER2A_16TO32_BIT                =      23,
    TIMER2B_16TO32_BIT                =      24,
    ANALOG_COMPARATOR0                =      25,
    ANALOG_COMPARATOR1                =      26,
/*  27 ... Reserved  */
    SYSTEM_CONTROL                    =      28,
    FLASH_AND_EEPROM_CONTROLL         =      29,
    GPIO_PORTF                        =      30,
/*  31 ... Reserved  */
/*  32 ... Reserved  */
    UART2                             =      33,
    SSI1                              =      34,
    TIMER3A_16TO32_BIT                =      35,
    TIMER3B_16TO32_BIT                =      36,
    I2C1                              =      37,
    QEI1                              =      38,
    CAN0                              =      39,
    CAN1                              =      40,
/*  41 ... Reserved  */
/*42 ... Reserved    */
    HIBERNATION_MODULE                =      43,
    USB                               =      44,
    PWM0_GENERATOR3                   =      45,
    DMA_SOFTWARE                      =      46,
    DMA_ERROR                         =      47,
    ADC1_SEQUENCE0                    =      48,
    ADC1_SEQUENCE1                    =      49,
    ADC1_SEQUENCE2                    =      50,
    ADC1_SEQUENCE3                    =      51,
/* 52 ... Reserved   */
/* 53 ... Reserved   */
/* 54 ... Reserved   */
/* 55 ... Reserved   */
/* 56 ... Reserved   */
    SSI2                              =      57,
    SSI3                              =      58,
    UART3                             =      59,
    UART4                             =      60,
    UART5                             =      61,
    UART6                             =      62,
    UART7                             =      63,
/*  64 ... Reserved   */
/*  65 ... Reserved   */
/*  66 ... Reserved   */
/*  67 ... Reserved   */
    I2C2                              =      68,
    I2C3                              =      69,
    TIMER4A_16TO32_BIT                =      70,
    TIMER4B_16TO32_BIT                =      71,
/*  72 : 91 ... Reserved    */
    TIMER5A_16TO32_BIT                =      92,
    TIMER5B_16TO32_BIT                =      93,
    TIMER0A_32TO64_BIT                =      94,
    TIMER0B_32TO64_BIT                =      95,
    TIMER1A_32TO64_BIT                =      96,
    TIMER1B_32TO64_BIT                =      97,
    TIMER2A_32TO64_BIT                =      98,
    TIMER2B_32TO64_BIT                =      99,
    TIMER3A_32TO64_BIT                =     100,
    TIMER3B_32TO64_BIT                =     101,
    TIMER4A_32TO64_BIT                =     102,
    TIMER4B_32TO64_BIT                =     103,
    TIMER5A_32TO64_BIT                =     104,
    TIMER5B_32TO64_BIT                =     105,
    SYSTEM_EXCEPTION_IMPRECISE        =     106,
/*  107 : 133 ... Reserved  */
    PWM1_GENERATOR0                   =     134,
    PWM1_GENERATOR1                   =     135,
    PWM1_GENERATOR2                   =     136,
    PWM1_GENERATOR3                   =     137,
    PWM1_FAULT                        =     138  

}Interrupt_Vector_Types_e;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* INTERRUPT_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Interrupt_Types.h
 *********************************************************************************************************************/

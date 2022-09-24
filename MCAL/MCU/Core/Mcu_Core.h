/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Core.h
 *       Module:  -
 *
 *  Description:  Contains Definitions and Mapping of the MCU (TM4C123GH6PM) Hardware Core Registers 
 *  
 *********************************************************************************************************************/
#ifndef MCU_CORE_H
#define MCU_CORE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "../../../Common/Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/************************************************** NVIC Registers ********************************************************/
#define CORTEXM4_CORE_BASE_ADDRESS                              (u32)0xE000E000
#define APINT                                                   *((volatile u32*)(CORTEXM4_CORE_BASE_ADDRESS + 0xD0C))
#define INTCTRL                                                 *((volatile u32*)(CORTEXM4_CORE_BASE_ADDRESS + 0xD04))
#define NVIC_REGISTER_EN                           ((volatile NVIC_CTRL_REGISTERS*)(CORTEXM4_CORE_BASE_ADDRESS + 0x100))
#define NVIC_REGISTER_DIS                          ((volatile NVIC_CTRL_REGISTERS*)(CORTEXM4_CORE_BASE_ADDRESS + 0x180))
#define NVIC_REGISTER_PEND                         ((volatile NVIC_CTRL_REGISTERS*)(CORTEXM4_CORE_BASE_ADDRESS + 0x200))
#define NVIC_REGISTER_UNPEND                       ((volatile NVIC_CTRL_REGISTERS*)(CORTEXM4_CORE_BASE_ADDRESS + 0x280))
#define NVIC_REGISTER_ACTIVE                       ((volatile NVIC_CTRL_REGISTERS*)(CORTEXM4_CORE_BASE_ADDRESS + 0x300))
#define NVIC_REGISTER_PRI                      ((volatile NVIC_PRI_CTRL_REGISTERS*)(CORTEXM4_CORE_BASE_ADDRESS + 0x400))
#define NVIC_REGISTER_SWTRIG                                    *((volatile u32*)(CORTEXM4_CORE_BASE_ADDRESS + 0xF00))
/**************************************************************************************************************************/

/************************************************** SCB Registers *********************************************************/
#define SYSCTRL                                                 *((volatile u32*)(CORTEXM4_CORE_BASE_ADDRESS + 0xD10))
/**************************************************************************************************************************/

/************************************************** System Timer Registers (SysTick) *********************************************************/
#define SYSTICK_STCTRL                                                   *((volatile u32*)(CORTEXM4_CORE_BASE_ADDRESS + 0x010))
#define SYSTICK_STRELOAD                                                 *((volatile u32*)(CORTEXM4_CORE_BASE_ADDRESS + 0x014))
#define SYSTICK_STCURRENT                                                *((volatile u32*)(CORTEXM4_CORE_BASE_ADDRESS + 0x018))

/************************************************** System Control Registers ********************************************************/
#define CORTEXM4_SYSTEM_CONTROL_BASE_ADDRESS                        (u32)0x400FE000
#define SYSCTRL_REGISTER_REGISTER_RCC                   *((volatile u32*)(CORTEXM4_SYSTEM_CONTROL_BASE_ADDRESS + 0x060))
    
#define SYSCTRL_REGISTER_REGISTER_RCC2                  *((volatile u32*)(CORTEXM4_SYSTEM_CONTROL_BASE_ADDRESS + 0x070))
    
#define SYS_CTRL_REGISTER_PLLSTAT                       *((volatile u32*)(CORTEXM4_SYSTEM_CONTROL_BASE_ADDRESS + 0x168))
    
#define SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET1            ((volatile SYS_PERH_CLK_CTRL_SET1*) (CORTEXM4_SYSTEM_CONTROL_BASE_ADDRESS + 0x600))
#define SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET2            ((volatile SYS_PERH_CLK_CTRL_SET2*) (CORTEXM4_SYSTEM_CONTROL_BASE_ADDRESS + 0x634))
#define SYS_CTRL_REGISTER_PERIPHERALS_CLK_SET3            ((volatile SYS_PERH_CLK_CTRL_SET3*) (CORTEXM4_SYSTEM_CONTROL_BASE_ADDRESS + 0x658))



/*            Input values for OSC               */
#define MCU_OSC_SRC_MOSC                        0x0
#define MCU_OSC_SRC_PIOSC                       0x1
#define MCU_OSC_SRC_PIOSC_OVER4                 0x2
#define MCU_OSC_SRC_LFIOSC                      0x3

typedef enum{
    MCU_CLOCK_FREQ_66F_MHZ                    = 0x2,
    MCU_CLOCK_FREQ_50MHZ                      = 0x3,
    MCU_CLOCK_FREQ_40MHZ                      = 0x4,
    MCU_CLOCK_FREQ_33F_MHZ                    = 0x5,
    MCU_CLOCK_FREQ_28F_MHZ                    = 0x6,
    MCU_CLOCK_FREQ_25MHZ                      = 0x7,
    MCU_CLOCK_FREQ_22F_MHZ                    = 0x8,
    MCU_CLOCK_FREQ_20MHZ                      = 0x9,
    MCU_CLOCK_FREQ_18F_MHZ                    = 0xA,
    MCU_CLOCK_FREQ_16F_MHZ                    = 0xB,
    MCU_CLOCK_FREQ_15F_MHZ                    = 0xC,
    MCU_CLOCK_FREQ_14F_MHZ                    = 0xD,
    MCU_CLOCK_FREQ_13F_MHZ                    = 0xE,
    MCU_CLOCK_FREQ_12F_MHZ_DEFAULT            = 0xF
}System_Clock_Frequencies_e;


/************************************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**** NVIC - struct corresponding to 5 consecutive registers ******/
typedef struct{
    Register_32bits     N0;
    Register_32bits     N1;
    Register_32bits     N2;
    Register_32bits     N3;
    Register_32bits     N4;
}NVIC_CTRL_REGISTERS;

/**** Struct corresponding to a single register in NVIC Interrupt Priority ****/
typedef struct{
    u32          :   5;
    u32 INTA     :   3;
    u32          :   5;
    u32 INTB     :   3;
    u32          :   5;
    u32 INTC     :   3;
    u32          :   5;
    u32 INTD     :   3;
}NVIC_PRIORITY_BIT_FIELD;

/**** NVIC Priority - Union to allow accessing by whole register or single interrupt ******/
typedef union 
{
    u32 REG;
    NVIC_PRIORITY_BIT_FIELD N;
}NVIC_PRIORITY_TAG;

/**** NVIC Priority - struct corresponding to 35 consecutive registers ******/
typedef struct{
    NVIC_PRIORITY_TAG         N0;
    NVIC_PRIORITY_TAG         N1;
    NVIC_PRIORITY_TAG         N2;
    NVIC_PRIORITY_TAG         N3;
    NVIC_PRIORITY_TAG         N4;
    NVIC_PRIORITY_TAG         N5;
    NVIC_PRIORITY_TAG         N6;
    NVIC_PRIORITY_TAG         N7;
    NVIC_PRIORITY_TAG         N8;
    NVIC_PRIORITY_TAG         N9;
    NVIC_PRIORITY_TAG        N10;
    NVIC_PRIORITY_TAG        N11;
    NVIC_PRIORITY_TAG        N12;
    NVIC_PRIORITY_TAG        N13;
    NVIC_PRIORITY_TAG        N14;
    NVIC_PRIORITY_TAG        N15;
    NVIC_PRIORITY_TAG        N16;
    NVIC_PRIORITY_TAG        N17;
    NVIC_PRIORITY_TAG        N18;
    NVIC_PRIORITY_TAG        N19;
    NVIC_PRIORITY_TAG        N20;
    NVIC_PRIORITY_TAG        N21;
    NVIC_PRIORITY_TAG        N22;
    NVIC_PRIORITY_TAG        N23;
    NVIC_PRIORITY_TAG        N24;
    NVIC_PRIORITY_TAG        N25;
    NVIC_PRIORITY_TAG        N26;
    NVIC_PRIORITY_TAG        N27;
    NVIC_PRIORITY_TAG        N28;
    NVIC_PRIORITY_TAG        N29;
    NVIC_PRIORITY_TAG        N30;
    NVIC_PRIORITY_TAG        N31;
    NVIC_PRIORITY_TAG        N32;
    NVIC_PRIORITY_TAG        N33;
    NVIC_PRIORITY_TAG        N34;
}NVIC_PRI_CTRL_REGISTERS;

/**** SYS Peripherals CLK Settings 1 - struct corresponding to clock state for peripherals registers ******/
typedef struct{
    REGISTER_TAG    RCGCWD            ;
    REGISTER_TAG    RCGCTIMER_16TO32  ;
    REGISTER_TAG    RCGCGPIO          ;  
    REGISTER_TAG    RCGCDMA           ;   
    REGISTER_TAG    RCGCHIB           ;   
    REGISTER_TAG    RCGCUART          ;  
    REGISTER_TAG    RCGCSSI           ;   
    REGISTER_TAG    RCGCI2C           ;   
}SYS_PERH_CLK_CTRL_SET1;

/**** SYS Peripherals CLK Settings 2 - struct corresponding to clock state for peripherals registers ******/
typedef struct{
    REGISTER_TAG    RCGCCAN           ;   
    REGISTER_TAG    RCGCADC           ;   
    REGISTER_TAG    RCGCACMP          ;  
    REGISTER_TAG    RCGCPWM           ;   
    REGISTER_TAG    RCGCQEI           ;   
}SYS_PERH_CLK_CTRL_SET2;

/**** SYS Peripherals CLK Settings 3 - struct corresponding to clock state for peripherals registers ******/
typedef struct{    
    REGISTER_TAG    RCGCEEPROM        ;
    REGISTER_TAG    RCGCWTIMER_32TO64 ;
}SYS_PERH_CLK_CTRL_SET3;

// typedef struct{
//     u32 
// }Mcu_strClockType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* MCU_CORE_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Core.h
 *********************************************************************************************************************/

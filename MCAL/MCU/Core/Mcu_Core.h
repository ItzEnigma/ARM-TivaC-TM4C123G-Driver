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
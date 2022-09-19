/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Std_Types.h
 *       Module:  -
 *
 *  Description:  Contains Standard Types
 *  
 *********************************************************************************************************************/
#ifndef STD_TYPES_H
#define STD_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Platform_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*                           MCU BITS                                           */
#define MCU_BITS_CONFIG                                          32

/*                           Channel Voltage Level                              */
#define STD_LOW                                                  (u08)0x00
#define STD_HIGH                                                 (u08)0x01
/********************************************************************************/
/*                           Voltage Level                                      */
#ifndef LOW
    #define LOW                                                   (u08)0x00
#endif
#ifndef HIGH
    #define HIGH                                                  (u08)0x01
#endif
/********************************************************************************/
/*                           Logical State                                      */
#ifndef TRUE
    #define TRUE                                                    (u08)0x01
#endif
#ifndef FALSE
    #define FALSE                                                   (u08)0x00
#endif
/********************************************************************************/
/*                           Enable\Disable                                      */
#ifndef ENABLE
    #define ENABLE                                                    1
#endif
#ifndef DISABLE
    #define DISABLE                                                   0
#endif

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef u08 Std_ReturnType;
#define E_OK                 0u
#define E_NOT_OK             1u

#if     MCU_BITS_CONFIG == 8
    typedef struct{
        u08 b0  :   1;
        u08 b1  :   1;
        u08 b2  :   1;
        u08 b3  :   1;
        u08 b4  :   1;
        u08 b5  :   1;
        u08 b6  :   1;
        u08 b7  :   1;
    }Register_8bits;
#elif   MCU_BITS_CONFIG == 16
    typedef struct{
        u16 b0  :   1;
        u16 b1  :   1;
        u16 b2  :   1;
        u16 b3  :   1;
        u16 b4  :   1;
        u16 b5  :   1;
        u16 b6  :   1;
        u16 b7  :   1;
        u16 b8  :   1;
        u16 b9  :   1;
        u16 b10 :   1;
        u16 b11 :   1;
        u16 b12 :   1;
        u16 b13 :   1;
        u16 b14 :   1;
        u16 b15 :   1;
    }Register_16bits;
#elif   MCU_BITS_CONFIG == 32
    typedef struct{
        u32 b0  :   1;
        u32 b1  :   1;
        u32 b2  :   1;
        u32 b3  :   1;
        u32 b4  :   1;
        u32 b5  :   1;
        u32 b6  :   1;
        u32 b7  :   1;
        u32 b8  :   1;
        u32 b9  :   1;
        u32 b10 :   1;
        u32 b11 :   1;
        u32 b12 :   1;
        u32 b13 :   1;
        u32 b14 :   1;
        u32 b15 :   1;
        u32 b16 :   1;
        u32 b17 :   1;
        u32 b18 :   1;
        u32 b19 :   1;
        u32 b20 :   1;
        u32 b21 :   1;
        u32 b22 :   1;
        u32 b23 :   1;
        u32 b24 :   1;
        u32 b25 :   1;
        u32 b26 :   1;
        u32 b27 :   1;
        u32 b28 :   1;
        u32 b29 :   1;
        u32 b30 :   1;
        u32 b31 :   1;
    }Register_32bits;
#else
    #error Undefined MCU Register Size
#endif

typedef enum{
    bit0        =       0,
    bit1,
    bit2,
    bit3,
    bit4,
    bit5,
    bit6,
    bit7,
    bit8,
    bit9,
    bit10,
    bit11,
    bit12,
    bit13,
    bit14,
    bit15,
    bit16,
    bit17,
    bit18,
    bit19,
    bit20,
    bit21,
    bit22,
    bit23,
    bit24,
    bit25,
    bit26,
    bit27,
    bit28,
    bit29,
    bit30,
    bit31,
    bit32
}Register_Bits;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* STD_TYPES_H*/

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/

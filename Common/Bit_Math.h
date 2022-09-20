/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Bit_Math.h
 *       Module:  -
 *
 *  Description:  Contains Bit Math MACROS operations.   
 *  
 *********************************************************************************************************************/
#ifndef BIT_MATH_H
#define BIT_MATH_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

#define SET_BIT(REG,BIT)                ( REG |= (1<<BIT)    )
#define CLEAR_BIT(REG,BIT)              ( REG &= (~(1<<BIT)) )
#define TOGGLE_BIT(REG,BIT)             ( REG ^= (1<<BIT)    )
#define GET_BIT(REG,BIT)                ( REG & ((1<<BIT) >> BIT)    )


 
#endif  /* BIT_MATH_H */

/**********************************************************************************************************************
 *  END OF FILE: Bit_Math.h
 *********************************************************************************************************************/

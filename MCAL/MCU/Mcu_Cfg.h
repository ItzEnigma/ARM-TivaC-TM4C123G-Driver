/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Cfg.h
 *       Module:  -
 *
 *  Description:  Contains Essential and Necessary configuration for the MCU [TM4C123GH6PM].  
 *  
 *********************************************************************************************************************/
#ifndef MCU_CFG_H
#define MCU_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "Core/Mcu_Core.h"
#include "Mcu_Hw.h"

/**********************************************************************************************************************
 *  Configuration
 *********************************************************************************************************************/

#define MCU_SYSTICK                             ENABLE      /* Enables SysTick*/

/*  0 :  Enable Main Oscillator  (MOSC)    
 *  1 :  Disable Main Oscillator (MOSC)  */      
#define MCU_MAIN_OSC_STATE                      1

/*  Selects the input source for the OSC
 *  MOSC        ==> Main OSC (External OSC)       
 *  PIOSC       ==> Precision Internal OSC
 *  PIOSC_OVER4 ==> Precision Internal OSC Divided By 4
 *  LFIOSC      ==> Low Freq. Internal OSC                     */
#define MCU_OSC_SRC                             MCU_OSC_SRC_PIOSC

/*  0 :  Enable PLL (Phase Locked Loop)    
 *  1 :  Disable PLL                   */ 
#define MCU_PLL_STATE                           1

/*  System Clock Divider    */
#define MCU_USESYSDIV_STATE                      DISABLE

#define MCU_SYSDIV_VAL                           MCU_CLOCK_FREQ_20MHZ



//#if MCU_MAIN_OSC_STATE == 1


 
#endif  /* MCU_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Cfg.h
 *********************************************************************************************************************/

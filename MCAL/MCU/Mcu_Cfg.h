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


/*      Peripherals Clock Gate (ENABLE/DISABLE)       */
#define GPIOA_CLK_STATE                         ENABLE
#define GPIOB_CLK_STATE                         ENABLE
#define GPIOC_CLK_STATE                         ENABLE
#define GPIOD_CLK_STATE                         ENABLE
#define GPIOE_CLK_STATE                         ENABLE
#define GPIOF_CLK_STATE                         ENABLE

#define WD0_CLK_STATE                           DISABLE
#define WD1_CLK_STATE                           DISABLE

#define TIMR0_16TO32_CLK_STATE                  DISABLE
#define TIMR1_16TO32_CLK_STATE                  DISABLE
#define TIMR2_16TO32_CLK_STATE                  DISABLE
#define TIMR3_16TO32_CLK_STATE                  DISABLE
#define TIMR4_16TO32_CLK_STATE                  DISABLE
#define TIMR5_16TO32_CLK_STATE                  DISABLE

#define TIMR0_32TO64_CLK_STATE                  ENABLE
#define TIMR1_32TO64_CLK_STATE                  DISABLE
#define TIMR2_32TO64_CLK_STATE                  DISABLE
#define TIMR3_32TO64_CLK_STATE                  DISABLE
#define TIMR4_32TO64_CLK_STATE                  DISABLE
#define TIMR5_32TO64_CLK_STATE                  DISABLE

#define ADC0_CLK_STATE                          DISABLE
#define ADC1_CLK_STATE                          DISABLE

#define UART0_CLK_STATE                         DISABLE
#define UART1_CLK_STATE                         DISABLE
#define UART2_CLK_STATE                         DISABLE
#define UART3_CLK_STATE                         DISABLE
#define UART4_CLK_STATE                         DISABLE
#define UART5_CLK_STATE                         DISABLE
#define UART6_CLK_STATE                         DISABLE
#define UART7_CLK_STATE                         DISABLE

#define SSI0_CLK_STATE                          DISABLE
#define SSI1_CLK_STATE                          DISABLE
#define SSI2_CLK_STATE                          DISABLE
#define SSI3_CLK_STATE                          DISABLE

#define I2C0_CLK_STATE                          DISABLE
#define I2C1_CLK_STATE                          DISABLE
#define I2C2_CLK_STATE                          DISABLE
#define I2C3_CLK_STATE                          DISABLE

#define USB_CLK_STATE                           DISABLE

#define CAN0_CLK_STATE                          DISABLE
#define CAN1_CLK_STATE                          DISABLE

#define AnalogComp_CLK_STATE                    DISABLE

#define PWM0_CLK_STATE                          DISABLE
#define PWM1_CLK_STATE                          DISABLE

#define QEI0_CLK_STATE                          DISABLE
#define QEI1_CLK_STATE                          DISABLE

#define EEPROM_CLK_STATE                        DISABLE

#define UDMA_CLK_STATE                          DISABLE

#define HIB_CLK_STATE                           DISABLE


//#if MCU_MAIN_OSC_STATE == 1


 
#endif  /* MCU_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Cfg.h
 *********************************************************************************************************************/

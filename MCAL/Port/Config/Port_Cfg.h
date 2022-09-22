/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Port_Cfg.h
 *       Module:  -
 *
 *  Description:  Contains MCU Port Configuration (DIO / ADC / UART / ...)
 *  
 *********************************************************************************************************************/
#ifndef PORT_CFG_H
#define PORT_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "../Port_Types.h"

/**********************************************************************************************************************
 *  Configuration
 *********************************************************************************************************************/

/*      ***IMPORTANT***
 *  Configure GPIOx Port as APB or AHB
 *  APB ==> Low band-width & power consumption (Slower)
 *  AHB ==> used for high-freq. (Faster         )       */
/*      GPIOA Aperture  (APB/AHB)     */
#define GPIOA_APERTURE                                  AHB

/*      GPIOB Aperture  (APB/AHB)     */
#define GPIOB_APERTURE                                  AHB

/*      GPIOC Aperture  (APB/AHB)     */
#define GPIOC_APERTURE                                  APB

/*      GPIOD Aperture  (APB/AHB)     */
#define GPIOD_APERTURE                                  APB

/*      GPIOE Aperture  (APB/AHB)     */
#define GPIOE_APERTURE                                  APB

/*      GPIOF Aperture  (APB/AHB)     */
#define GPIOF_APERTURE                                  APB



    /*                          CONFIGURATION NOTES
     * 1 : ********** Don't Change The Ports **********
     * 2 : ********** Don't Change The Pins  **********
     * 3 : You can change pin mode using Port_PinModeT_e (enum)
     * 4 : You can change pin direction using Port_PinDirection_e (enum)
     * 5 : You can change pin internal using attach Port_PinInternalAttach_e (enum)
     * 6 : You can change pin output current using Port_PinOutputCurrent_e (enum)
     * 7 : You can change pin level for output using Port_PinLevel_e (enum) *** BUT DEFAULT PIN_LEVEL_LOW ***
     * 
     *                                                                                                              */
extern const Port_strConfig Port_strPortConfig;



 
#endif  /* PORT_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Port_Cfg.h
 *********************************************************************************************************************/

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





 
#endif  /* PORT_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Port_Cfg.h
 *********************************************************************************************************************/

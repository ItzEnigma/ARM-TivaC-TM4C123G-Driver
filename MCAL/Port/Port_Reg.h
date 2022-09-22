/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Port_Reg.h
 *       Module:  -
 *
 *  Description:  Contains MCU Port GPIO Registers (Mapped to either AHB or APB)
 *  
 *********************************************************************************************************************/
#ifndef PORT_REG_H
#define PORT_REG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "Config/Port_Cfg.h"
#include "../MCU/Mcu_Hw.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*                                           GPIOA Aperture                                                          */
#if     GPIOA_APERTURE == AHB
    /*                              GPIOA Settings Struct of registers                                               */
    #define GPIO_PORTA_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTA_AHB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTA_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTA_AHB_BASE_ADDRESS + 0x500))
#elif   GPIOA_APERTURE == APB
    /*                              GPIOA Settings Struct of registers                                               */
    #define GPIO_PORTA_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTA_APB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTA_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTA_APB_BASE_ADDRESS + 0x500))
#else
    #error ERROR ... Undefined GPIOA Aperture
#endif

/*                                           GPIOB Aperture                                                          */
#if     GPIOB_APERTURE == AHB
    /*                              GPIOB Settings Struct of registers                                               */
    #define GPIO_PORTB_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTB_AHB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTB_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTB_AHB_BASE_ADDRESS + 0x500))
#elif   GPIOB_APERTURE == APB
    /*                              GPIOB Settings Struct of registers                                               */
    #define GPIO_PORTB_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTB_APB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTB_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTB_APB_BASE_ADDRESS + 0x500))
#else
    #error ERROR ... Undefined GPIOB Aperture
#endif

/*                                           GPIOC Aperture                                                          */
#if     GPIOC_APERTURE == AHB
    /*                              GPIOC Settings Struct of registers                                               */
    #define GPIO_PORTC_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTC_AHB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTC_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTC_AHB_BASE_ADDRESS + 0x500))
#elif   GPIOC_APERTURE == APB
    /*                              GPIOC Settings Struct of registers                                               */
    #define GPIO_PORTC_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTC_APB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTC_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTC_APB_BASE_ADDRESS + 0x500))
#else
    #error ERROR ... Undefined GPIOC Aperture
#endif

/*                                           GPIOD Aperture                                                          */
#if     GPIOD_APERTURE == AHB
    /*                              GPIOD Settings Struct of registers                                               */
    #define GPIO_PORTD_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTD_AHB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTD_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTD_AHB_BASE_ADDRESS + 0x500))
#elif   GPIOD_APERTURE == APB
    /*                              GPIOD Settings Struct of registers                                               */
    #define GPIO_PORTD_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTD_APB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTD_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTD_APB_BASE_ADDRESS + 0x500))
#else
    #error ERROR ... Undefined GPIOD Aperture
#endif

/*                                           GPIOE Aperture                                                          */
#if     GPIOE_APERTURE == AHB
    /*                              GPIOE Settings Struct of registers                                               */
    #define GPIO_PORTE_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTE_AHB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTE_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTE_AHB_BASE_ADDRESS + 0x500))
#elif   GPIOE_APERTURE == APB
    /*                              GPIOE Settings Struct of registers                                               */
    #define GPIO_PORTE_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTE_APB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTE_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTE_APB_BASE_ADDRESS + 0x500))
#else
    #error ERROR ... Undefined GPIOE Aperture
#endif

/*                                           GPIOF Aperture                                                          */
#if     GPIOF_APERTURE == AHB
    /*                              GPIOF Settings Struct of registers                                               */
    #define GPIO_PORTF_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTF_AHB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTF_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTF_AHB_BASE_ADDRESS + 0x500))
#elif   GPIOF_APERTURE == APB
    /*                              GPIOF Settings Struct of registers                                               */
    #define GPIO_PORTF_REGISTER_SET1                    ((volatile GPIO_REG_SET1*)(GPIO_PORTF_APB_BASE_ADDRESS + 0x400))
    #define GPIO_PORTF_REGISTER_SET2                    ((volatile GPIO_REG_SET2*)(GPIO_PORTF_APB_BASE_ADDRESS + 0x500))
#else
    #error ERROR ... Undefined GPIOF Aperture
#endif


 
#endif  /* PORT_REG_H */

/**********************************************************************************************************************
 *  END OF FILE: Port_Reg.h
 *********************************************************************************************************************/

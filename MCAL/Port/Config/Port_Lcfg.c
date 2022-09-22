/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Port_Lcfg.c
 *        \brief  
 *
 *      \details  Contains Port Struct Configuration
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Port_Cfg.h"



/**********************************************************************************************************************
 *  Configuration
 *********************************************************************************************************************/



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
const Port_strConfig Port_strPortConfig =
{
    /*                          PORTA CONFIGURATION                        */
    PORTA, PIN0, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTA, PIN1, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_HIGH ,
    PORTA, PIN2, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTA, PIN3, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTA, PIN4, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTA, PIN5, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTA, PIN6, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTA, PIN7, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_LOW  ,

    /*                          PORTB CONFIGURATION                        */
    PORTB, PIN0, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTB, PIN1, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTB, PIN2, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTB, PIN3, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTB, PIN4, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTB, PIN5, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTB, PIN6, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTB, PIN7, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    
    /*                          PORTC CONFIGURATION                        */
    PORTC, PIN0, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTC, PIN1, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTC, PIN2, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTC, PIN3, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTC, PIN4, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTC, PIN5, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTC, PIN6, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTC, PIN7, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,

    /*                          PORTD CONFIGURATION                        */
    PORTD, PIN0, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTD, PIN1, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTD, PIN2, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTD, PIN3, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTD, PIN4, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTD, PIN5, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTD, PIN6, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW     ,
    PORTD, PIN7, DIO_MODE, PIN_OUTPUT, PULL_DOWN, DRIVE_2mA, PIN_LEVEL_LOW  ,

    /*                          PORTE CONFIGURATION                        */
    PORTE, PIN0, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTE, PIN1, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTE, PIN2, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTE, PIN3, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTE, PIN4, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTE, PIN5, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,

    /*                          PORTF CONFIGURATION                        */
    PORTF, PIN0, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTF, PIN1, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTF, PIN2, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
    PORTF, PIN3, DIO_MODE, PIN_INPUT, PULL_UP, DRIVE_2mA, PIN_LEVEL_LOW  ,
};

/**********************************************************************************************************************
 *  END OF FILE: Port_Lcfg.c
 *********************************************************************************************************************/

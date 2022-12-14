/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Port.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Port.h"
#include "../../Common/Bit_Math.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* Syntax          : void Port_Init(struct strConfigPtr)        
* Description     : Initialization for Port for the ARM Controller for all the pins.
                   - Setup the pin-mode
                       - If DIO ... Setup pin's : (Direction, internal attach, output current)
                   * IF OTHER MODES ... TO BE SETUPED                                                                          
* Sync\Async      : Synchronous                                               
* Reentrancy      : Non Reentrant                                             
* Parameters (in) : strConfigPtr - Pointer to Port Configuration struct -                     
* Parameters (out): None                                                      
* Return value:   : None                                
*******************************************************************************/
void Port_Init(const Port_strConfig* strConfigPtr)
{
    /* TODO: Show Error if strConfigPtr == NULL_PTR */
    
    u08 u08Pin;
    u08 u08TempPin;
    for (u08Pin = 0 ; u08Pin<TOTAL_GPIO_PINS ; u08Pin++)
    {


    /*                         Pin Mode Configuration                        */
        switch ( strConfigPtr->pinConfig[u08Pin].pinMode )
        {
        case DIO_MODE :         /*  PIN DIO CONFIG  */
            /*                  PORTA CONFIGURATION                */
            switch (strConfigPtr->pinConfig[u08Pin].portX)
            {
            case PORTA :        /*  PORTA DIO   */
                u08TempPin = strConfigPtr->pinConfig[u08Pin].pinX;
                CLEAR_BIT(GPIO_PORTA_REGISTER_SET1->GPIOAFSEL.REG, u08TempPin) ;      /*  Choose DIO  */
                SET_BIT  (GPIO_PORTA_REGISTER_SET2->GPIODEN.REG, u08TempPin)     ;        /*  Enable Digital  */
                if (strConfigPtr->pinConfig[u08Pin].pinDir == INPUT){
                    CLEAR_BIT(GPIO_PORTA_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_UP)        SET_BIT(GPIO_PORTA_REGISTER_SET2->GPIOPUR.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_DOWN) SET_BIT(GPIO_PORTA_REGISTER_SET2->GPIOPDR.REG, u08TempPin);
                    /* TODO: OPEN DRAIN INTERNAL ATTACH */
                    /* TODO: SLEW RATE INTERNAL ATTACH */
                }
                else if ((strConfigPtr->pinConfig[u08Pin].pinDir == OUTPUT)){
                    SET_BIT(GPIO_PORTA_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if     (strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_2mA) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIODR2R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_4mA) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIODR4R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_8mA) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIODR8R.REG, u08TempPin);
                }
                break;
            case PORTB :        /*  PORTB DIO   */
                u08TempPin = strConfigPtr->pinConfig[u08Pin].pinX;
                CLEAR_BIT(GPIO_PORTB_REGISTER_SET1->GPIOAFSEL.REG, u08TempPin) ;      /*  Choose DIO  */
                SET_BIT  (GPIO_PORTB_REGISTER_SET2->GPIODEN.REG, u08TempPin)     ;        /*  Enable Digital  */
                if (strConfigPtr->pinConfig[u08Pin].pinDir == INPUT){
                    CLEAR_BIT(GPIO_PORTB_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_UP)        SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIOPUR.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_DOWN) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIOPDR.REG, u08TempPin);
                    /* TODO: OPEN DRAIN INTERNAL ATTACH */
                    /* TODO: SLEW RATE INTERNAL ATTACH */
                }
                else if ((strConfigPtr->pinConfig[u08Pin].pinDir == OUTPUT)){
                    SET_BIT(GPIO_PORTA_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if     (strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_2mA) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIODR2R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_4mA) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIODR4R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_8mA) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIODR8R.REG, u08TempPin);
                }
                break;
            case PORTC :        /*  PORTC DIO   */
                u08TempPin = strConfigPtr->pinConfig[u08Pin].pinX;
                CLEAR_BIT(GPIO_PORTC_REGISTER_SET1->GPIOAFSEL.REG, u08TempPin) ;      /*  Choose DIO  */
                SET_BIT  (GPIO_PORTC_REGISTER_SET2->GPIODEN.REG, u08TempPin)     ;        /*  Enable Digital  */
                if (strConfigPtr->pinConfig[u08Pin].pinDir == INPUT){
                    CLEAR_BIT(GPIO_PORTC_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_UP)        SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIOPUR.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_DOWN) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIOPDR.REG, u08TempPin);
                    /* TODO: OPEN DRAIN INTERNAL ATTACH */
                    /* TODO: SLEW RATE INTERNAL ATTACH */
                }
                else if ((strConfigPtr->pinConfig[u08Pin].pinDir == OUTPUT)){
                    SET_BIT(GPIO_PORTC_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if     (strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_2mA) SET_BIT(GPIO_PORTC_REGISTER_SET2->GPIODR2R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_4mA) SET_BIT(GPIO_PORTC_REGISTER_SET2->GPIODR4R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_8mA) SET_BIT(GPIO_PORTC_REGISTER_SET2->GPIODR8R.REG, u08TempPin);
                }
                break;
            case PORTD :        /*  PORTD DIO   */
                u08TempPin = strConfigPtr->pinConfig[u08Pin].pinX;
                CLEAR_BIT(GPIO_PORTD_REGISTER_SET1->GPIOAFSEL.REG, u08TempPin) ;      /*  Choose DIO  */
                SET_BIT  (GPIO_PORTD_REGISTER_SET2->GPIODEN.REG, u08TempPin)     ;        /*  Enable Digital  */
                if (strConfigPtr->pinConfig[u08Pin].pinDir == INPUT){
                    CLEAR_BIT(GPIO_PORTD_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_UP)        SET_BIT(GPIO_PORTD_REGISTER_SET2->GPIOPUR.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_DOWN) SET_BIT(GPIO_PORTD_REGISTER_SET2->GPIOPDR.REG, u08TempPin);
                    /* TODO: OPEN DRAIN INTERNAL ATTACH */
                    /* TODO: SLEW RATE INTERNAL ATTACH */
                }
                else if ((strConfigPtr->pinConfig[u08Pin].pinDir == OUTPUT)){
                    SET_BIT(GPIO_PORTA_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if     (strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_2mA) SET_BIT(GPIO_PORTD_REGISTER_SET2->GPIODR2R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_4mA) SET_BIT(GPIO_PORTD_REGISTER_SET2->GPIODR4R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_8mA) SET_BIT(GPIO_PORTD_REGISTER_SET2->GPIODR8R.REG, u08TempPin);
                }
                break;
            case PORTE :        /*  PORTE DIO   */
                u08TempPin = strConfigPtr->pinConfig[u08Pin].pinX;
                CLEAR_BIT(GPIO_PORTE_REGISTER_SET1->GPIOAFSEL.REG, u08TempPin) ;      /*  Choose DIO  */
                SET_BIT  (GPIO_PORTE_REGISTER_SET2->GPIODEN.REG, u08TempPin)     ;        /*  Enable Digital  */
                if (strConfigPtr->pinConfig[u08Pin].pinDir == INPUT){
                    CLEAR_BIT(GPIO_PORTE_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_UP)        SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIOPUR.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_DOWN) SET_BIT(GPIO_PORTB_REGISTER_SET2->GPIOPDR.REG, u08TempPin);
                    /* TODO: OPEN DRAIN INTERNAL ATTACH */
                    /* TODO: SLEW RATE INTERNAL ATTACH */
                }
                else if ((strConfigPtr->pinConfig[u08Pin].pinDir == OUTPUT)){
                    SET_BIT(GPIO_PORTE_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if     (strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_2mA) SET_BIT(GPIO_PORTE_REGISTER_SET2->GPIODR2R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_4mA) SET_BIT(GPIO_PORTE_REGISTER_SET2->GPIODR4R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_8mA) SET_BIT(GPIO_PORTE_REGISTER_SET2->GPIODR8R.REG, u08TempPin);
                }
                break;
            case PORTF :        /*  PORTF DIO   */
                u08TempPin = strConfigPtr->pinConfig[u08Pin].pinX;
                CLEAR_BIT(GPIO_PORTF_REGISTER_SET1->GPIOAFSEL.REG, u08TempPin) ;      /*  Choose DIO  */
                SET_BIT  (GPIO_PORTF_REGISTER_SET2->GPIODEN.REG, u08TempPin)     ;        /*  Enable Digital  */
                if (strConfigPtr->pinConfig[u08Pin].pinDir == INPUT){
                    CLEAR_BIT(GPIO_PORTF_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_UP)        SET_BIT(GPIO_PORTF_REGISTER_SET2->GPIOPUR.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinInternaAttach == PULL_DOWN) SET_BIT(GPIO_PORTF_REGISTER_SET2->GPIOPDR.REG, u08TempPin);
                    /* TODO: OPEN DRAIN INTERNAL ATTACH */
                    /* TODO: SLEW RATE INTERNAL ATTACH */
                }
                else if ((strConfigPtr->pinConfig[u08Pin].pinDir == OUTPUT)){
                    SET_BIT(GPIO_PORTF_REGISTER_SET1->GPIODIR.REG, u08TempPin);
                    if     (strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_2mA) SET_BIT(GPIO_PORTF_REGISTER_SET2->GPIODR2R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_4mA) SET_BIT(GPIO_PORTF_REGISTER_SET2->GPIODR4R.REG, u08TempPin);
                    else if(strConfigPtr->pinConfig[u08Pin].pinOutputCurrent == DRIVE_8mA) SET_BIT(GPIO_PORTF_REGISTER_SET2->GPIODR8R.REG, u08TempPin);
                }
                break;
            default:
                break;
            }
            break;
        case ICU_MODE :         /*  PIN ICU CONFIG  */
            /* TODO: ICU_MODE CONFIG */
            break;
        case ADC_MODE :         /*  PIN ADC CONFIG  */
            /* TODO: ADC_MODE CONFIG */
            break;
        case UART_MODE :         /*  PIN UART CONFIG  */
            /* TODO: UART_MODE CONFIG */
            break;
        case EXT_INTERRUPT_MODE :         /*  PIN as External Interrupt CONFIG  */
            /* TODO: EXT_INTERRUPT_MODE CONFIG */
            break;
        default:
            break;
        }
    }
}

/**********************************************************************************************************************
 *  END OF FILE: Port.c
 *********************************************************************************************************************/

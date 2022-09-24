/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  DIO.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "DIO.h"
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

/********************************************************* Pin APIs **********************************************************/
DIO_PinLevel_e DIO_ReadChannel  ( DIO_Channel channel )
{
    u08 pin = Port_strPortConfig.pinConfig[channel].pinX;
    u08 port = Port_strPortConfig.pinConfig[channel].portX;
    u08 level;
    switch (port)
    {
    case PORTA :
        level = (u08) BitBand_Peripheral(DIO_PORTA_DATA, pin);
        break;
    case PORTB :
        level = (u08) BitBand_Peripheral(DIO_PORTB_DATA, pin);
        break;
    case PORTC :
        level = (u08) BitBand_Peripheral(DIO_PORTC_DATA, pin);
        break;
    case PORTD :
        level = (u08) BitBand_Peripheral(DIO_PORTD_DATA, pin);
        break;
    case PORTE :
        level = (u08) BitBand_Peripheral(DIO_PORTE_DATA, pin);
        break;
    case PORTF :
        level = (u08) BitBand_Peripheral(DIO_PORTF_DATA, pin);
        break;
    default:
        break;
    }
    return level;
}
/**********************************************************************************************************************/

void DIO_WriteChannel ( DIO_Channel channel, DIO_PinLevel_e level )
{
    u08 pin = Port_strPortConfig.pinConfig[channel].pinX;
    u08 port = Port_strPortConfig.pinConfig[channel].portX;
    switch (port)
    {
    case PORTA :
        BitBand_Peripheral(DIO_PORTA_DATA, pin) = level;
        break;
    case PORTB :
        BitBand_Peripheral(DIO_PORTB_DATA, pin) = level;
        break;
    case PORTC :
        BitBand_Peripheral(DIO_PORTC_DATA, pin) = level;
        break;
    case PORTD :
        BitBand_Peripheral(DIO_PORTD_DATA, pin) = level;
        break;
    case PORTE :
        BitBand_Peripheral(DIO_PORTE_DATA, pin) = level;
        break;
    case PORTF :
        BitBand_Peripheral(DIO_PORTF_DATA, pin) = level;
        break;
    default :
        break;
    }
}
/**********************************************************************************************************************/

void DIO_ToggleChannel( DIO_Channel channel)
{
    u08 pin = Port_strPortConfig.pinConfig[channel].pinX;
    u08 port = Port_strPortConfig.pinConfig[channel].portX;
    u08 level;
    switch (port)
    {
    case PORTA :
        level = (u08) BitBand_Peripheral(DIO_PORTA_DATA, pin);
        BitBand_Peripheral(DIO_PORTA_DATA, pin) = !(level);
        break;
    case PORTB :
        level = (u08) BitBand_Peripheral(DIO_PORTB_DATA, pin);
        BitBand_Peripheral(DIO_PORTB_DATA, pin) = !(level);
        break;
    case PORTC :
        level = (u08) BitBand_Peripheral(DIO_PORTC_DATA, pin);
        BitBand_Peripheral(DIO_PORTC_DATA, pin) = !(level);
        break;
    case PORTD :
        level = (u08) BitBand_Peripheral(DIO_PORTD_DATA, pin);
        BitBand_Peripheral(DIO_PORTD_DATA, pin) = !(level);
        break;
    case PORTE :
        level = (u08) BitBand_Peripheral(DIO_PORTE_DATA, pin);
        BitBand_Peripheral(DIO_PORTE_DATA, pin) = !(level);
        break;
    case PORTF :
        level = (u08) BitBand_Peripheral(DIO_PORTF_DATA, pin);
        BitBand_Peripheral(DIO_PORTF_DATA, pin) = !(level);
        break;
    default :
        break;
    }
}
/**********************************************************************************************************************/

/********************************************************* Port APIs **********************************************************/
DIO_PortLevel       Dio_ReadPort     ( DIO_Port_e );
/**********************************************************************************************************************/

void                DIO_WritePort    ( DIO_Port_e port, DIO_PortLevel value );
/**********************************************************************************************************************/

/**********************************************************************************************************************
 *  END OF FILE: DIO.c
 *********************************************************************************************************************/

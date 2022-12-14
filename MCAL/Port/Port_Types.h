/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Port_Types.h
 *       Module:  -
 *
 *  Description:  Contains MCU Port Types
 *  
 *********************************************************************************************************************/
#ifndef PORT_TYPES_H
#define PORT_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



#define TOTAL_GPIO_PINS                                     43U

/*                         Aperture                        */
#define APB                                                 0
#define AHB                                                 1

#ifndef INPUT
    #define INPUT                                           0
#endif

#ifndef OUTPUT
    #define OUTPUT                                           1
#endif

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef enum
{
	PORTA      = 0,
	PORTB      = 1,
	PORTC      = 2,
	PORTD      = 3,
	PORTE      = 4,
	PORTF      = 5
} Port_Portx_e;

typedef enum
{
	PIN0       = 0,
	PIN1       = 1,
	PIN2       = 2,
	PIN3       = 3,
	PIN4       = 4,
	PIN5       = 5,
	PIN6       = 6,
	PIN7       = 7
} Port_Pinx_e;

/* TODO: Add The Other Modes */
typedef enum
{
	DIO_MODE   				= 0,
	ICU_MODE   				= 1,
	ADC_MODE   				= 2,
	UART_MODE  				= 3,
	EXT_INTERRUPT_MODE 		= 4
} Port_PinModeT_e;


typedef enum
{
	PIN_INPUT	   = 0,
	PIN_OUTPUT	   = 1
}Port_PinDirection_e;


typedef enum
{
	PULL_UP     = 0,
	PULL_DOWN   = 1,
	OPEN_DRAIN  = 2,
	SLEW_RATE   = 3
} Port_PinInternalAttach_e;

typedef enum
{
	DRIVE_2mA   = 0,
	DRIVE_4mA   = 1,
	DRIVE_8mA   = 2
} Port_PinOutputCurrent_e;


/* Output value (Low/High) */
typedef enum
{
	PIN_LEVEL_LOW  = 0,
	PIN_LEVEL_HIGH = 1
} Port_PinLevel_e;



typedef struct{
    Port_Portx_e                portX;
    Port_Pinx_e                 pinX;
    Port_PinModeT_e             pinMode;
	Port_PinDirection_e			pinDir;
    Port_PinInternalAttach_e    pinInternaAttach;
    Port_PinOutputCurrent_e     pinOutputCurrent;
    Port_PinLevel_e             pinLevel;
}Port_strPortSet;

typedef struct{
    Port_strPortSet     pinConfig[TOTAL_GPIO_PINS];
}Port_strConfig;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* PORT_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Port_Types.h
 *********************************************************************************************************************/

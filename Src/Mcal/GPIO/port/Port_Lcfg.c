
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Port_Lcfg.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "STD_Types.h"
#include "GPIO_Types.h"
#include "port.h"
/*************************************************************************
 * Description :Array of structures for configuration of pins (43) during link time
 *
 *                1- port type :-
 *                     >> PORTA
	                   >> PORTB
	                   >> PORTC
	                   >> PORTD
	                   >> PORTE
	                   >> PORTF
 *                2- pin type :-
 *                     >> PN0
	                   >> PN1
	                   >> PN2
	                   >> PN3
	                   >> PN4
	                   >> PN5
	                   >> PN6
	                   >> PN7
	              3- pin state :-
 *                     >> CONFIGURED_PIN
	                   >> NON_CONFIGURED_PIN
	              4- pin mode :-
 *                     >> MODE_DIO
	                   >> MODE_ADC
	                   >> MODE_DMA
 *                5- pin direction :-
 *                     >> INPUT
	                   >> OUTPUT
	              6- pin internal attach :-
	                   >> PULL_UP_ATTACH
	                   >> PULL_DOWN_ATTACH
                	   >> OPEN_DRAIN_ATTACH
	                   >> SLEW_RATE__ATTACH
 *                7- pin level :-
 *                     >> PIN_LOW
	                   >> PIN_HIGH
 *                8- pin output current :-
 *                     >> CURRENT_2MA = 0,
	                   >> CURRENT_4MA,
	                   >> CURRENT_8MA

 **************************************************************************/
GPIO_ConfigType PORT_ConfigType [PIN_NUMBERS] =
{
    {PORTA,                                         /* 1- port type */
	 PN0,                                           /* 2- pin type */
	 NON_CONFIGURED_PIN,                            /* 3- pin state */
	 0,                                             /* 4- pin mode  */
	 0,                                             /* 5- pin direction */
	 0,                                             /* 6- pin internal attach */
	 0,                                             /* 7- pin level  */
	 0                                              /* 8- pin output current  */
    },     /* PORTA-PIN0*/

 	{PORTA,PN1,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTA-PIN1*/
 	{PORTA,PN2,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTA-PIN2*/
 	{PORTA,PN3,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTA-PIN3*/
 	{PORTA,PN4,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTA-PIN4*/
 	{PORTA,PN5,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTA-PIN5*/
	{PORTA,PN6,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTA-PIN6*/
	{PORTA,PN7,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTA-PIN7*/


 	{PORTB,PN0,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTB-PIN0*/
 	{PORTB,PN1,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTB-PIN1*/
 	{PORTB,PN2,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTB-PIN2*/
 	{PORTB,PN3,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTB-PIN3*/
 	{PORTB,PN4,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTB-PIN4*/
 	{PORTB,PN5,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTB-PIN5*/
 	{PORTB,PN6,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTB-PIN6*/
 	{PORTB,PN7,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTB-PIN7*/

 	{PORTC,PN0,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTC-PIN0*/
 	{PORTC,PN1,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTC-PIN1*/
 	{PORTC,PN2,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTC-PIN2*/
 	{PORTC,PN3,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTC-PIN3*/
 	{PORTC,PN4,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTC-PIN4*/
 	{PORTC,PN5,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTC-PIN5*/
 	{PORTC,PN6,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTC-PIN6*/
 	{PORTC,PN7,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTC-PIN7*/

 	{PORTD,PN0,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTD-PIN0*/
 	{PORTD,PN1,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTD-PIN1*/
 	{PORTD,PN2,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTD-PIN2*/
 	{PORTD,PN3,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTD-PIN3*/
 	{PORTD,PN4,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTD-PIN4*/
 	{PORTD,PN5,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTD-PIN5*/
 	{PORTD,PN6,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTD-PIN6*/
 	{PORTD,PN7,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTD-PIN7*/

 	{PORTE,PN0,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTE-PIN0*/
 	{PORTE,PN1,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTE-PIN1*/
 	{PORTE,PN2,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTE-PIN2*/
 	{PORTE,PN3,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTE-PIN3*/
 	{PORTE,PN4,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTE-PIN4*/
 	{PORTE,PN5,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTE-PIN5*/

	{PORTF,PN0,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTF-PIN0*/
	{PORTF,PN1,1,0,1,0,0,0},                             /* PORTF-PIN1*/
	{PORTF,PN2,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTF-PIN2*/
	{PORTF,PN3,NON_CONFIGURED_PIN,0,0,0,0,0},            /* PORTF-PIN3*/
	{PORTF,PN4,1,0,0,0,0,0},            /* PORTF-PIN4*/
};
/**********************************************************************************************************************
 *  END OF FILE: Port_Lcfg.c
 *********************************************************************************************************************/

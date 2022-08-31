
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  LED.c
 *        \brief >> task :
 *                  --- On led for ON_TIME
 *                  --- OFF led for OFF_TIME
 *
 *      \details
 *
 *
 *********************************************************************************************************************
 *** NAME: Mohamed Hassaneen Ahmed
 *** DATE: 29/8/2022
**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "DIO.h"
#include "port.h"
#include "STD_Types.h"

/**********************************************************************************************************************
  *  GLOBAL DATA
*********************************************************************************************************************/
extern GPIO_ConfigType PORT_ConfigType [PIN_NUMBERS];
 uint8_t counts =0 ;

/**********************************************************************************************************************
  *  GLOBAL CONSTANT MACROS
*********************************************************************************************************************/

#define ON_TIME    2
#define OFF_TIME   4
#define TOTAL_TIME  (ON_TIME + OFF_TIME)

 /**********************************************************************************************************************
   * FUNCTION IMPLEMENTATION
 *********************************************************************************************************************/
 /******************************************************************************
  * \Syntax          : static void LED_Red_On (void)

  * \Description     : on led Red & Blue
  *
  * \Sync\Async      : Synchronous
  * \Reentrancy      : Reentrant
  * \Parameters (in) :None
  * \Parameters (out): None
  * \Return value:   : None
  *******************************************************************************/
static void LED_Red_On (void)
{
	DIO_WriteChannel(PORTF,PN2,1);
	DIO_WriteChannel(PORTF,PN1,1);
}

/******************************************************************************
  * \Syntax          : static void LED_Red_On (void)

  * \Description     : off led Red & Blue
  *
  * \Sync\Async      : Synchronous
  * \Reentrancy      : Reentrant
  * \Parameters (in) :None
  * \Parameters (out): None
  * \Return value:   : None
  *******************************************************************************/
static void LED_Red_Off (void)
{
	DIO_WriteChannel(PORTF,PN2,0);
	DIO_WriteChannel(PORTF,PN1,0);

}
/******************************************************************************
  * \Syntax          : static void LED_Red_On (void)

  * \Description     : init led
  *
  * \Sync\Async      : Synchronous
  * \Reentrancy      : Reentrant
  * \Parameters (in) :None
  * \Parameters (out): None
  * \Return value:   : None
  *******************************************************************************/
void LED_Init (void)
{
	GPIO_Init(PORT_ConfigType);
	LED_Red_Off();
}

/******************************************************************************
  * \Syntax          : static void LED_Red_On (void)

  * \Description     :  --- On led  for ON_TIME
 *                      --- OFF led for OFF_TIME
  *
  * \Sync\Async      : Synchronous
  * \Reentrancy      : Reentrant
  * \Parameters (in) :None
  * \Parameters (out): None
  * \Return value:   : None
  *******************************************************************************/
void LED_Blinkin_Task(void)
{
	if (counts < ON_TIME )
	{
		LED_Red_On();
	}
	else if ((counts >= ON_TIME) && (counts < TOTAL_TIME))
	{
		LED_Red_Off();
	}
	else if (counts == TOTAL_TIME)
	{
	counts=0;
	LED_Red_On();
	}
	counts++;
}


/**********************************************************************************************************************
 *  END OF FILE: LED.c
 *********************************************************************************************************************/

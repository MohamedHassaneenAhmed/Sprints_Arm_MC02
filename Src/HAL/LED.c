
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
#include "LED.h"
#include "Button.h"

/**********************************************************************************************************************
  *  GLOBAL DATA
*********************************************************************************************************************/
extern GPIO_ConfigType PORT_ConfigType [PIN_NUMBERS];



/**********************************************************************************************************************
  *  GLOBAL CONSTANT MACROS
*********************************************************************************************************************/

 /* initial values */
uint8_t counts = 0;
uint8_t On_Time =0;
uint8_t Off_Time =2;


 /**********************************************************************************************************************
   * FUNCTION IMPLEMENTATION
 *********************************************************************************************************************/
 /******************************************************************************
  * \Syntax          : static void LED_On (void)

  * \Description     : on LEDs Red & Blue & green
  *
  * \Sync\Async      : Synchronous
  * \Reentrancy      : Reentrant
  * \Parameters (in) :None
  * \Parameters (out): None
  * \Return value:   : None
  *******************************************************************************/
static void LED_On (void)
{
	DIO_WriteChannel(PORTF, PN1, 1);
	DIO_WriteChannel(PORTF, PN2, 1);
	DIO_WriteChannel(PORTF, PN3, 1);
}

/******************************************************************************
  * \Syntax          : static void LED_Red_On (void)

  * \Description     : off LEDs Red & Blue & green
  *
  * \Sync\Async      : Synchronous
  * \Reentrancy      : Reentrant
  * \Parameters (in) :None
  * \Parameters (out): None
  * \Return value:   : None
  *******************************************************************************/
static void LED_Off (void)
{
	DIO_WriteChannel(PORTF,PN1,0);
	DIO_WriteChannel(PORTF,PN2,0);
	DIO_WriteChannel(PORTF,PN3,0);
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
	//LED_Red_Off();
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
	if (On_Time == 0)
	{
		LED_Off();
	}
	else if (Off_Time == 0)
	{
		LED_On();
	}
	else
	{
		if (counts < On_Time)
		{
			LED_On();
		}
		else if ((counts >= On_Time) && (counts < (On_Time + Off_Time)))
		{
			LED_Off();
		}
		else if (counts == (On_Time + Off_Time))
		{
			counts = 0;
			LED_On();
		}
		counts++;
	}
}

/******************************************************************************
  * \Syntax          : void Toggle_OnUpdatingTime(void)

  * \Description     : on time update
  *
  * \Sync\Async      : Synchronous
  * \Reentrancy      : Reentrant
  * \Parameters (in) :None
  * \Parameters (out): None
  * \Return value:   : None
  *******************************************************************************/
void Toggle_OnUpdatingTime(void)
{
	if ((fButton_1_Status() == PRESSED) && (fButton_2_Status() == RELEASED))
	{
		if (On_Time < 5)
		{
			On_Time++;
		}
		else
		{
			On_Time = 0;
		}
	}
}

/******************************************************************************
  * \Syntax          : void Toggle_OffUpdatingTime(void)

  * \Description     :  off time update
  *
  * \Sync\Async      : Synchronous
  * \Reentrancy      : Reentrant
  * \Parameters (in) :None
  * \Parameters (out): None
  * \Return value:   : None
  *******************************************************************************/
void Toggle_OffUpdatingTime(void)
{
	if((fButton_2_Status()== PRESSED)&& (fButton_1_Status()== RELEASED ))
	{
		if (Off_Time < 10)
		{
			Off_Time++;
		}
		else
		{
			Off_Time = 0;
		}

	}
}
/**********************************************************************************************************************
 *  END OF FILE: LED.c
 *********************************************************************************************************************/


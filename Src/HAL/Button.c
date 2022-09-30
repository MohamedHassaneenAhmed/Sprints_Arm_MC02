/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file   Button.c
 *        \brief >> task :
 *                  - button control
 *
 *      \details
 *
 *
 *********************************************************************************************************************
 *** NAME: Mohamed Hassaneen Ahmed
 *** DATE: 22/9/2022
**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "DIO.h"
#include "STD_Types.h"
#include "Button.h"
#include "port.h"
#include "SysCtr.h"

extern GPIO_ConfigType PORT_ConfigType [PIN_NUMBERS];

Button_StateType Button_1_Status = RELEASED;
Button_StateType Button_2_Status = RELEASED;


/******************************************************************************
 * \Syntax          : static void PB1_Unlock (void)

 * \Description     : button one ( pf0 ) unlock
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/

static void PB1_Unlock (void)
{
	Enable_Peripheral_Clock(2, 5);
	PIN_Lock(PORTF,1);
	PIN_Commit(PORTF,0);
	PIN_Lock(PORTF,0);
}

/******************************************************************************
 * \Syntax          :void  Button_Init (void)

 * \Description     : button init
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void  Button_Init (void)
{
	PB1_Unlock();
	GPIO_Init(PORT_ConfigType);
}

/******************************************************************************
 * \Syntax          : Button_StateType Button_Read(GPIO_PortType port,GPIO_ChannelType pin)

 * \Description     : read button state
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :GPIO_PortType port         >> port number
 *                   GPIO_ChannelType pin       >> pin number
 * \Parameters (out): Button_StateType >> button state
 * \Return value:   : None
 *******************************************************************************/
Button_StateType Button_Read(GPIO_PortType port,GPIO_ChannelType pin)
{
	uint16_t i =0;
	Button_StateType state = RELEASED;
	if(DIO_ReadChannel (port,pin) == PRESSED )
	{
		for ( i =0 ; i < 35000; i++ );         /* for debouncing*/
		if(DIO_ReadChannel (port,pin) == PRESSED )
		{
			state = PRESSED;
		}
		else
		{
			state = RELEASED;
		}
	}
return state;
}

/******************************************************************************
 * \Syntax          : void Button_1_Read (void)

 * \Description     : button 1 (pf0) read __SW2__
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void Button_1_Read (void)
{
	Button_1_Status =  Button_Read(PORTF,PN0);
}

/******************************************************************************
 * \Syntax          : void Button_2_Read (void)

 * \Description     : button 1 (pf4) read __SW1__
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void Button_2_Read (void)
{
	Button_2_Status =  Button_Read( PORTF,PN4);
}


/******************************************************************************
 * \Syntax          : Button_StateType fButton_1_Status (void)

 * \Description     : button one ( pf0 ) unlock
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): Button_StateType  Button 1 state
 * \Return value:   : None
 *******************************************************************************/
Button_StateType fButton_1_Status (void)
{
	return Button_1_Status;
}

/******************************************************************************
 * \Syntax          : Button_StateType fButton_2_Status (void)

 * \Description     : button one ( pf0 ) unlock
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): Button_StateType  Button 2 state
 * \Return value:   : None
 *******************************************************************************/
Button_StateType fButton_2_Status (void)
{
	return Button_2_Status;
}

/**********************************************************************************************************************
 *  END OF FILE: Button.c
 *********************************************************************************************************************/

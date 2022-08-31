
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  GPT.c
 *        \brief ---  static code for GPT Modules
 *               ---  generic APIs implementation for GPT
 *               ---  Callback functions for each module
 *
 *      \details
 *
 *
 *********************************************************************************************************************
 *** NAME: Mohamed Hassaneen Ahmed
 *** DATE: 24/8/2022
**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "scheduler.h"
#include "GPT.h"
#include"STD_Types.h"
#include "LED.h"

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
/* extern array for GPT confuguration */

extern GPT_ConfigType GPT_LinkConfig[12];

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

uint8_t sys_tick_flag=0;
uint32_t sys_tick=0;

/******************************************************************************************************/
/* determine task and its periodicity */

task_cfg task_array []=
{
 {LED_Blinkin_Task , 1000 },

};

/**********************************************************************************************************************
   * FUNCTION IMPLEMENTATION
 *********************************************************************************************************************/
/******************************************************************************
 * \Syntax          : void System_Tick_Init (void)

 * \Description     : >> timer0 configuration
                      >> used for system tick
                      >> set tick = 1ms
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void System_Tick_Init (void)
{
	GPT_Init(GPT_LinkConfig);
	GPT_StartTimer (1 , 15999);
}

/******************************************************************************
 * \Syntax          : void System_Tick_handler(void)

 * \Description     : >> ISR handler
                      >> used for update system tick

 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void System_Tick_handler(void)
{
	sys_tick++;
	sys_tick_flag = 1;
	TIMER1_ICR = 0x01;

}

/******************************************************************************
 * \Syntax          : void System_Tick_handler(void)

 * \Description     : >> operating system starting
                      >> managing application tasks

 * \Sync\Async      : Synchronous
 * \Reentrancy      : Reentrant
 * \Parameters (in) :None
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void start_os (void)
{
	uint8_t i;
	if (sys_tick_flag == 1)
	{
		for ( i=0; i< tasks_size ; i++ )
		{
			if ((sys_tick % task_array[i].periodicity) == 0)
			{
				task_array[i].task_ptr();
			}

		}

          sys_tick_flag =0;
	}

}
/***********************************************************************************************/
/**********************************************************************************************************************
 *  END OF FILE: scheduler.c
 *********************************************************************************************************************/

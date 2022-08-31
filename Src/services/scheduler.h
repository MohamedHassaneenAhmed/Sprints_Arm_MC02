
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  schaduler.h
 *       Module:  schaduler
 *
 *  Description:  task :
 *                  --- handling between tasks based on periodicity
 *                  --- using timer1A for timer triggering
 *                  --- system tick equals 1ms and may be modify by modify timer
 *
 *********************************************************************************************************************
 *** NAME: Mohamed Hassaneen Ahmed
 *** DATE: 29/8/2022
**********************************************************************************************************************/

#ifndef SCHADULER_H_
#define SCHADULER_H_

#include "STD_Types.h"

#define tasks_size sizeof(task_array)/sizeof(task_cfg)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
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

void System_Tick_Init( void);

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
void System_Tick_handler(void);

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
void start_os (void);

/**************************************************************************************************************
*  DATA TYPES
***************************************************************************************************************/

 typedef struct
 {
	 void (*task_ptr) (void);
	 uint16_t periodicity ;
 } task_cfg;


#endif /* SCHADULER_H_ */
 /**********************************************************************************************************************
  *  END OF FILE: scheduler.h
  *********************************************************************************************************************/

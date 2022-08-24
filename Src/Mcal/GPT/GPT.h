/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO_Types.h
 *       Module:  GPIO
 *
 *  Description:  GPIO Registers
 *                Using Bit Masking feature in Data register in ARM CORTEXM-4 to avoid
 *                Raed-Modify-write technique and all functions are reentrant.
 *
 **********************************************************************************************************/

#ifndef GPT_GPT_H_
#define GPT_GPT_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include"Macros.h"
#include"SysCtr.h"
#include"GPT_Types.h"
#include"GPT_Reg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define GPT_MODULESNUMBERS 12

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void GPT_Init (const GPT_ConfigType *ConfigPtr);

void GPT_DisableNotification (GPT_ChannelAType Clannel);

void GPT_EnableNotification (GPT_ChannelAType Clannel);

void GPT_StartTimer (GPT_ChannelAType Clannel, GPT_ValueType target_value);

void GPT_StopTimer (GPT_ChannelAType Clannel);

void GPT_NotificationTimerA0 (void);

GPT_ValueType GPT_GetTimeElapsed (GPT_ChannelAType Clannel);

GPT_ValueType GPT_GetTimeRemaining (GPT_ChannelAType Clannel);




#endif /* GPT_GPT_H_ */




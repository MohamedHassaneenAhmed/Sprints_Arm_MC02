/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPT_Types.h
 *       Module:  GPIO
 *
 *  Description:  GPIO Registers
 *                Using Bit Masking feature in Data register in ARM CORTEXM-4 to avoid
 *                Raed-Modify-write technique and all functions are reentrant.
 *
 **********************************************************************************************************/
#ifndef GPT_GPT_TYPES_H_
#define GPT_GPT_TYPES_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include"STD_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
	TIMERAO=0,
	TIMERA1,
	TIMERA2,
	TIMERA3,
	TIMERA4,
	TIMERA5,
	WTIMERAO,
	WTIMERA1,
	WTIMERA2,
	WTIMERA3,
	WTIMERA4,
	WTIMERA5
}GPT_ChannelAType;                              /* numeric type for timer channels */

typedef uint32_t GPT_ValueType;                 /* type to set or read target value */
typedef uint32_t GPT_MaxTickValueType;          /* type to select max number of ticks*/
typedef uint8_t GPT_ChannelTickFrequencyType;   /* type to select frequency  */


typedef enum
{
	GPT_MODE_ONESHOT=0,
	GPT_MODE_PERIODIC
}GPT_ModeType;

typedef enum
{
	GPT_PREDEF_TIMER_1US_16BIT=0,
	GPT_PREDEF_TIMER_1US_24BIT,
	GPT_PREDEF_TIMER_1US_32BIT,
	GPT_PREDEF_TIMER_100US_32BIT
}GPT_PredefTimerType;                               /* this type for predefine timer which the user select
                                                       the desired mode */


/* Structure for configuration */

typedef struct
{
	GPT_ChannelAType                Channel_ID;
	GPT_EnableType                  Enablitiy;
	GPT_ChannelTickFrequencyType    Frequency_MHZ;
	GPT_MaxTickValueType            Max_Tick_Numbers;
	GPT_ValueType                   Target_Value;
	GPT_ModeType                    Mode;
	void (*GPT_Callback)(void);
}GPT_ConfigType;

typedef enum
{
	GPT_DISABLE=0,
	GPT_ENABLE
}GPT_EnableType;







#endif /* GPT_GPT_TYPES_H_ */


/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  dio.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include"GPT.h
#include"SysCtr.h"


/******************************************************************************
* \Syntax          : GPIO_LevelChannelType DIO_ReadChannel (GPIO_ChannelType Channel_ID,
*                                                           GPIO_PortType Port_ID)

* \Description     : Read pin
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Reentrant
* \Parameters (in) : Channel_ID >>  pin number
*                    Port_ID    >>  port number
* \Parameters (out): None
* \Return value:   : DIO_LevelChannelType  High=1
*                                          Low =0
*                                          NOT_OK =-1
*******************************************************************************/
void GPT_Init (const GPT_ConfigType *ConfigPtr)
{
	uint8_t i ;
 if (ConfigPtr->Enablitiy == 0)
 {
 } /* do nothing*/
 else
 {
	 for (i =0 ; i < GPT_MODULESNUMBERS;i++)
	 {

		 /* enable clock */
		 switch(ConfigPtr->Channel_ID)
		 {
			case 0:
				Enable_Peripheral_Clock(1, 0);
			case 1:
				Enable_Peripheral_Clock(1, 1);
			case 2:
				Enable_Peripheral_Clock(1, 2);
			case 3:
				Enable_Peripheral_Clock(1, 3);
			case 4:
				Enable_Peripheral_Clock(1, 4);
			case 5:
				Enable_Peripheral_Clock(1, 5);
			case 6:
				Enable_Peripheral_Clock(2, 0);
			case 7:
				Enable_Peripheral_Clock(2, 1);
			case 8:
				Enable_Peripheral_Clock(2, 2);
			case 9:
				Enable_Peripheral_Clock(2, 3);
			case 10:
				Enable_Peripheral_Clock(2, 4);
			case 11:
				Enable_Peripheral_Clock(2, 5);
			}
	 }
 }
}

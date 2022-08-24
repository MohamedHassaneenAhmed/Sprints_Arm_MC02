
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File: Port.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef GPIO_PORT_PORT_H_
#define GPIO_PORT_PORT_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include"GPIO_Types.h"
#include"GPIO_Reg.h"
#include"DIO.h"
#include"Macros.h"
#include"SysCtr.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define PIN_NUMBERS 43
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
Std_ReturnType PIN_SetDirection            (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
									        GPIO_PinDirectionType Direction);

Std_ReturnType PIN_SetDigitalEnable        (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_PinDigitalEnableType DigEn);

Std_ReturnType PIN_SetPullUp               (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_PinPullUpType PullUp_state);

Std_ReturnType PIN_SetPullDown             (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_PinPullDownType PullDown_state);


Std_ReturnType PIN_SetOpenDrain           (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_PinOpenDrainType OpenDrain_state);


Std_ReturnType PIN_SetSlewRate             (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_PinSlewRateType SlewRate_state);



Std_ReturnType PIN_MaskInterrupt           (GPIO_ChannelType Channel_ID,
								            GPIO_PortType Port_ID,
											GPIO_InterruptMaskType int_mode);

Std_ReturnType PIN_SenseInterrupt          (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_InterruptSenseType sense );

Std_ReturnType PIN_BothInterrupt           (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_InterruptBothType both_mode );

Std_ReturnType PIN_EventInterrupt          (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_InterruptEventType trigger_state );

Std_ReturnType PIN_MaskedStatusInterrupt   (GPIO_ChannelType Channel_ID,
								            GPIO_PortType Port_ID);

Std_ReturnType PIN_RawStatusInterrupt      (GPIO_ChannelType Channel_ID,
								            GPIO_PortType Port_ID);

Std_ReturnType PIN_ClearInterrupt          (GPIO_ChannelType Channel_ID,
								            GPIO_PortType Port_ID);

Std_ReturnType PIN_Lock                     (GPIO_PortType Port_ID,
											GPIO_LockType lock_state);

Std_ReturnType PIN_Commit                   (GPIO_PortType Port_ID,
											 GPIO_ChannelType Channel_ID);

Std_ReturnType PIN_PortControl             (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_PortControlType function );

Std_ReturnType PIN_ADCControl              (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_ADCControlType state );

Std_ReturnType PIN_DMAControl              (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_DMAControlType state );

Std_ReturnType PIN_AnalogMode              (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_AnalogType state );

Std_ReturnType PIN_AlternativeFunction     (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_AlternativeFunctionType state );

Std_ReturnType PIN_CurrentDrive            (GPIO_ChannelType Channel_ID,
									        GPIO_PortType Port_ID,
											GPIO_PinOutputCurrentType drive );

/*****************************************************************************************************/
Std_ReturnType  GPIO_Init (const GPIO_ConfigType *Port_ConfigPtr);


#endif /* GPIO_PORT_PORT_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/

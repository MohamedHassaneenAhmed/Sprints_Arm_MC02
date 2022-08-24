
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysCtr.h
 *       Module:  clock
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef CLOCK_SYSCTR_H_
#define CLOCK_SYSCTR_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "STD_Types.h"
#include "NVIC_Types.h"
#include "Macros.h"
#include  "Compiler.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
/* Memory-mapped peripheral registers */

#define SYSCTL_RCGCWD         (*((volatile uint32_t *)0x400FE600))
#define SYSCTL_RCGCTIMER      (*((volatile uint32_t *)0x400FE604))
#define SYSCTL_RCGCGPIO       (*((volatile uint32_t *)0x400FE608))
#define SYSCTL_RCGCDMA        (*((volatile uint32_t *)0x400FE60C))
#define SYSCTL_RCGCHIB        (*((volatile uint32_t *)0x400FE614))
#define SYSCTL_RCGCUART       (*((volatile uint32_t *)0x400FE618))
#define SYSCTL_RCGCSSI        (*((volatile uint32_t *)0x400FE61C))
#define SYSCTL_RCGCI2C        (*((volatile uint32_t *)0x400FE620))
#define SYSCTL_RCGCUSB        (*((volatile uint32_t *)0x400FE628))
#define SYSCTL_RCGCCAN        (*((volatile uint32_t *)0x400FE634))
#define SYSCTL_RCGCADC        (*((volatile uint32_t *)0x400FE638))
#define SYSCTL_RCGCACMP       (*((volatile uint32_t *)0x400FE63C))
#define SYSCTL_RCGCPWM        (*((volatile uint32_t *)0x400FE640))
#define SYSCTL_RCGCQEI        (*((volatile uint32_t *)0x400FE644))
#define SYSCTL_RCGCEEPROM     (*((volatile uint32_t *)0x400FE658))
#define SYSCTL_RCGCWTIMER     (*((volatile uint32_t *)0x400FE65C))

#define SYSCTL_RCC_R            (*((volatile uint32_t *)0x400FE060))
#define SYSCTL_RCC2_R           (*((volatile uint32_t *)0x400FE070))
#define SYSCTL_RIS_R            (*((volatile uint32_t *)0x400FE050))


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
	WATCHDOG,
	TIMER,
	GPIO,
	DMA,               /* Direct Memory Access */
	HIB,               /* Hibernation Run Mode */
	UART,
	SSI,               /* Synchronous Serial Interface == SPI */
	I2C,
	USB,
	CAN,
	ADC,
	ACMP,              /* Analog Comparator Run Mode */
	PWM,
	QEI,               /* Quadrature Encoder Interface Run Mode */
	EEPROM,
	WTIMER             /* BitWide General-Purpose Timer Run */
}Peripheral_Type;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
uint8_t Enable_Peripheral_Clock (uint8_t U8Peripheral_Name , uint8_t U8Peripheral_Channel );
uint8_t Clock_PLL_init (uint8_t U8Div_number);

#endif /* CLOCK_SYSCTR_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/

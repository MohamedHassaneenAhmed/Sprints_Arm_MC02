
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NVIC.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef NVIC_NVIC_H_
#define NVIC_NVIC_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "NVIC_Types.h"
#include "Macros.h"
#include "Compiler.h"
#include "STD_Types.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define NVIC_EN0                (*((volatile uint32_t *)0xE000E100))
#define NVIC_EN1                (*((volatile uint32_t *)0xE000E104))
#define NVIC_EN2                (*((volatile uint32_t *)0xE000E108))
#define NVIC_EN3                (*((volatile uint32_t *)0xE000E10C))
#define NVIC_EN4                (*((volatile uint32_t *)0xE000E110))
#define NVIC_DIS0               (*((volatile uint32_t *)0xE000E180))
#define NVIC_DIS1               (*((volatile uint32_t *)0xE000E184))
#define NVIC_DIS2               (*((volatile uint32_t *)0xE000E188))
#define NVIC_DIS3               (*((volatile uint32_t *)0xE000E18C))
#define NVIC_DIS4               (*((volatile uint32_t *)0xE000E190))
#define NVIC_PRI0               (*((volatile uint32_t *)0xE000E400))
#define NVIC_PRI1               (*((volatile uint32_t *)0xE000E404))
#define NVIC_PRI2               (*((volatile uint32_t *)0xE000E408))
#define NVIC_PRI3               (*((volatile uint32_t *)0xE000E40C))
#define NVIC_PRI4               (*((volatile uint32_t *)0xE000E410))
#define NVIC_PRI5               (*((volatile uint32_t *)0xE000E414))
#define NVIC_PRI6               (*((volatile uint32_t *)0xE000E418))
#define NVIC_PRI7               (*((volatile uint32_t *)0xE000E41C))
#define NVIC_PRI8               (*((volatile uint32_t *)0xE000E420))
#define NVIC_PRI9               (*((volatile uint32_t *)0xE000E424))
#define NVIC_PRI10              (*((volatile uint32_t *)0xE000E428))
#define NVIC_PRI11              (*((volatile uint32_t *)0xE000E42C))
#define NVIC_PRI12              (*((volatile uint32_t *)0xE000E430))
#define NVIC_PRI13              (*((volatile uint32_t *)0xE000E434))
#define NVIC_PRI14              (*((volatile uint32_t *)0xE000E438))
#define NVIC_PRI15              (*((volatile uint32_t *)0xE000E43C))
#define NVIC_PRI16              (*((volatile uint32_t *)0xE000E440))
#define NVIC_PRI17              (*((volatile uint32_t *)0xE000E444))
#define NVIC_PRI18              (*((volatile uint32_t *)0xE000E448))
#define NVIC_PRI19              (*((volatile uint32_t *)0xE000E44C))
#define NVIC_PRI20              (*((volatile uint32_t *)0xE000E450))
#define NVIC_PRI21              (*((volatile uint32_t *)0xE000E454))
#define NVIC_PRI22              (*((volatile uint32_t *)0xE000E458))
#define NVIC_PRI23              (*((volatile uint32_t *)0xE000E45C))
#define NVIC_PRI24              (*((volatile uint32_t *)0xE000E460))
#define NVIC_PRI25              (*((volatile uint32_t *)0xE000E464))
#define NVIC_PRI26              (*((volatile uint32_t *)0xE000E468))
#define NVIC_PRI27              (*((volatile uint32_t *)0xE000E46C))
#define NVIC_PRI28              (*((volatile uint32_t *)0xE000E470))
#define NVIC_PRI29              (*((volatile uint32_t *)0xE000E474))
#define NVIC_PRI30              (*((volatile uint32_t *)0xE000E478))
#define NVIC_PRI31              (*((volatile uint32_t *)0xE000E47C))
#define NVIC_PRI32              (*((volatile uint32_t *)0xE000E480))
#define NVIC_PRI33              (*((volatile uint32_t *)0xE000E484))
#define NVIC_PRI34              (*((volatile uint32_t *)0xE000E488))


#define INTERRUPT_NUMBERS  78
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
Std_ReturnType NVIC_Enable_IRQ (uint8_t U8Peripheral_Name);

Std_ReturnType  NVIC_Disable_IRQ( uint8_t U8Peripheral_Name);

Std_ReturnType  NVIC_Priority_IRQ( uint32_t *NVIC_PRI_Reg_Addresses[],
							       uint8_t  U8Peripheral_Name,
							       uint8_t  U8Level_Priority
						         );



#endif /* NVIC_NVIC_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/

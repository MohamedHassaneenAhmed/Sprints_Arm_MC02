/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  Mcu_Hw
 *
 *  Description:  header file for Registers definition
 *
 *********************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct
{
    uint32_t VECACT   :8;
    uint32_t          :3;
    uint32_t RETBASE  :1;
    uint32_t VECPEND  :3;
    uint32_t VECPEND  :4;
    uint32_t          :2;
    uint32_t ISRPEND  :1;
    uint32_t ISRPRE   :1;
    uint32_t          :1;
    uint32_t PENDSTCLR:1;
    uint32_t PENDSTSET:1;
    uint32_t UNPENDSV :1;
    uint32_t PENDSV   :1;
    uint32_t          :2;
    uint32_t NMISET   :1;
}INTCTRL_BF;


typedef union
{
    uint32_t R;
    INTCTRL_BF B;
}INTCTRL_Tag;



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS             0xE000E000
#define APINT                                  *((volatile uint32_t*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C))
#define INTCTRL                                *((volatile INTCTRL_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04))
#define NVIC_EN0                                (*((volatile uint32_t *)0xE000E100))
#define NVIC_EN1                                 (*((volatile uint32_t *)0xE000E104))
#define NVIC_EN2              (*((volatile uint32_t *)0xE000E108))
#define NVIC_EN3             (*((volatile uint32_t *)0xE000E10C))
#define NVIC_EN4              (*((volatile uint32_t *)0xE000E110))
#define NVIC_DIS0             (*((volatile uint32_t *)0xE000E180))
#define NVIC_DIS1            (*((volatile uint32_t *)0xE000E184))
#define NVIC_DIS2             (*((volatile uint32_t *)0xE000E188))
#define NVIC_DIS3             (*((volatile uint32_t *)0xE000E18C))
#define NVIC_DIS4            (*((volatile uint32_t *)0xE000E190))
/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/




#endif  /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/

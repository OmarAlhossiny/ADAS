
/**
 ******************************************************************************
 * @file           : Cortex-M3_SCB.h
 * @author         : Omar_Alhossiny
 * @brief          : Control System control block
 ******************************************************************************
**/
#ifndef CORTEX_M3_SCB_H_
#define CORTEX_M3_SCB_H_

/**********************************Include section start***********************************/
#include <Common/std_types.h>
/**********************************Include section end*************************************/

/**********************************Macro declaration start*********************************/
#define SCB_BASE         0xE000ED00
#define SCB              ((SCB_Types *)(SCB_BASE))

#define SCB_AIRCR_VECTKEY_POS    16U
#define SCB_AIRCR_PRIGROUP_POS   8U

#define SCB_PriorityGroup0    0x00000007U   /* 0 Bits for Pre-imtion priority
                                               4 Bits for Subpriority */
#define SCB_PriorityGroup1    0x00000006U   /* 1 Bits for Pre-imtion priority
                                               3 Bits for Subpriority */
#define SCB_PriorityGroup2    0x00000005U   /* 2 Bits for Pre-imtion priority
                                               2 Bits for Subpriority */
#define SCB_PriorityGroup3    0x00000004U   /* 3 Bits for Pre-imtion priority
                                               1 Bits for Subpriority */
#define SCB_PriorityGroup4    0x00000003U   /* 4 Bits for Pre-imtion priority
                                               0 Bits for Subpriority */
/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/

/**********************************Macro function declaration end**************************/

/**********************************Data type declaration start*****************************/
typedef struct
{
	volatile uint_32 CPUID;     // offset-> 0x00 ,register contains the processor part number, version, and implementation information.
	volatile uint_32 ICSR;      // offset-> 0x04 ,Interrupt control and state register
	volatile uint_32 VTOR;      // offset-> 0x08 ,Vector table offset register
	volatile uint_32 AIRCR;     // offset-> 0x0C ,Application interrupt and reset control register
	volatile uint_32 SCR;       // offset-> 0x10 ,System control register
	volatile uint_32 CCR;       // offset-> 0x14 ,Configuration and control register
	volatile uint_32 SHPR1;     // offset-> 0x18 ,System handler priority registers 1
	volatile uint_32 SHPR2;     // offset-> 0x1C ,System handler priority registers 2
	volatile uint_32 SHPR3;     // offset-> 0x20 ,System handler priority registers 3
	volatile uint_32 SHCRS;     // offset-> 0x24 ,System handler control and state register
	volatile uint_32 CFSR;      // offset-> 0x28 ,Configurable fault status register
	volatile uint_32 HFSR;      // offset-> 0x2C ,Hard fault status register
	volatile uint_32 Reserved;  // offset-> 0x30 ,
	volatile uint_32 MMAR;      // offset-> 0x34 ,Memory management fault address register
	volatile uint_32 BFAR;      // offset-> 0x38 ,Bus fault address register
}SCB_Types;
/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/

/**
 * /brief     Set Priority Grouping
 * /Details   Set The Priority Grouping field using the Unlocking sequence
 * /param[in] PriorityGroup Priority Grouping field
 */
void SCB_SetPriorityGrouping(uint_32 PriorityGroup);

/**
 * /brief     Get Priority Grouping
 * /Details   Get The Priority Grouping value
 * /return    Priority Grouping value
 */
uint_32 SCB_GetPriorityGrouping(void);
/**********************************Software interface declaration end**********************/

#endif /* CORTEX_M3_SCB_H_ */

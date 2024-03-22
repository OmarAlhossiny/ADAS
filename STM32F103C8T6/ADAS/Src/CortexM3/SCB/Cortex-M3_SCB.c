
/**
 ******************************************************************************
 * @file           : Cortex-M3_SCB.c
 * @author         : Omar_Alhossiny
 * @brief          : Control System control block
 ******************************************************************************
**/

#include <CortexM3/SCB/Cortex-M3_SCB.h>

/**
 * /brief     Set Priority Grouping
 * /Details   Set The Priority Grouping field using the Unlocking sequence
 * /param[in] PriorityGroup Priority Grouping field
 */
void SCB_SetPriorityGrouping(uint_32 PriorityGroup)
{
	uint_32 PriorityGroupTemp = SCB->AIRCR;
	PriorityGroupTemp &= ~((0xFFFF << SCB_AIRCR_VECTKEY_POS) | (0x7 << SCB_AIRCR_PRIGROUP_POS));
	PriorityGroupTemp |= ((0x05FA << SCB_AIRCR_VECTKEY_POS) | (PriorityGroup << SCB_AIRCR_PRIGROUP_POS));
	SCB->AIRCR = PriorityGroupTemp;
}

/**
 * /brief     Get Priority Grouping
 * /Details   Get The Priority Grouping value
 * /return    Priority Grouping value
 */
uint_32 SCB_GetPriorityGrouping(void)
{
	return ((((uint_32)SCB->AIRCR) & (((uint_32)0x7) << SCB_AIRCR_PRIGROUP_POS)) >> SCB_AIRCR_PRIGROUP_POS);
}




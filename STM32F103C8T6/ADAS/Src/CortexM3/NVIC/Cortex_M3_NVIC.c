/**
 ******************************************************************************
 * @file           : Cortex_M3_NVIC.c
 * @author         : Omar_Alhossiny
 * @brief          : NVIC source file
 ******************************************************************************
**/

#include <CortexM3/NVIC/Cortex_M3_NVIC.h>


/**
 * /brief     Enable Interrupt
 * /Details   Enable specific devise Interrupt in the NVIC interrupt controller
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
void NVIC_Enable_IRQn(IRQn_Types IRQn)
{
	if((uint_32)IRQn >= 0)
	{
		NVIC->ISER[((uint_32)IRQn) >> 5] = (1 << (((uint_32)IRQn) & 0x1F));
	}
}

/**
 * /brief     Disable Interrupt
 * /Details   Disable specific devise Interrupt in the NVIC interrupt controller
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
void NVIC_Disable_IRQn(IRQn_Types IRQn)
{
	if((uint_32)IRQn >= 0)
	{
		NVIC->ICER[((uint_32)IRQn) >> 5] = (1 << (((uint_32)IRQn) & 0x1F));
	}
}

/**
 * /brief     Set pending Interrupt
 * /Details   Sets the pending of specific devise Interrupt in the NVIC pending register
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
void NVIC_SetPending_IRQn(IRQn_Types IRQn)
{
	if((uint_32)IRQn >= 0)
	{
		NVIC->ISPR[((uint_32)IRQn) >> 5] = (1 << (((uint_32)IRQn) & 0x1F));
	}
}

/**
 * /brief     Clear pending Interrupt
 * /Details   Clears the pending of specific devise Interrupt in the NVIC pending register
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
void NVIC_ClearPending_IRQn(IRQn_Types IRQn)
{
	if((uint_32)IRQn >= 0)
	{
		NVIC->ICPR[((uint_32)IRQn) >> 5] = (1 << (((uint_32)IRQn) & 0x1F));
	}
}

/**
 * /brief     Get active Interrupt
 * /Details   Read the active register in the NVIC and return the active bit of device specific Interrupt
 * /param[in] IRQn devise specific interrupt request number
 * /return 0  Interrupt states is not active
 * /return 1  Interrupt states is active
 * /note      IRQn must not be negative
 */
uint_32 NVIC_GetActive(IRQn_Types IRQn)
{
	if((uint_32)IRQn >= 0)
	{
		return (((NVIC->IABR[((uint_32)IRQn) >> 5]) & ((1 << (((uint_32)IRQn) & 0x1F)))) == 0 ? 0 : 1);
	}
	return 0;
}

/**
 * /brief     Set Interrupt Priority
 * /Details   Sets the Priority of specific devise Interrupt or a processor exception
 * /param[in] IRQn devise specific interrupt request number
 * /param[in] Priority priority to set
 */
void NVIC_SetPriority(uint_32 IRQ,uint_32 Priority)
{
	if(IRQ >= 0)
	{
		NVIC->IPR[(uint_32)IRQ] = ((uint_8)Priority << (8 - NVIC_PRIO_BITS));
	}
	else
	{
		/*No Thing*/
	}
}

/**
 * /brief     Get Interrupt Priority
 * /Details   Gets the Priority of specific devise Interrupt or a processor exception
 * /param[in] IRQn devise specific interrupt request number
 * /return    Interrupt Priority value
 */
uint_32 NVIC_GetPriority(uint_32 IRQ)
{
	if(IRQ >= 0)
	{
		return (NVIC->IPR[(uint_32)IRQ] >> (8 - NVIC_PRIO_BITS));
	}
	else
	{
		/*No Thing*/
	}
	return -1;
}

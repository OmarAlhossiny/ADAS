/**
 ******************************************************************************
 * @file           : rcc.c
 * @author         : Omar_Alhossiny
 * @brief          : RCC driver implementation
 ******************************************************************************
**/

#include <HAL/RCC/rcc.h>

static volatile uint_8 Clock_Val = 0;


/**
 * /brief     RCC initialize
 * /Details   Initialize System clock
 * /param[in] config pointer to system clock configuration
 * /return    HAL_OK       ->   System clock successfully Initialized
 *            HAL_NOT_OK   ->   System clock Initialization failed
 */
Std_Return_t RCC_SysClock_Init(RCC_CFGR* config)
{
	Std_Return_t RET = HAL_OK;
	if(NULL == config)
	{
		RET = HAL_NOT_OK;
	}
	else
	{
		MODIFY_REG(RCC->CFGR,RCC_ADC_PRESCALER_MASK,config->ADCPRE);
		MODIFY_REG(RCC->CFGR,RCC_AHB_PRESCALER_MASK,config->HPRE);
		MODIFY_REG(RCC->CFGR,RCC_MICROCONTROLLER_CLOCK_OUT_MASK,config->MCO);
		MODIFY_REG(RCC->CFGR,RCC_PLL_MUL_MASK,config->PLLMUL);
		MODIFY_REG(RCC->CFGR,RCC_APB_LOW_SPEED_PRESCALER_APB1_MASK,config->PPRE1);
		MODIFY_REG(RCC->CFGR,RCC_APB_HIGH_SPEED_PRESCALER_APB2_MASK,config->PPRE2);

		if(config->SW == RCC_SYSTEM_CLOCK_SWITCH_HSI)
		{
			Clock_Val = 8;
			RCC_HSI_CLOCK_ENABLE();
			while(RCC_HSI_READ_READY_FLAG() == RCC_HSI_READY_FLAG_CLEAR);
		}
		else if(config->SW == RCC_SYSTEM_CLOCK_SWITCH_HSE)
		{
			Clock_Val = 8;
			RCC_HSE_CLOCK_ENABLE();
			while(RCC_HSE_READ_READY_FLAG() == RCC_HSE_READY_FLAG_CLEAR);
		}
		else if(config->SW == RCC_SYSTEM_CLOCK_SWITCH_PLL)
		{
			if(config->PLLSRC == RCC_PLL_SOURCE_HSI)
			{
				Clock_Val = 4;
				RCC_HSI_CLOCK_ENABLE();
				while(RCC_HSI_READ_READY_FLAG() == RCC_HSI_READY_FLAG_CLEAR);
				RCC_PLL_ENTRY_SOURCE_HSI();
			}
			else if(config->PLLSRC == RCC_PLL_SOURCE_HSE)
			{
				if(config->PLLXTPRE == RCC_HSE_NOT_DIVIDED)
				{
					Clock_Val = 8;
					RCC_HSE_CLOCK_NOT_DIVIDED();
				}
				else if(config->PLLXTPRE == RCC_HSE_DIVIDED_BY2)
				{
					Clock_Val = 4;
					RCC_HSE_CLOCK_DIVIDED_BY2();
				}
				else
				{
					return HAL_NOT_OK;
				}
				RCC_HSE_CLOCK_ENABLE();
				while(RCC_HSE_READ_READY_FLAG() == RCC_HSE_READY_FLAG_CLEAR);
				RCC_PLL_ENTRY_SOURCE_HSE();
			}
			else
			{
				return HAL_NOT_OK;
			}
			Clock_Val *= ((config->PLLMUL >> RCC_PLL_MUL_POS) + 2);
			RCC_PLL_CLOCK_ENABLE();
			while(RCC_PLL_READ_READY_FLAG() == RCC_PLL_READY_FLAG_CLEAR);
		}
		else
		{
			return HAL_NOT_OK;
		}
		if(Clock_Val > 0 && Clock_Val <= 24)
		{
			MODIFY_REG(*FLASH_ACR,FLASH_ACR_LATENCY_MASK,FLASH_ACR_LATENCY_ZERO_WAIT_STATE);
		}
		else if(Clock_Val > 24 && Clock_Val <= 48)
		{
			MODIFY_REG(*FLASH_ACR,FLASH_ACR_LATENCY_MASK,FLASH_ACR_LATENCY_ONE_WAIT_STATE);
		}
		else if(Clock_Val > 48 && Clock_Val <= 72)
		{
			MODIFY_REG(*FLASH_ACR,FLASH_ACR_LATENCY_MASK,FLASH_ACR_LATENCY_TWO_WAIT_STATE);
		}
		else
		{
			return HAL_NOT_OK;
		}
		MODIFY_REG(RCC->CFGR,RCC_SYSTEM_CLOCK_SWITCH_MASK,config->SW);
	}
	return RET;
}



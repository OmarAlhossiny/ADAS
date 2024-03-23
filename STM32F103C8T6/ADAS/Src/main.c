/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Omar_Alhossiny
 * @brief          : Main program body
 ******************************************************************************
**/

#include <main.h>

void Callback(void);

Std_Return_t RET = HAL_OK;

uint_8 ret;
volatile uint_32 num = 0;
uint_32 remaining;

RCC_CFGR config =
{
	.SW = RCC_SYSTEM_CLOCK_SWITCH_PLL,
	.HPRE = RCC_AHB_PRESCALER_DIV1,
	.PPRE1 = RCC_APB_LOW_SPEED_PRESCALER_APB1_DIV4,
	.PPRE2 = RCC_APB_HIGH_SPEED_PRESCALER_APB2_DIV1,
	.PLLSRC = RCC_PLL_SOURCE_HSE,
	.PLLXTPRE = RCC_HSE_NOT_DIVIDED,
	.PLLMUL = RCC_PLL_MULTIPLICATION_FACTOR_9,
	.ADCPRE = RCC_ADC_PRESCALER_DIV8
};

int main(void)
{
    RET = RCC_SysClock_Init(&config);
    ret = SysTick_Init(8999999);
    SysTick_PeriodicInterval(8999999,Callback);

	while(1)
	{
		remaining = SysTick_GetRemainingTicks();
	}
	return 0;
}

void Callback(void)
{
	num++;
}



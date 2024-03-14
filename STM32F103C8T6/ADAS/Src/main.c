/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Omar_Alhossiny
 * @brief          : Main program body
 ******************************************************************************
**/

#include <main.h>

Std_Return_t RET = HAL_OK;

GPIO_Config Config =
{
		.port = PORTB,
		.pin = PIN15,
		.logic = GPIO_LOW,
		.mode = GPIO_MODE_OUTPUT_PUSH_PULL_SPEED_50MHZ
};

RCC_CFGR config =
{
	.SW = RCC_SYSTEM_CLOCK_SWITCH_PLL,
	.HPRE = RCC_AHB_PRESCALER_DIV1,
	.PPRE1 = RCC_APB_LOW_SPEED_PRESCALER_APB1_DIV4,
	.PPRE2 = RCC_APB_HIGH_SPEED_PRESCALER_APB2_DIV1,
	.PLLSRC = RCC_PLL_SOURCE_HSI,
	.PLLXTPRE = RCC_HSE_NOT_DIVIDED,
	.PLLMUL = RCC_PLL_MULTIPLICATION_FACTOR_8
};

int main(void)
{
	RET = RCC_SysClock_Init(&config);
	RET = GPIO_Pin_Direction_Initialize(&Config);


	while(1)
	{
		RET = GPIO_Pin_Write_logic(&Config,GPIO_HIGH);
		for(int u = 0;u < 2000000;u++)
			asm("nop");
		RET = GPIO_Pin_Write_logic(&Config,GPIO_LOW);
		for(int u = 0;u < 2000000;u++)
					asm("nop");
	}
	return 0;
}



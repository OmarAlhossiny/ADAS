/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Omar_Alhossiny
 * @brief          : Main program body
 ******************************************************************************
**/

#include <main.h>

Std_Return_t RET = OK;

GPIO_Config config = {
		.mode  = GPIO_MODE_OUTPUT_PUSH_PULL_SPEED_2MHZ,
		.logic = GPIO_LOW,
		.pin = 1,
		.port = PORTB
};

int main(void)
{
	uint_32 data = PORTA_BASE->ODR;
	data += 2;
	PORTA_BASE->ODR = data;
	RET = GPIO_Pin_Direction_Initialize(&config);


	while(1)
	{
		RET = GPIO_Pin_Write_logic(&config,GPIO_HIGH);

		RET = GPIO_Pin_Write_logic(&config,GPIO_LOW);
	}
}


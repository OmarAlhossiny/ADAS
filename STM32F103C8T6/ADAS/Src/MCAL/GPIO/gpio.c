/**
 ******************************************************************************
 * @file           : GPIO.c
 * @author         : Omar_Alhossiny
 * @brief          : GPIO implementation
 ******************************************************************************
**/

#include <MCAL/GPIO/gpio.h>

volatile GPIO_Types* GPIO[7] = {PORTA_BASE,PORTB_BASE,PORTC_BASE,PORTD_BASE,PORTE_BASE,PORTF_BASE,PORTG_BASE};



/**
 * /brief     GPIO Pin initialize
 * /Details   Initialize GPIO Pin direction and Mode
 * /param[in] config pointer to GPIO pin configuration
 * /return    OK       ->   GPIO pin successfully Initialized
 *            NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Direction_Initialize(const GPIO_Config* config)
{
	Std_Return_t RET = OK;
	uint_32 mode_temp;
	uint_32 mask = 0x0000000FUL;
	uint_32 port_register;
	if(config == NULL)
	{
		RET = NOT_OK;
	}
	else
	{
		port_register = GPIO[config->port]->CR[config->pin / 8];
		mode_temp = config->mode;
		mode_temp <<= ((config->pin % 8) * 4);
		mask = ~(mask << ((config->pin % 8) * 4));
		port_register &= mask;
		port_register |= mode_temp;
		GPIO[config->port]->CR[config->pin / 8] = port_register;
		if(config->mode == GPIO_MODE_INPUT_PULL_UP_DOWN)
		{
			if(config->state == PULL_DOWN)
			{
				RET = GPIO_Pin_Write_logic(config,GPIO_LOW);
			}
			else if(config->state == PULL_UP)
			{
				RET = GPIO_Pin_Write_logic(config,GPIO_HIGH);
			}
			else
			{
				RET = NOT_OK;
			}
		}

	}
	return RET;
}

/**
 * /brief     GPIO Pin Get MODE
 * /Details   Get the mode of the GPIO Pin
 * /param[in] config pointer to GPIO pin configuration
 * /param[in] mode pointer to store mode value
 * /return    OK       ->   GPIO pin successfully Initialized
 *            NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Get_Mode(const GPIO_Config* config,uint_32* mode)
{
	Std_Return_t RET = OK;
	uint_32 mode_temp;
	uint_32 mask = 0x0000000FUL;
	if((config == NULL) || (mode == NULL))
	{
		RET = NOT_OK;
	}
	else
	{
		mode_temp = GPIO[config->port]->CR[config->pin / 8];
		mask = (mask << ((config->pin % 8) * 4));
		mode_temp &= mask;
		*mode = (mode_temp >> ((config->pin % 8) * 4));
	}
	return RET;
}

/**
 * /brief     GPIO Pin Write logic
 * /Details   Write 0 or 1 on the GPIO Pin
 * /param[in] config pointer to GPIO pin configuration
 * /param[in] logic variable to store the desired logic
 * /return    OK       ->   GPIO pin successfully Initialized
 *            NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Write_logic(const GPIO_Config* config,PIN_LOGIC logic)
{
	Std_Return_t RET = OK;
	uint_32 logic_temp = 0x00000001UL;
	if(config == NULL)
	{
		RET = NOT_OK;
	}
	else
	{
		if(logic == GPIO_LOW)
		{
			logic_temp <<= (16 + config->pin);
			GPIO[config->port]->BSRR |= logic_temp;
		}
		else if(logic == GPIO_HIGH)
		{
			logic_temp <<= (config->pin);
			GPIO[config->port]->BSRR |= logic_temp;
		}
		else
		{
			RET = NOT_OK;
		}
	}
	return RET;
}

/**
 * /brief     GPIO Pin Read logic
 * /Details   Read 0 or 1 From the GPIO Pin
 * /param[in] config pointer to GPIO pin configuration
 * /param[in] logic pointer to store pin logic value
 * /return    OK       ->   GPIO pin successfully Initialized
 *            NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Read_logic(const GPIO_Config* config,PIN_LOGIC* logic)
{
	Std_Return_t RET = OK;
	uint_32 logic_temp = 0x00000001UL;
	if((config == NULL) || (logic == NULL))
	{
		RET = NOT_OK;
	}
	else
	{
		logic_temp <<= (config->pin);
		logic_temp &= (GPIO[config->port]->IDR);
		if(logic_temp > 0)
		{
			*logic = GPIO_HIGH;
		}
		else
		{
			*logic = GPIO_LOW;
		}
	}
	return RET;
}

/**
 * /brief     GPIO Pin Toggle logic
 * /Details   Toggle GPIO Pin logic
 * /param[in] config pointer to GPIO pin configuration
 * /return    OK       ->   GPIO pin successfully Initialized
 *            NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Toggle_logic(const GPIO_Config* config)
{
	Std_Return_t RET = OK;
	if(config == NULL)
	{
		RET = NOT_OK;
	}
	else
	{
		PIN_LOGIC state;
		RET = GPIO_Pin_Read_logic(config,&state);
		if(state == GPIO_HIGH)
		{
			RET = GPIO_Pin_Write_logic(config,GPIO_LOW);
		}
		else if(state == GPIO_LOW)
		{
			RET = GPIO_Pin_Write_logic(config,GPIO_HIGH);
		}
		else
		{
			RET = NOT_OK;
		}
	}
	return RET;
}
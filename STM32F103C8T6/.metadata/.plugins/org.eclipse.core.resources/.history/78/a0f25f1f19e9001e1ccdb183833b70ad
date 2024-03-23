/**
 ******************************************************************************
 * @file           : GPIO.h
 * @author         : Omar_Alhossiny
 * @brief          : GPIO file interface
 ******************************************************************************
**/

#ifndef MCAL_GPIO_H_
#define MCAL_GPIO_H_

/**********************************Include section start***********************************/
#include <Common/std_types.h>
#include <Common/STM32F10xxx_Peripheral_Defs.h>
#include <Common/STM32F10xxx_HAL_Def.h>
#include <MCAL/RCC/rcc.h>
/**********************************Include section end*************************************/

/**********************************Macro declaration start*********************************/




#define GPIO_MODE_INPUT_ANALOG                               0x00000000UL
#define GPIO_MODE_INPUT_FLOATING                             0x00000004UL
#define GPIO_MODE_INPUT_PULL_UP_DOWN                         0x00000008UL



#define GPIO_MODE_OUTPUT_PUSH_PULL_SPEED_10MHZ               0x00000001UL
#define GPIO_MODE_OUTPUT_OPEN_DRAIN_SPEED_10MHZ              0x00000005UL
#define GPIO_MODE_ALTERNATE_OUTPUT_PUSH_PULL_SPEED_10MHZ     0x00000009UL
#define GPIO_MODE_ALTERNATE_OUTPUT_OPEN_DRAIN_SPEED_10MHZ    0x0000000DUL


#define GPIO_MODE_OUTPUT_PUSH_PULL_SPEED_2MHZ                0x00000002UL
#define GPIO_MODE_OUTPUT_OPEN_DRAIN_SPEED_2MHZ               0x00000006UL
#define GPIO_MODE_ALTERNATE_OUTPUT_PUSH_PULL_SPEED_2MHZ      0x0000000AUL
#define GPIO_MODE_ALTERNATE_OUTPUT_OPEN_DRAIN_SPEED_2MHZ     0x0000000EUL


#define GPIO_MODE_OUTPUT_PUSH_PULL_SPEED_50MHZ               0x00000003UL
#define GPIO_MODE_OUTPUT_OPEN_DRAIN_SPEED_50MHZ              0x00000007UL
#define GPIO_MODE_ALTERNATE_OUTPUT_PUSH_PULL_SPEED_50MHZ     0x0000000BUL
#define GPIO_MODE_ALTERNATE_OUTPUT_OPEN_DRAIN_SPEED_50MHZ    0x0000000FUL

/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/

/**********************************Macro function declaration end**************************/

/**********************************Data type declaration start*****************************/
typedef enum
{
	PORTA = 0,
	PORTB,
	PORTC,
	PORTD,
	PORTE,
	PORTF,
	PORTG
}PORT_INDEX;

typedef enum
{
	PIN0 = 0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
	PIN8,
	PIN9,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15
}PIN_INDEX;

typedef enum
{
	GPIO_LOW = 0,
	GPIO_HIGH
}PIN_LOGIC;

typedef enum
{
	PULL_DOWN = 0,
	PULL_UP
}PULL_UP_DOWN;

typedef struct
{
	uint_32      mode;
	PORT_INDEX   port;
	PIN_INDEX    pin;
	PIN_LOGIC    logic;
	PULL_UP_DOWN state;
}GPIO_Config;

/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/

/**
 * /brief     GPIO Pin initialize
 * /Details   Initialize GPIO Pin direction and Mode
 * /param[in] config pointer to GPIO pin configuration
 * /return    HAL_OK       ->   GPIO pin successfully Initialized
 *            HAL_NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Direction_Initialize(const GPIO_Config* config);

/**
 * /brief     GPIO Pin Get MODE
 * /Details   Get the mode of the GPIO Pin
 * /param[in] config pointer to GPIO pin configuration
 * /param[in] mode pointer to store mode value
 * /return    HAL_OK       ->   GPIO pin successfully Initialized
 *            HAL_NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Get_Mode(const GPIO_Config* config,uint_32* mode);

/**
 * /brief     GPIO Pin Write logic
 * /Details   Write 0 or 1 on the GPIO Pin
 * /param[in] config pointer to GPIO pin configuration
 * /param[in] logic variable to store the desired logic
 * /return    HAL_OK       ->   GPIO pin successfully Initialized
 *            HAL_NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Write_logic(const GPIO_Config* config,PIN_LOGIC logic);

/**
 * /brief     GPIO Pin Read logic
 * /Details   Read 0 or 1 From the GPIO Pin
 * /param[in] config pointer to GPIO pin configuration
 * /param[in] logic pointer to store pin logic value
 * /return    OK       ->   GPIO pin successfully Initialized
 *            NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Read_logic(const GPIO_Config* config,PIN_LOGIC* logic);

/**
 * /brief     GPIO Pin Toggle logic
 * /Details   Toggle GPIO Pin logic
 * /param[in] config pointer to GPIO pin configuration
 * /return    HAL_OK       ->   GPIO pin successfully Initialized
 *            HAL_NOT_OK   ->   GPIO pin Initialization failed
 */
Std_Return_t GPIO_Pin_Toggle_logic(const GPIO_Config* config);

/**********************************Software interface declaration end**********************/

#endif /* MCAL_GPIO_H_ */

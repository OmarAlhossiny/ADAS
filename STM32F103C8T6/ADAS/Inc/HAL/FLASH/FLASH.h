/**
 ******************************************************************************
 * @file           : FLASH.h
 * @author         : Omar_Alhossiny
 * @brief          : Flash memory driver header interface file
 ******************************************************************************
**/

#ifndef HAL_FLASH_FLASH_H_
#define HAL_FLASH_FLASH_H_



/**********************************Include section start***********************************/
#include <Common/std_types.h>
#include <Common/STM32F10xxx_Peripheral_Defs.h>
#include <Common/STM32F10xxx_HAL_Def.h>
/**********************************Include section end*************************************/

/**********************************Macro declaration start*********************************/
#define FLASH_ACR_LATENCY_ZERO_WAIT_STATE        0x00000000UL      // if 0 < SYSCLK <= 24 MHz
#define FLASH_ACR_LATENCY_ONE_WAIT_STATE         0x00000001UL      // if 24 MHz < SYSCLK <= 48 MHz
#define FLASH_ACR_LATENCY_TWO_WAIT_STATE         0x00000002UL      // 48 MHz < SYSCLK <= 72 MHz
/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/

/**********************************Macro function declaration end**************************/

/**********************************Data type declaration start*****************************/

/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/

/**********************************Software interface declaration end**********************/

#endif /* HAL_FLASH_FLASH_H_ */

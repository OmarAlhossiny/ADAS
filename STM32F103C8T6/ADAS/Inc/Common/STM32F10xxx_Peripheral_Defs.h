/**
 ******************************************************************************
 * @file           : STM32F10xxx_Peripheral_Defs.h
 * @author         : Omar Alhossiny
 * @brief          : STM32F10xxx register definition file
 ******************************************************************************
**/

#ifndef COMMON_STM32F10XXX_PERIPHERAL_DEFS_H_
#define COMMON_STM32F10XXX_PERIPHERAL_DEFS_H_

/**********************************Include section start***********************************/
#include <Common/std_types.h>
/**********************************Include section end*************************************/

/**********************************Macro declaration start*********************************/

/**************************************RCC***************************************/
#define RCC_BASE                            				 0x40021000
#define RCC                                 				 ((RCC_Types *)RCC_BASE)

#define RCC_PLL_MUL_POS                     				 0x12UL
#define RCC_PLL_MUL_MASK                    				 0x003C0000UL

#define RCC_MICROCONTROLLER_CLOCK_OUT_POS   				 0x18UL
#define RCC_MICROCONTROLLER_CLOCK_OUT_MASK  				 0x07000000UL

#define RCC_ADC_PRESCALER_POS               				 0xEUL
#define RCC_ADC_PRESCALER_MASK               				 0x0000C000UL

#define RCC_APB_HIGH_SPEED_PRESCALER_APB2_POS                0xBUL
#define RCC_APB_HIGH_SPEED_PRESCALER_APB2_MASK               0x00003800UL

#define RCC_APB_LOW_SPEED_PRESCALER_APB1_POS                 0x8UL
#define RCC_APB_LOW_SPEED_PRESCALER_APB1_MASK                0x00000700UL

#define RCC_AHB_PRESCALER_POS                				 0x4UL
#define RCC_AHB_PRESCALER_MASK               				 0x000000F0UL

#define RCC_SYSTEM_CLOCK_SWITCH_POS                			 0x0UL
#define RCC_SYSTEM_CLOCK_SWITCH_MASK               			 0x00000003UL

#define RCC_SYSTEM_CLOCK_SWITCH_STATUS_POS                	 0x2UL
#define RCC_SYSTEM_CLOCK_SWITCH_STATUS_MASK        			 0x0000000CUL

#define RCC_HSE_DIVIDER_FOR_PLL_ENTRY_POS                    0x11UL
#define RCC_PLL_ENTRY_SOURCE_HSI_POS                         0X10UL


#define RCC_CR_PLL_ENABLE_POS                                0x18UL
#define RCC_CR_PLL_CLOCK_READY_FLAG_POS                      0x19UL
#define RCC_CR_PLL_CLOCK_READY_FLAG_MASK        			 0x02000000UL

#define RCC_CR_HSE_CLOCK_ENABLE_POS                          0x10UL

#define RCC_CR_HSE_CLOCK_READY_FLAG_POS                      0x11UL
#define RCC_CR_HSE_CLOCK_READY_FLAG_MASK        			 0x00020000UL

#define RCC_HSE_CLOCK_BYPASS_POS                             0x12UL

#define RCC_CR_HSE_CLOCK_ENABLE_POS                          0x10UL

#define RCC_CR_HSI_CLOCK_ENABLE_POS                          0x00000000UL

#define RCC_CR_HSI_CLOCK_READY_FLAG_POS                      0x00000001UL
#define RCC_CR_HSI_CLOCK_READY_FLAG_MASK        			 0x00000002UL




/***************************AHB peripheral clock enable register***************************/
#define RCC_AHB_DMA1_CLOCK_POS                               0x00000000UL
#define RCC_AHB_DMA2_CLOCK_POS                               0x00000001UL
#define RCC_AHB_SRAM_CLOCK_POS                               0x00000002UL
#define RCC_AHB_FLITF_CLOCK_POS                              0x00000004UL
#define RCC_AHB_CRCE_CLOCK_POS                               0x00000006UL
#define RCC_AHB_FSMC_CLOCK_POS                               0x00000008UL
#define RCC_AHB_SDIO_CLOCK_POS                               0x0000000AUL

/***************************APB2 peripheral clock enable register***************************/
#define RCC_APB2_AFIO_CLOCK_POS                              0x00000000UL
#define RCC_APB2_IOPA_CLOCK_POS                              0x00000002UL
#define RCC_APB2_IOPB_CLOCK_POS                              0x00000003UL
#define RCC_APB2_IOPC_CLOCK_POS                              0x00000004UL
#define RCC_APB2_IOPD_CLOCK_POS                              0x00000005UL
#define RCC_APB2_IOPE_CLOCK_POS                              0x00000006UL
#define RCC_APB2_IOPF_CLOCK_POS                              0x00000007UL
#define RCC_APB2_IOPG_CLOCK_POS                              0x00000008UL
#define RCC_APB2_ADC1_CLOCK_POS                              0x00000009UL
#define RCC_APB2_ADC2_CLOCK_POS                              0x0000000AUL
#define RCC_APB2_TIM1_CLOCK_POS                              0x0000000BUL
#define RCC_APB2_SPI1_CLOCK_POS                              0x0000000CUL
#define RCC_APB2_TIM8_CLOCK_POS                              0x0000000DUL
#define RCC_APB2_USART1_CLOCK_POS                            0x0000000EUL
#define RCC_APB2_ADC3_CLOCK_POS                              0x0000000FUL
#define RCC_APB2_TIM9_CLOCK_POS                              0x00000013UL
#define RCC_APB2_TIM10_CLOCK_POS                             0x00000014UL
#define RCC_APB2_TIM11_CLOCK_POS                             0x00000015UL

/***************************APB1 peripheral clock enable register***************************/
#define RCC_APB1_TIM2_CLOCK_POS                              0x00000000UL
#define RCC_APB1_TIM3_CLOCK_POS                              0x00000001UL
#define RCC_APB1_TIM4_CLOCK_POS                              0x00000002UL
#define RCC_APB1_TIM5_CLOCK_POS                              0x00000003UL
#define RCC_APB1_TIM6_CLOCK_POS                              0x00000004UL
#define RCC_APB1_TIM7_CLOCK_POS                              0x00000005UL
#define RCC_APB1_TIM12_CLOCK_POS                             0x00000006UL
#define RCC_APB1_TIM13_CLOCK_POS                             0x00000007UL
#define RCC_APB1_TIM14_CLOCK_POS                             0x00000008UL
#define RCC_APB1_WWD_CLOCK_POS                               0x0000000BUL
#define RCC_APB1_SPI2_CLOCK_POS                              0x0000000EUL
#define RCC_APB1_SPI3_CLOCK_POS                              0x0000000FUL
#define RCC_APB1_USART2_CLOCK_POS                            0x00000011UL
#define RCC_APB1_USART3_CLOCK_POS                            0x00000012UL
#define RCC_APB1_USART4_CLOCK_POS                            0x00000013UL
#define RCC_APB1_USART5_CLOCK_POS                            0x00000014UL
#define RCC_APB1_I2C1_CLOCK_POS                              0x00000015UL
#define RCC_APB1_I2C2_CLOCK_POS                              0x00000016UL
#define RCC_APB1_USB_CLOCK_POS                               0x00000017UL
#define RCC_APB1_CAN_CLOCK_POS                               0x00000019UL
#define RCC_APB1_BKP_CLOCK_POS                               0x0000001BUL
#define RCC_APB1_PWR_CLOCK_POS                               0x0000001CUL
#define RCC_APB1_DAC_CLOCK_POS                               0x0000000DUL


/******************************************GPIO********************************************/
#define PORTA_BASE    ((GPIO_Types*)0x40010800)
#define PORTB_BASE    ((GPIO_Types*)0x40010C00)
#define PORTC_BASE    ((GPIO_Types*)0x40011000)
#define PORTD_BASE    ((GPIO_Types*)0x40011400)
#define PORTE_BASE    ((GPIO_Types*)0x40011800)
#define PORTF_BASE    ((GPIO_Types*)0x40011C00)
#define PORTG_BASE    ((GPIO_Types*)0x40012000)

/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/

/**********************************Macro function declaration end**************************/

/**********************************Data type declaration start*****************************/


/**************************************RCC***************************************/
typedef struct
{
	uint_32 CR;          // offset-> 0x00, Clock control register
	uint_32 CFGR;        // offset-> 0x04,Clock configuration register
	uint_32 CIR;         // offset-> 0x08,Clock interrupt register
	uint_32 APB2RSTR;    // offset-> 0x0C,APB2 peripheral reset register
	uint_32 APB1RSTR;    // offset-> 0x10,APB1 peripheral reset register
	uint_32 AHBENR;      // offset-> 0x14,AHB peripheral clock enable register
	uint_32 APB2ENR;     // offset-> 0x18,Clock configuration register
	uint_32 APB1ENR;     // offset-> 0x1C,APB1 peripheral clock enable register
	uint_32 BDCR;        // offset-> 0x20,Backup domain control register
	uint_32 CSR;         // offset-> 0x24,Control/status register
}RCC_Types;

/******************************************GPIO********************************************/
typedef struct
{
	volatile uint_32 CR[2];          // offset->0x00, Port configuration register low
	                                 // offset->0x04, Port configuration register high
	volatile uint_32 IDR;            // offset->0x08, Port input data register
	volatile uint_32 ODR;            // offset->0x0c, Port output data register
	volatile uint_32 BSRR;           // offset->0x10, Port bit set/reset register
	volatile uint_32 BRR;            // offset->0x14, Port bit reset register
	volatile uint_32 LCKR;           // offset->0x18, Port configuration lock register
	volatile uint_32 reserved[249];
}GPIO_Types;


/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/

/**********************************Software interface declaration end**********************/

#endif /* COMMON_STM32F10XXX_PERIPHERAL_DEFS_H_ */

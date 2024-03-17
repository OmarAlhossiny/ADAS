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

/*****************************************TIMER***************************************/

#define TIMER2_BASE     ((TIMER_Types*)0x40000000)
#define TIMER3_BASE     ((TIMER_Types*)0x40000400)
#define TIMER4_BASE     ((TIMER_Types*)0x40000800)
#define TIMER5_BASE     ((TIMER_Types*)0x40000C00)

#define TIMER                                 				 ((TIMER_Types *)TIMER2_BASE)
			/**************TIMx control register 1 (TIMx_CR1) Positions******/
#define TIMER_CR1_CEN_POS                               0x00000000UL
#define TIMER_CR1_UDIS_POS                              0x00000001UL
#define TIMER_CR1_URS_POS                               0x00000002UL
#define TIMER_CR1_OPM_POS                               0x00000003UL
#define TIMER_CR1_DIR_POS                               0x00000004UL
#define TIMER_CR1_ARPE_POS                              0x00000007UL
			/**************TIMx control register 2 (TIMx_CR2) Positions******/
#define TIMER_CR2_CCDS_POS                              0x00000003UL
#define TIMER_CR2_TI1S_POS                              0x00000007UL
			/**************TIMx slave mode control register (TIMx_SMCR) Positions******/
#define TIMER_SMCR_MSM_POS                              0x00000007UL
#define TIMER_SMCR_ECE_POS                              0x0000000EUL
#define TIMER_SMCR_ETP_POS                              0x0000000FUL
			/**************TIMx DMA/Interrupt enable register (TIMx_DIER) Positions******/
#define TIMER_DIER_UIE_POS                                 0x00000000UL
#define TIMER_DIER_CC1IE_POS                               0x00000001UL
#define TIMER_DIER_CC2IE_POS                               0x00000002UL
#define TIMER_DIER_CC3IE_POS                               0x00000003UL
#define TIMER_DIER_CC4IE_POS                               0x00000004UL
#define TIMER_DIER_TIE_POS                                 0x00000006UL
#define TIMER_DIER_UDE_POS                                 0x00000008UL
#define TIMER_DIER_CC1DE_POS                               0x00000009UL
#define TIMER_DIER_CC2DE_POS                               0x0000000AUL
#define TIMER_DIER_CC3DE_POS                               0x0000000BUL
#define TIMER_DIER_CC4DE_POS                               0x0000000CUL
#define TIMER_DIER_TDE_POS                                 0x0000000EUL
			/**************TIMx status register (TIMx_SR) Positions******/
#define TIMER_SR_UIF_POS                                 0x00000000UL
#define TIMER_SR_CC1IF_POS                               0x00000001UL
#define TIMER_SR_CC2IF_POS                               0x00000002UL
#define TIMER_SR_CC3IF_POS                               0x00000003UL
#define TIMER_SR_CC4IF_POS                               0x00000004UL
#define TIMER_SR_TIF_POS                                 0x00000006UL
#define TIMER_SR_CC1OF_POS                               0x00000009UL
#define TIMER_SR_CC2OF_POS                               0x0000000AUL
#define TIMER_SR_CC3OF_POS                               0x0000000BUL
#define TIMER_SR_CC4OF_POS                               0x0000000CUL
			/**************TIMx event generation register (TIMx_EGR) Positions******/
#define TIMER_EGR_UG_POS                                 0x00000000UL
#define TIMER_EGR_CC1G_POS                               0x00000001UL
#define TIMER_EGR_CC2G_POS                               0x00000002UL
#define TIMER_EGR_CC3G_POS                               0x00000003UL
#define TIMER_EGR_CC4G_POS                               0x00000004UL
#define TIMER_EGR_TG_POS                                 0x00000006UL
			/**************TIMx capture/compare mode register 1 (TIMx_CCMR1) Positions******/
#define TIMER_CCMR1_OC1FE_POS                                 0x00000002UL
#define TIMER_CCMR1_OC1PE_POS                                 0x00000003UL
#define TIMER_CCMR1_OC1CE_POS                                 0x00000007UL
#define TIMER_CCMR1_OC2FE_POS                                 0x0000000AUL
#define TIMER_CCMR1_OC2PE_POS                                 0x0000000BUL
#define TIMER_CCMR1_OC2CE_POS                                 0x0000000FUL
			/**************TIMx capture/compare mode register 2 (TIMx_CCMR2) Positions******/
#define TIMER_CCMR2_OC3FE_POS                                 0x00000002UL
#define TIMER_CCMR2_OC3PE_POS                                 0x00000003UL
#define TIMER_CCMR2_OC3CE_POS                                 0x00000007UL
#define TIMER_CCMR2_OC4FE_POS                                 0x0000000AUL
#define TIMER_CCMR2_OC4PE_POS                                 0x0000000BUL
#define TIMER_CCMR2_OC4CE_POS                                 0x0000000FUL
			/**************TIMx capture/compare enable register (TIMx_CCER) Positions******/
#define TIMER_CCER_CC1E_POS                                   0x00000000UL
#define TIMER_CCER_CC1P_POS                                   0x00000001UL
#define TIMER_CCER_CC2E_POS                              	  0x00000004UL
#define TIMER_CCER_CC2P_POS                               	  0x00000005UL
#define TIMER_CCER_CC3E_POS                                   0x00000008UL
#define TIMER_CCER_CC3P_POS                                   0x00000009UL
#define TIMER_CCER_CC4E_POS                                   0x0000000CUL
#define TIMER_CCER_CC4P_POS                                   0x0000000DUL
					/**************Multi bit Positions and masks*************/
#define TIMER_CR1_CMS_POS                               	  0x00000005UL
#define TIMER_CR1_CMS_MASK                                    0x00000060UL
#define TIMER_CR1_CKD_POS                               	  0x00000008UL
#define TIMER_CR1_CKD_MASK                                    0x00000300UL

#define TIMER_CR2_MMS_POS                               	  0x00000004UL
#define TIMER_CR2_MMS_MASK                                    0x00000070UL

#define TIMER_SMCR_SMS_POS                               	  0x00000000UL
#define TIMER_SMCR_SMS_MASK                                   0x00000007UL
#define TIMER_SMCR_TS_POS                               	  0x00000004UL
#define TIMER_SMCR_TS_MASK                                    0x00000070UL
#define TIMER_SMCR_ETF_POS                               	  0x00000008UL
#define TIMER_SMCR_ETF_MASK                                   0x00000F00UL
#define TIMER_SMCR_ETPS_POS                               	  0x0000000CUL
#define TIMER_SMCR_ETPS_MASK                                  0x00003000UL

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

<<<<<<< HEAD
=======
/**************************************TIMER***************************************/
typedef struct
{
	uint_32 CR1;          // offset-> 0x00, TIMx control register 1
	uint_32 CR2;          // offset-> 0x04,TIMx control register 2
	uint_32 SMCR;         // offset-> 0x08,TIMx slave mode control register
	uint_32 DIER;       // offset-> 0x0C,TIMx DMA/Interrupt enable register
	uint_32 SR;         // offset-> 0x10,TIMx status register
	uint_32 EGR;        // offset-> 0x14,TIMx event generation register
	uint_32 CCMR1;       // offset-> 0x18,TIMx capture/compare mode register 1
	uint_32 CCMR2;       // offset-> 0x1C,TIMx capture/compare mode register 2
	uint_32 CCER;        // offset-> 0x20,TIMx capture/compare enable register
	uint_32 CNT;         // offset-> 0x24,TIMx counter
	uint_32 PSC;        // offset-> 0x28,TIMx prescaler
	uint_32 ARR;         // offset-> 0x2C,TIMx auto-reload register
	uint_32 Reserved_1;    // offset-> 0x30, Reserved_1
	uint_32 CCR1;          // offset-> 0x34,TIMx capture/compare register 1
	uint_32 CCR2;         // offset-> 0x38,TIMx capture/compare register 2
	uint_32 CCR3;       // offset-> 0x3C,TIMx capture/compare register 3
	uint_32 CCR4;         // offset-> 0x40,TIMx capture/compare register 4
	uint_32 Reserved_2;        // offset-> 0x44, Reserved_2
	uint_32 DCR;         // offset-> 0x48,TIMx DMA control register
	uint_32 DMAR;         // offset-> 0x4C,TIMx DMA address for full transfer
	uint_32 Reserved_2[236];
}TIMER_Types;

>>>>>>> 26b48be91b1395fd3c5a41f277341c10ca329a24

/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/

/**********************************Software interface declaration end**********************/

#endif /* COMMON_STM32F10XXX_PERIPHERAL_DEFS_H_ */

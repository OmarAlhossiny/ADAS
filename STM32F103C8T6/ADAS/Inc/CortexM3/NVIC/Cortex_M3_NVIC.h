
/**
 ******************************************************************************
 * @file           : Cortex_M3_NVIC.h
 * @author         : Omar_Alhossiny
 * @brief          : NVIC header file
 ******************************************************************************
**/



#ifndef CORTEXM3_CORTEX_M3_NVIC_H_
#define CORTEXM3_CORTEX_M3_NVIC_H_

/**********************************Include section start***********************************/
#include <Common/std_types.h>
/**********************************Include section end*************************************/

/**********************************Macro declaration start*********************************/
#define NVIC_START_ADDRESS 0xE000E100
#define NVIC ((NVIC_Type*)NVIC_START_ADDRESS)

#define NVIC_PRIO_BITS    4       // STM use 4 bits for priority level
/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/

/**********************************Macro function declaration end**************************/

/**********************************Data type declaration start*****************************/
typedef struct
{
	uint_32 ISER[8];                // R/W Interrupt Set-Enable Registers
	uint_32 reserved0[24];
	uint_32 ICER[8];                // R/W Interrupt Clear-Enable Registers
	uint_32 reserved1[24];
	uint_32 ISPR[8];                // R/W Interrupt Set-Pending Registers
	uint_32 reserved2[24];
	uint_32 ICPR[8];                // R/W Interrupt Clear-Pending Registers
	uint_32 reserved3[24];
	uint_32 IABR[8];                // RO Interrupt Active Bit Register
	uint_32 reserved4[56];
	uint_8  IPR[240];                 // R/W Interrupt Priority Register
}NVIC_Type;

typedef enum
{
	/*****************************Cortex-M3 Exceptions numbers************************************/
	Non_maskable_interrupt_IRQ = -14,       // 2 Non maskable interrupt
	Memory_management_IRQ      = -12,       // Memory management interrupt
	Bus_Fault_IRQ              = -11,       // Bus Fault interrupt
	Usage_Fault_IRQ            = -10,       // Usage Fault interrupt
	SVCall_IRQ                 = -5,        // System service call interrupt
	Debug_Monitor_IRQ          = -4,        // Debug Monitor interrupt
	PendSV_IRQ                 = -2,        // Pendable request for system service interrupt
	SysTick_IRQ                = -1,        // System tick timer interrupt

	/*****************************STM32 Specific Interrupt numbers********************************/
	WWDG_IRQ                   = 0,         // Window watchdog interrupt
	PVD_IRQ                    = 1,         // PVD through EXTI Line detection interrupt
	TAMPER_IRQ                 = 2,         // Tamper interrupt
	RTC_IRQ                    = 3,         // RTC global interrupt
	FLASH_IRQ                  = 4,         // Flash global interrupt
	RCC_IRQ                    = 5,         // RCC global interrupt
	EXTI0_IRQ                  = 6,         // EXTI Line0 interrupt
	EXTI1_IRQ                  = 7,         // EXTI Line1 interrupt
	EXTI2_IRQ                  = 8,         // EXTI Line2 interrupt
	EXTI3_IRQ                  = 9,         // EXTI Line3 interrupt
	EXTI4_IRQ                  = 10,        // EXTI Line4 interrupt
	DMA1_Channel1_IRQ          = 11,        // DMA1 Channel1 global interrupt
	DMA1_Channel2_IRQ          = 12,        // DMA1 Channel2 global interrupt
	DMA1_Channel3_IRQ          = 13,        // DMA1 Channel3 global interrupt
	DMA1_Channel4_IRQ          = 14,        // DMA1 Channel4 global interrupt
	DMA1_Channel5_IRQ          = 15,        // DMA1 Channel5 global interrupt
	DMA1_Channel6_IRQ          = 16,        // DMA1 Channel6 global interrupt
	DMA1_Channel7_IRQ          = 17,        // DMA1 Channel7 global interrupt
	ADC1_2_IRQ                 = 18,        // ADC1 and ADC2 global interrupt
	USB_HP_CAN_TX_IRQ          = 19,        // USB High Priority or CAN TX interrupts
	USB_LP_CAN_RX0_IRQ         = 20,        // USB Low Priority or CAN RX0 interrupts
	CAN_RX1_IRQ                = 21,        // CAN RX1 interrupt
	CAN_SCE_IRQ                = 22,        // CAN SCE interrupt
	EXTI9_5_IRQ                = 23,        // EXTI Line[9:5] interrupts
	TIM1_BRK_IRQ               = 24,        // TIM1 Break interrupt
	TIM1_UP_IRQ                = 25,        // TIM1 Update interrupt
	TIM1_TRG_COM_IRQ           = 26,        // TIM1 Trigger and Commutation interrupts
	TIM1_CC_IRQ                = 27,        // TIM1 Capture Compare interrupt
	TIM2_IRQ                   = 28,        // TIM2 global interrupt
	TIM3_IRQ                   = 29,        // TIM3 global interrupt
	TIM4_IRQ                   = 30,        // TIM4 global interrupt
	I2C1_EV_IRQ                = 31,        // I2C1 event interrupt
	I2C1_ER_IRQ                = 32,        // I2C1 error interrupt
	I2C2_EV_IRQ                = 33,        // I2C2 event interrupt
	I2C2_ER_IRQ                = 34,        // I2C2 error interrupt
	SPI1_IRQ                   = 35,        // SPI1 global interrupt
	SPI2_IRQ                   = 36,        // SPI2 global interrupt
	USART1_IRQ                 = 37,        // USART1 global interrupt
	USART2_IRQ                 = 38,        // USART2 global interrupt
	USART3_IRQ                 = 39,        // USART3 global interrupt
	EXTI15_10_IRQ              = 40,        // EXTI Line[15:10] interrupts
	RTCAlarm_IRQ               = 41,        // RTC alarm through EXTI line interrupt
	USBWakeup_IRQ              = 42,        // USB wakeup from suspend through EXTI line interrupt
	TIM8_BRK_IRQ               = 43,        // TIM8 Break interrupt
	TIM8_UP_IRQ                = 44,        // TIM8 Update interrupt
	TIM8_TRG_COM_IRQ           = 45,        // TIM8 Trigger and Commutation interrupts
	TIM8_CC_IRQ                = 46,        // TIM8 Capture Compare interrupt
	ADC3_IRQ                   = 47,        // ADC3 global interrupt
	FSMC_IRQ                   = 48,        // FSMC global interrupt
	SDIO_IRQ                   = 49,        // SDIO global interrupt
	TIM5_IRQ                   = 50,        // TIM5 global interrupt
	SPI3_IRQ                   = 51,        // SPI2 global interrupt
	USART4_IRQ                 = 52,        // USART4 global interrupt
	USART5_IRQ                 = 53,        // USART5 global interrupt
	TIM6_IRQ                   = 54,        // TIM6 global interrupt
	TIM7_IRQ                   = 55,        // TIM7 global interrupt
	DMA2_Channel1_IRQ          = 56,        // DMA2 Channel1 global interrupt
	DMA2_Channel2_IRQ          = 57,        // DMA2 Channel2 global interrupt
	DMA2_Channel3_IRQ          = 58,        // DMA2 Channel3 global interrupt
	DMA2_Channel4_5_IRQ        = 59,        // DMA2 Channel4 and DMA2 Channel5 global interrupts
}IRQn_Types;
/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/
/**
 * /brief     Enable Interrupt
 * /Details   Enable specific devise Interrupt in the NVIC interrupt controller
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
void NVIC_Enable_IRQn(IRQn_Types IRQn);

/**
 * /brief     Disable Interrupt
 * /Details   Disable specific devise Interrupt in the NVIC interrupt controller
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
void NVIC_Disable_IRQn(IRQn_Types IRQn);

/**
 * /brief     Set pending Interrupt
 * /Details   Sets the pending of specific devise Interrupt in the NVIC pending register
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
void NVIC_SetPending_IRQn(IRQn_Types IRQn);

/**
 * /brief     Clear pending Interrupt
 * /Details   Clears the pending of specific devise Interrupt in the NVIC pending register
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
void NVIC_ClearPending_IRQn(IRQn_Types IRQn);

/**
 * /brief     Get active Interrupt
 * /Details   Read the active register in the NVIC and return the active bit of device specific Interrupt
 * /param[in] IRQn devise specific interrupt request number
 * /note      IRQn must not be negative
 */
uint_32 NVIC_GetActive(IRQn_Types IRQn);

/**
 * /brief     Set Interrupt Priority
 * /Details   Sets the Priority of specific devise Interrupt or a processor exception
 * /param[in] IRQn devise specific interrupt request number
 * /param[in] Priority priority to set
 */
void NVIC_SetPriority(uint_32 IRQ,uint_32 Priority);

/**
 * /brief     Get Interrupt Priority
 * /Details   Gets the Priority of specific devise Interrupt or a processor exception
 * /param[in] IRQn devise specific interrupt request number
 * /return    Interrupt Priority value
 */
uint_32 NVIC_GetPriority(uint_32 IRQ);
/**********************************Software interface declaration end**********************/



#endif /* CORTEXM3_CORTEX_M3_NVIC_H_ */

/*
 * hal_tim2.h
 *
 *  Created on: Mar 22, 2024
 *      Author: Mohamed_Abdelwahab
 */

#ifndef MCAL_TIMER_HAL_TIM2_H_
#define MCAL_TIMER_HAL_TIM2_H_

/**********************************Include section start***********************************/
#include <Common/std_types.h>
#include <Common/STM32F10xxx_Peripheral_Defs.h>
#include <Common/STM32F10xxx_HAL_Def.h>
/**********************************Include section end*************************************/

/**********************************Macro declaration start*********************************/

									/**************TIMx control register 1 (TIMx_CR1*************/
// CKD: Clock division
#define TIMER2_CKD_DIV1 0x00 // tDTS = tCK_INT
#define TIMER2_CKD_DIV2 0x01 // tDTS = 2 * tCK_INT
#define TIMER2_CKD_DIV4 0x02 // tDTS = 4 * tCK_INT

// ARPE: Auto-reload preload enable
#define TIMER2_ARPE_DISABLE 0x00 // TIMER2_ARR register is not buffered
#define TIMER2_ARPE_ENABLE  0x01 // TIMER2_ARR register is buffered

// CMS: Center-aligned mode selection
#define TIMER2_CMS_EDGE_ALIGNED   0x00 // Edge-aligned mode
#define TIMER2_CMS_CENTER_ALIGNED1 0x01 // Center-aligned mode 1
#define TIMER2_CMS_CENTER_ALIGNED2 0x02 // Center-aligned mode 2
#define TIMER2_CMS_CENTER_ALIGNED3 0x03 // Center-aligned mode 3

// DIR: Direction
#define TIMER2_DIR_UP   0x00 // Counter used as upcounter
#define TIMER2_DIR_DOWN 0x01 // Counter used as downcounter

// OPM: One-pulse mode
#define TIMER2_OPM_DISABLE 0x00 // Counter is not stopped at update event
#define TIMER2_OPM_ENABLE  0x01 // Counter stops counting at the next update event

// URS: Update request source
#define TIMER2_URS_ALL     0x00 // Any of the following events generate an update interrupt or DMA request if enabled
#define TIMER2_URS_OVERFLOW_ONLY 0x01 // Only counter overflow/underflow generates an update interrupt or DMA request if enabled

// UDIS: Update disable
#define TIMER2_UDIS_ENABLE  0x00 // UEV enabled
#define TIMER2_UDIS_DISABLE 0x01 // UEV disabled

// CEN: Counter enable
#define TIMER2_CEN_DISABLE 0x00 // Counter disabled
#define TIMER2_CEN_ENABLE  0x01 // Counter enabled

								/**************TIMx control register 2 (TIMx_CR2) ******/
// TI1S: TI1 selection
#define TIMER2_TI1S_TI1_INPUT        0x00 // The TIMER2_CH1 pin is connected to TI1 input
#define TIMER2_TI1S_XOR_COMBINATION  0x01 // The TIMER2_CH1, CH2, and CH3 pins are connected to the TI1 input (XOR combination)

// MMS[2:0]: Master mode selection
#define TIMER2_MMS_RESET             0x00 // Reset - the UG bit from the TIMER2_EGR register is used as trigger output (TRGO)
#define TIMER2_MMS_ENABLE            0x01 // Enable - the Counter enable signal, CNT_EN, is used as trigger output (TRGO)
#define TIMER2_MMS_UPDATE            0x02 // Update - The update event is selected as trigger output (TRGO)
#define TIMER2_MMS_COMPARE_PULSE     0x03 // Compare Pulse - The trigger output sends a positive pulse when the CC1IF flag is to be set (TRGO)
#define TIMER2_MMS_COMPARE_OC1REF    0x04 // Compare - OC1REF signal is used as trigger output (TRGO)
#define TIMER2_MMS_COMPARE_OC2REF    0x05 // Compare - OC2REF signal is used as trigger output (TRGO)
#define TIMER2_MMS_COMPARE_OC3REF    0x06 // Compare - OC3REF signal is used as trigger output (TRGO)
#define TIMER2_MMS_COMPARE_OC4REF    0x07 // Compare - OC4REF signal is used as trigger output (TRGO)

// CCDS: Capture/compare DMA selection
#define TIMER2_CCDS_CCX_EVENT        0x00 // CCx DMA request sent when CCx event occurs
#define TIMER2_CCDS_UPDATE_EVENT     0x01 // CCx DMA requests sent when update event occurs

							/**************TIMx slave mode control register (TIMx_SMCR) Positions******/
// ETP: External trigger polarity
#define TIMER2_ETP_NON_INVERTED    0x0000 // ETR is non-inverted, active at high level or rising edge
#define TIMER2_ETP_INVERTED        0x0001 // ETR is inverted, active at low level or falling edge

// ECE: External clock enable
#define TIMER2_ECE_DISABLED        0x0000 // External clock mode 2 disabled
#define TIMER2_ECE_ENABLED         0x0001 // External clock mode 2 enabled

// ETPS: External trigger prescaler
#define TIMER2_ETPS_OFF            0x0000 // Prescaler OFF
#define TIMER2_ETPS_DIV2           0x0001 // ETRP frequency divided by 2
#define TIMER2_ETPS_DIV4           0x0002 // ETRP frequency divided by 4
#define TIMER2_ETPS_DIV8           0x0003 // ETRP frequency divided by 8

// ETF[3:0]: External trigger filter
#define TIMER2_ETF_NO_FILTER          0x0000 // No filter, sampling is done at fDTS
#define TIMER2_ETF_FCK_INT_N2         0x0001 // fSAMPLING=fCK_INT, N=2
#define TIMER2_ETF_FCK_INT_N4         0x0002 // fSAMPLING=fCK_INT, N=4
#define TIMER2_ETF_FCK_INT_N8_SQ      0x0003 // fSAMPLING=fCK_INT, N=8^2
#define TIMER2_ETF_FDTS_DIV2_N6       0x0004 // fSAMPLING=fDTS/2, N=6
#define TIMER2_ETF_FDTS_DIV2_N8       0x0005 // fSAMPLING=fDTS/2, N=8
#define TIMER2_ETF_FDTS_DIV4_N6_SQ    0x0006 // fSAMPLING=fDTS/4, N=6^2
#define TIMER2_ETF_FDTS_DIV4_N8       0x0007 // fSAMPLING=fDTS/4, N=8
#define TIMER2_ETF_FDTS_DIV8_N6       0x0008 // fSAMPLING=fDTS/8, N=6
#define TIMER2_ETF_FDTS_DIV8_N8       0x0009 // fSAMPLING=fDTS/8, N=8
#define TIMER2_ETF_FDTS_DIV16_N5      0x000A // fSAMPLING=fDTS/16, N=5
#define TIMER2_ETF_FDTS_DIV16_N6      0x000B // fSAMPLING=fDTS/16, N=6
#define TIMER2_ETF_FDTS_DIV16_N8      0x000C // fSAMPLING=fDTS/16, N=8
#define TIMER2_ETF_FDTS_DIV32_N5      0x000D // fSAMPLING=fDTS/32, N=5
#define TIMER2_ETF_FDTS_DIV32_N6      0x000E // fSAMPLING=fDTS/32, N=6
#define TIMER2_ETF_FDTS_DIV32_N8      0x000F // fSAMPLING=fDTS/32, N=8
// MSM: Master/Slave mode
#define TIMER2_MSM_NO_ACTION       0x0000 // No action
#define TIMER2_MSM_DELAY_TRIGGER   0x0001 // The effect of an event on the trigger input (TRGI) is delayed

// TS: Trigger selection
#define TIMER2_TS_ITR0             0x0000 // Internal Trigger 0 (ITR0)
#define TIMER2_TS_ITR1             0x0001 // Internal Trigger 1 (ITR1)
#define TIMER2_TS_ITR2             0x0002 // Internal Trigger 2 (ITR2)
#define TIMER2_TS_ITR3             0x0003 // Internal Trigger 3 (ITR3)
#define TIMER2_TS_TI1_EDGE_DETECTOR 0x0004 // TI1 Edge Detector (TI1F_ED)
#define TIMER2_TS_TI1_FILTERED1    0x0005 // Filtered Timer Input 1 (TI1FP1)
#define TIMER2_TS_TI2_FILTERED2    0x0006 // Filtered Timer Input 2 (TI2FP2)
#define TIMER2_TS_EXTERNAL_TRIGGER 0x0007 // External Trigger input (ETRF)

// SMS: Slave mode selection
#define TIMER2_SMS_DISABLED        0x0000 // Slave mode disabled
#define TIMER2_SMS_ENCODER_MODE1   0x0001 // Encoder mode 1
#define TIMER2_SMS_ENCODER_MODE2   0x0002 // Encoder mode 2
#define TIMER2_SMS_ENCODER_MODE3   0x0003 // Encoder mode 3
#define TIMER2_SMS_RESET_MODE      0x0004 // Reset mode
#define TIMER2_SMS_GATED_MODE      0x0005 // Gated mode
#define TIMER2_SMS_TRIGGER_MODE    0x0006 // Trigger mode
#define TIMER2_SMS_EXTERNAL_CLOCK1 0x0007 // External Clock mode 1


						/**************TIMx DMA/Interrupt enable register (TIMx_DIER) ******/
// TDE: Trigger DMA request enable
#define TIMER2_TDE_DISABLED   0x0000 // Trigger DMA request disabled
#define TIMER2_TDE_ENABLED    0x0001 // Trigger DMA request enabled

// CC4DE: Capture/Compare 4 DMA request enable
#define TIMER2_CC4DE_DISABLED 0x0000 // CC4 DMA request disabled
#define TIMER2_CC4DE_ENABLED  0x0001 // CC4 DMA request enabled

// CC3DE: Capture/Compare 3 DMA request enable
#define TIMER2_CC3DE_DISABLED 0x0000 // CC3 DMA request disabled
#define TIMER2_CC3DE_ENABLED  0x0001 // CC3 DMA request enabled

// CC2DE: Capture/Compare 2 DMA request enable
#define TIMER2_CC2DE_DISABLED 0x0000 // CC2 DMA request disabled
#define TIMER2_CC2DE_ENABLED  0x0001 // CC2 DMA request enabled

// CC1DE: Capture/Compare 1 DMA request enable
#define TIMER2_CC1DE_DISABLED 0x0000 // CC1 DMA request disabled
#define TIMER2_CC1DE_ENABLED  0x0001 // CC1 DMA request enabled

// UDE: Update DMA request enable
#define TIMER2_UDE_DISABLED   0x0000 // Update DMA request disabled
#define TIMER2_UDE_ENABLED    0x0001 // Update DMA request enabled

// TIE: Trigger interrupt enable
#define TIMER2_TIE_DISABLED   0x0000 // Trigger interrupt disabled
#define TIMER2_TIE_ENABLED    0x0001 // Trigger interrupt enabled

// CC4IE: Capture/Compare 4 interrupt enable
#define TIMER2_CC4IE_DISABLED 0x0000 // CC4 interrupt disabled
#define TIMER2_CC4IE_ENABLED   0x0001 // CC4 interrupt enabled

// CC3IE: Capture/Compare 3 interrupt enable
#define TIMER2_CC3IE_DISABLED 0x0000 // CC3 interrupt disabled
#define TIMER2_CC3IE_ENABLED   0x0001 // CC3 interrupt enabled

// CC2IE: Capture/Compare 2 interrupt enable
#define TIMER2_CC2IE_DISABLED 0x0000 // CC2 interrupt disabled
#define TIMER2_CC2IE_ENABLED  0x00041 // CC2 interrupt enabled

// CC1IE: Capture/Compare 1 interrupt enable
#define TIMER2_CC1IE_DISABLED 0x0000 // CC1 interrupt disabled
#define TIMER2_CC1IE_ENABLED  0x0001 // CC1 interrupt enabled

// UIE: Update interrupt enable
#define TIMER2_UIE_DISABLED   0x0000 // Update interrupt disabled
#define TIMER2_UIE_ENABLED    0x0001 // Update interrupt enabled

					/**************TIMx status register (TIMx_SR)******/
// CC1OF: Capture/Compare 1 overcapture flag
#define TIMER2_CC1OF_NO_OVERCAPTURE   0x0000 // No overcapture has been detected
#define TIMER2_CC1OF_OVERCAPTURE      0x0001 // The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set

// TIF: Trigger interrupt flag
#define TIMER2_TIF_NO_TRIGGER_EVENT   0x0000 // No trigger event occurred
#define TIMER2_TIF_TRIGGER_PENDING    0x0001 // Trigger interrupt pending

// CC1IF: Capture/compare 1 interrupt flag
#define TIMER2_CC1IF_NO_CAPTURE       0x0000 // No input capture occurred
#define TIMER2_CC1IF_CAPTURE          0x0001 // The counter value has been captured in TIMx_CCR1 register

// UIF: Update interrupt flag
#define TIMER2_UIF_NO_UPDATE          0x0000 // No update occurred
#define TIMER2_UIF_UPDATE_PENDING     0x0001 // Update interrupt pending

					/**************TIMx event generation register (TIMx_EGR) ******/

// TG: Trigger generation
#define TIMER2_TG_NO_ACTION     0x0000 // No action
#define TIMER2_TG_TRIGGER_GEN   0x0001 // The TIF flag is set in TIMx_SR register. Related interrupt or DMA transfer can occur if enabled.

// CC1G: Capture/compare 1 generation
#define TIMER2_CC1G_NO_ACTION     0x0000 // No action
#define TIMER2_CC1G_EVENT_GEN     0x0001 // A capture/compare event is generated on channel 1

// UG: Update generation
#define TIMER2_UG_NO_ACTION      0x0000 // No action
#define TIMER2_UG_UPDATE_GEN     0x0001 // Re-initialize the counter and generates an update of the registers

					/**************TIMx capture/compare mode register 1 (TIMx_CCMR1) ******/

									/*### Output compare mode###*/
// CC2S[1:0]: Capture/Compare 2 selection
#define TIMER2_CC2S_OUTPUT           0x0000 // CC2 channel is configured as output
#define TIMER2_CC2S_INPUT_TI2        0x01 // CC2 channel is configured as input, IC2 is mapped on TI2
#define TIMER2_CC2S_INPUT_TI1        0x02 // CC2 channel is configured as input, IC2 is mapped on TI1
#define TIMER2_CC2S_INPUT_TRC        0x03 // CC2 channel is configured as input, IC2 is mapped on TRC

// OC1CE: Output compare 1 clear enable
#define TIMER2_OC1CE_NOT_AFFECTED    0x000 // OC1Ref is not affected by the ETRF input
#define TIMER2_OC1CE_CLEARED         0x001 // OC1Ref is cleared as soon as a High level is detected on ETRF input

// OC1M: Output compare 1 mode
#define TIMER2_OC1M_FROZEN            0x000 // Frozen
#define TIMER2_OC1M_SET_ACTIVE        0x001 // Set channel 1 to active level on match
#define TIMER2_OC1M_SET_INACTIVE      0x002 // Set channel 1 to inactive level on match
#define TIMER2_OC1M_TOGGLE            0x003 // Toggle
#define TIMER2_OC1M_FORCE_INACTIVE    0x004 // Force inactive level
#define TIMER2_OC1M_FORCE_ACTIVE      0x005 // Force active level
#define TIMER2_OC1M_PWM_MODE1         0x006 // PWM mode 1
#define TIMER2_OC1M_PWM_MODE2         0x007 // PWM mode 2

// OC1PE: Output compare 1 preload enable
#define TIMER2_OC1PE_DISABLED         0x000 // Preload register on TIMx_CCR1 disabled
#define TIMER2_OC1PE_ENABLED          0x0001 // Preload register on TIMx_CCR1 enabled

// OC1FE: Output compare 1 fast enable
#define TIMER2_OC1FE_NORMAL           0x000 // CC1 behaves normally
#define TIMER2_OC1FE_FAST_ENABLE      0x0001 // An active edge on the trigger input acts like a compare match on CC1 output

// CC1S: Capture/Compare 1 selection
#define TIMER2_CC1S_OUTPUT           0x0000 // CC1 channel is configured as output
#define TIMER2_CC1S_INPUT_TI1        0x0001 // CC1 channel is configured as input, IC1 is mapped on TI1
#define TIMER2_CC1S_INPUT_TI2        0x0002 // CC1 channel is configured as input, IC1 is mapped on TI2
#define TIMER2_CC1S_INPUT_TRC        0x0003 // CC1 channel is configured as input, IC1 is mapped on TRC


									/*### Input capture mode ###*/
// IC1F: Input capture 1 filter
#define TIMER2_IC1F_NO_FILTER        0x0000 // No filter, sampling is done at fDTS
#define TIMER2_IC1F_FCK_INT_N_2      0x0001 // fSAMPLING=fCK_INT, N=2
#define TIMER2_IC1F_FCK_INT_N_4      0x0002 // fSAMPLING=fCK_INT, N=4
#define TIMER2_IC1F_FCK_INT_N_8      0x0003 // fSAMPLING=fCK_INT, N=8
#define TIMER2_IC1F_FDTS_DIV_2_N_6   0x0004 // fSAMPLING=fDTS/2, N=6
#define TIMER2_IC1F_FDTS_DIV_2_N_8   0x0005 // fSAMPLING=fDTS/2, N=8
#define TIMER2_IC1F_FDTS_DIV_4_N_6   0x0006 // fSAMPLING=fDTS/4, N=6
#define TIMER2_IC1F_FDTS_DIV_4_N_8   0x0007 // fSAMPLING=fDTS/4, N=8
#define TIMER2_IC1F_FDTS_DIV_8_N_6   0x0008 // fSAMPLING=fDTS/8, N=6
#define TIMER2_IC1F_FDTS_DIV_8_N_8   0x0009 // fSAMPLING=fDTS/8, N=8
#define TIMER2_IC1F_FDTS_DIV_16_N_5  0x000A // fSAMPLING=fDTS/16, N=5
#define TIMER2_IC1F_FDTS_DIV_16_N_6  0x000B // fSAMPLING=fDTS/16, N=6
#define TIMER2_IC1F_FDTS_DIV_16_N_8  0x000C // fSAMPLING=fDTS/16, N=8
#define TIMER2_IC1F_FDTS_DIV_32_N_5  0x000D // fSAMPLING=fDTS/32, N=5
#define TIMER2_IC1F_FDTS_DIV_32_N_6  0x000E // fSAMPLING=fDTS/32, N=6
#define TIMER2_IC1F_FDTS_DIV_32_N_8  0x000F // fSAMPLING=fDTS/32, N=8

// IC1PSC: Input capture 1 prescaler
#define TIMER2_IC1PSC_NO_PRESCALER   0x0000 // No prescaler, capture is done each time an edge is detected on the capture input
#define TIMER2_IC1PSC_2_EVENTS       0x0001 // Capture is done once every 2 events
#define TIMER2_IC1PSC_4_EVENTS       0x0002 // Capture is done once every 4 events
#define TIMER2_IC1PSC_8_EVENTS       0x0003 // Capture is done once every 8 events


					/**************TIMx capture/compare mode register 2 (TIMx_CCMR2) ******/
									/*### Output compare mode and Input capture mode###*/
// CC4S: Capture/Compare 4 selection
#define TIMER2_CC4S_OUTPUT           0x00 // CC4 channel is configured as output
#define TIMER2_CC4S_INPUT_TI4        0x01 // CC4 channel is configured as input, IC4 is mapped on TI4
#define TIMER2_CC4S_INPUT_TI3        0x02 // CC4 channel is configured as input, IC4 is mapped on TI3
#define TIMER2_CC4S_INPUT_TRC        0x03 // CC4 channel is configured as input, IC4 is mapped on TRC

// CC3S: Capture/Compare 3 selection
#define TIMER2_CC3S_OUTPUT           0x00 // CC3 channel is configured as output
#define TIMER2_CC3S_INPUT_TI3        0x01 // CC3 channel is configured as input, IC3 is mapped on TI3
#define TIMER2_CC3S_INPUT_TI4        0x02 // CC3 channel is configured as input, IC3 is mapped on TI4
#define TIMER2_CC3S_INPUT_TRC        0x03 // CC3 channel is configured as input, IC3 is mapped on TRC

					/**************TIMx capture/compare enable register (TIMx_CCER) ******/
// CC1P: Capture/Compare 1 output polarity
#define TIMER2_CC1P_ACTIVE_HIGH    0x0000 // OC1 active high
#define TIMER2_CC1P_ACTIVE_LOW     0x0001 // OC1 active low

// CC1E: Capture/Compare 1 output enable
#define TIMER2_CC1E_OFF            0x0000 // Off - OC1 is not active
#define TIMER2_CC1E_ON             0x0001 // On - OC1 signal is output on the corresponding output pin


/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/
// Macro to enable the counter for Timer 2
#define TIMER2_ENABLE_COUNTER()  (SET_BIT(TIMER->CR1,TIMER_CR1_CEN_POS))

// Macro to disable the counter for Timer 2
#define TIMER2_DISABLE_COUNTER()  (CLEAR_BIT(TIMER->CR1,TIMER_CR1_CEN_POS))

// Macro to enable auto-reload preload (buffered)
#define TIMER2_ARPE_BUFFERED()   (SET_BIT(TIMER->CR1,TIMER_CR1_ARPE_POS))

// Macro to disable auto-reload preload (not buffered)
#define TIMER2_ARPE_NOT_BUFFERED()  (CLEAR_BIT(TIMER->CR1,TIMER_CR1_ARPE_POS))

// Macro to set the counter direction as upcounter
#define TIMER2_SET_UPCOUNTER()    (CLEAR_BIT(TIMER->CR1,TIMER_CR1_DIR_POS))

// Macro to set the counter direction as downcounter
#define TIMER2_SET_DOWNCOUNTER()  (SET_BIT(TIMER->CR1,TIMER_CR1_DIR_POS))

// Macro to set the center-aligned mode for Timer 2
#define TIMER2_SET_CENTER_ALIGNED_MODE(MODE)      (MODIFY_REG(TIMER->CMS,TIMER_CR1_CMS_MASK,MODE))



/**********************************Macro function declaration end**************************/

/**********************************Data type declaration start*****************************/
typedef struct{
	/*
#if TIMER2_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
    void (* TMR2_InterruptHandler)(void);
    interrupt_priority_cfg priority;
#endif
*/
    uint_16 prescaler_value;
    uint_16 timer2_preload_value;
    uint_16 Repetition_Counter_value;
    uint_16 CounterMode;

    uint_8 timer2_reserved : 4;
}timer2_t;



/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/
Std_ReturnType Timer2_Init(const timer2_t *_timer);
Std_ReturnType Timer2_DeInit(const timer2_t *_timer);
Std_ReturnType Timer2_Write_Value(const timer2_t *_timer, uint_16 _value);
Std_ReturnType Timer2_Read_Value(const timer2_t *_timer, uint_16 *_value);



/**********************************Software interface declaration end**********************/

#endif /* MCAL_TIMER_HAL_TIM2_H_ */

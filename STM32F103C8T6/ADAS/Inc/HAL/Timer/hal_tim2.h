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



/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/



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

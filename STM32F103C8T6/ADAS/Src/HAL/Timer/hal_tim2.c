/*
 * hal_tim2.c
 *
 *  Created on: Mar 23, 2024
 *      Author: COMPUMARTS
 */



#include <HAL/Timer/hal_tim2.h>

/*				* Interrupt Configurations *
#if TIMER2_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
    static void (*TMR2_InterruptHandler)(void) = NULL;
#endif
*/
static uint_16 timer2_preload = ZERO_INIT;


Std_ReturnType Timer2_Init(const timer2_t *_timer){
    Std_ReturnType ret = HAL_NOT_OK;
    if(NULL == _timer){
        ret = HAL_NOT_OK;
    }
    else{
    	TIMER2_DISABLE_COUNTER();

        timer2_preload = _timer->timer2_preload_value;

/* Interrupt Configurations */


        TIMER2_ENABLE_COUNTER();
        ret = HAL_OK;
    }
    return ret;
}

Std_ReturnType Timer2_DeInit(const timer2_t *_timer){
    Std_ReturnType ret = HAL_NOT_OK;
    if(NULL == _timer){
        ret = HAL_NOT_OK;
    }
    else{
    	TIMER2_DISABLE_COUNTER();
/*      	* Interrupt Configurations *
#if TIMER2_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
        TIMER2_InterruptDisable();
#endif
*/
        ret = HAL_OK;
    }
    return ret;
}

Std_ReturnType Timer2_Write_Value(const timer2_t *_timer, uint_16 _value){
    Std_ReturnType ret = HAL_NOT_OK;
    if(NULL == _timer){
        ret = HAL_NOT_OK;
    }
    else{
    	MODIFY_REG(TIMER->CNT,TIMER_CNT_REG_MASK,_value);
        ret = HAL_OK;
    }
    return ret;
}

Std_ReturnType Timer2_Read_Value(const timer2_t *_timer, uint_16 *_value){
    Std_ReturnType ret = HAL_NOT_OK;
    if(NULL == _timer){
        ret = HAL_NOT_OK;
    }
    else{
    	*_value = TIMER->CNT;
        ret = HAL_OK;
    }
    return ret;
}

/*
void TMR2_ISR(void){

}
*/



/**
 ******************************************************************************
 * @file           : STM32F10xxx_HAL_Def.h
 * @author         : Omar Alhossiny
 * @brief          : STM32F10xxx HAL common functions
 ******************************************************************************
**/

#ifndef COMMON_STM32F10XXX_HAL_DEF_H_
#define COMMON_STM32F10XXX_HAL_DEF_H_

/**********************************Include section start***********************************/

/**********************************Include section end*************************************/

/**********************************Macro declaration start*********************************/

/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/

#define SET_BIT(REG,MASK)    ((REG) |= (1UL << (MASK)))
#define CLEAR_BIT(REG,MASK)  ((REG) &= ~(1UL << (MASK)))
#define TOGGLE_BIT(REG,MASK) ((REG) ^= (1UL << (MASK)))


#define READ_REG(REG)               ((REG))
#define WRITE_REG(REG,VAL)          ((REG) = (VAL))
#define MODIFY_REG(REG,MASK,VAL)    WRITE_REG((REG),(((READ_REG(REG)) & (~(MASK))) | (VAL)))

/**********************************Macro function declaration end**************************/

/**********************************Data type declaration start*****************************/

/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/

/**********************************Software interface declaration end**********************/

#endif /* COMMON_STM32F10XXX_HAL_DEF_H_ */
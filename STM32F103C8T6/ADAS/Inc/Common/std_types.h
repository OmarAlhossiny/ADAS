
/**
 ******************************************************************************
 * @file           : std_types.h
 * @author         : Omar Alhossiny
 * @brief          : STD types file
 ******************************************************************************
**/

#ifndef STD_TYPES_H_
#define STD_TYPES_H_


/**********************************Include section start***********************************/
#include <stdio.h>
#include <stdlib.h>
/**********************************Include section end*************************************/

/**********************************Macro declaration start*********************************/
#define ZERO_INIT     0x00

/**********************************Macro declaration end***********************************/

/**********************************Macro function declaration start************************/

/**********************************Macro function declaration end**************************/

/**********************************Data type declaration start*****************************/
typedef char uint_8;
typedef short uint_16;
typedef long uint_32;
typedef uint_8 Std_ReturnType;
typedef enum
{
	HAL_OK = 0,
	HAL_NOT_OK
}Std_Return_t;

/**********************************Data type declaration end*******************************/

/**********************************Software interface declaration start********************/

/**********************************Software interface declaration end**********************/



#endif /* STD_TYPES_H_ */

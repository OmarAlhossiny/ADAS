################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/RCC/rcc.c 

OBJS += \
./Src/HAL/RCC/rcc.o 

C_DEPS += \
./Src/HAL/RCC/rcc.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/RCC/%.o Src/HAL/RCC/%.su Src/HAL/RCC/%.cyclo: ../Src/HAL/RCC/%.c Src/HAL/RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-RCC

clean-Src-2f-HAL-2f-RCC:
	-$(RM) ./Src/HAL/RCC/rcc.cyclo ./Src/HAL/RCC/rcc.d ./Src/HAL/RCC/rcc.o ./Src/HAL/RCC/rcc.su

.PHONY: clean-Src-2f-HAL-2f-RCC


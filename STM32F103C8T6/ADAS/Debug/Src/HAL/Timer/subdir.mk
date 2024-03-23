################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/Timer/hal_tim2.c 

OBJS += \
./Src/HAL/Timer/hal_tim2.o 

C_DEPS += \
./Src/HAL/Timer/hal_tim2.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/Timer/%.o Src/HAL/Timer/%.su Src/HAL/Timer/%.cyclo: ../Src/HAL/Timer/%.c Src/HAL/Timer/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-Timer

clean-Src-2f-HAL-2f-Timer:
	-$(RM) ./Src/HAL/Timer/hal_tim2.cyclo ./Src/HAL/Timer/hal_tim2.d ./Src/HAL/Timer/hal_tim2.o ./Src/HAL/Timer/hal_tim2.su

.PHONY: clean-Src-2f-HAL-2f-Timer


################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/CortexM3/SysTick/Cortex-M3_SysTick.c 

OBJS += \
./Src/CortexM3/SysTick/Cortex-M3_SysTick.o 

C_DEPS += \
./Src/CortexM3/SysTick/Cortex-M3_SysTick.d 


# Each subdirectory must supply rules for building sources it contributes
Src/CortexM3/SysTick/%.o Src/CortexM3/SysTick/%.su Src/CortexM3/SysTick/%.cyclo: ../Src/CortexM3/SysTick/%.c Src/CortexM3/SysTick/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-CortexM3-2f-SysTick

clean-Src-2f-CortexM3-2f-SysTick:
	-$(RM) ./Src/CortexM3/SysTick/Cortex-M3_SysTick.cyclo ./Src/CortexM3/SysTick/Cortex-M3_SysTick.d ./Src/CortexM3/SysTick/Cortex-M3_SysTick.o ./Src/CortexM3/SysTick/Cortex-M3_SysTick.su

.PHONY: clean-Src-2f-CortexM3-2f-SysTick


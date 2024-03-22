################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/CortexM3/NVIC/Cortex_M3_NVIC.c 

OBJS += \
./Src/CortexM3/NVIC/Cortex_M3_NVIC.o 

C_DEPS += \
./Src/CortexM3/NVIC/Cortex_M3_NVIC.d 


# Each subdirectory must supply rules for building sources it contributes
Src/CortexM3/NVIC/%.o Src/CortexM3/NVIC/%.su Src/CortexM3/NVIC/%.cyclo: ../Src/CortexM3/NVIC/%.c Src/CortexM3/NVIC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-CortexM3-2f-NVIC

clean-Src-2f-CortexM3-2f-NVIC:
	-$(RM) ./Src/CortexM3/NVIC/Cortex_M3_NVIC.cyclo ./Src/CortexM3/NVIC/Cortex_M3_NVIC.d ./Src/CortexM3/NVIC/Cortex_M3_NVIC.o ./Src/CortexM3/NVIC/Cortex_M3_NVIC.su

.PHONY: clean-Src-2f-CortexM3-2f-NVIC


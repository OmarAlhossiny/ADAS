################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/CortexM3/SCB/Cortex-M3_SCB.c 

OBJS += \
./Src/CortexM3/SCB/Cortex-M3_SCB.o 

C_DEPS += \
./Src/CortexM3/SCB/Cortex-M3_SCB.d 


# Each subdirectory must supply rules for building sources it contributes
Src/CortexM3/SCB/%.o Src/CortexM3/SCB/%.su Src/CortexM3/SCB/%.cyclo: ../Src/CortexM3/SCB/%.c Src/CortexM3/SCB/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-CortexM3-2f-SCB

clean-Src-2f-CortexM3-2f-SCB:
	-$(RM) ./Src/CortexM3/SCB/Cortex-M3_SCB.cyclo ./Src/CortexM3/SCB/Cortex-M3_SCB.d ./Src/CortexM3/SCB/Cortex-M3_SCB.o ./Src/CortexM3/SCB/Cortex-M3_SCB.su

.PHONY: clean-Src-2f-CortexM3-2f-SCB


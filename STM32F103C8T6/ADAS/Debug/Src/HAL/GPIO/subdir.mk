################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HAL/GPIO/gpio.c 

OBJS += \
./Src/HAL/GPIO/gpio.o 

C_DEPS += \
./Src/HAL/GPIO/gpio.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HAL/GPIO/%.o Src/HAL/GPIO/%.su Src/HAL/GPIO/%.cyclo: ../Src/HAL/GPIO/%.c Src/HAL/GPIO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-HAL-2f-GPIO

clean-Src-2f-HAL-2f-GPIO:
	-$(RM) ./Src/HAL/GPIO/gpio.cyclo ./Src/HAL/GPIO/gpio.d ./Src/HAL/GPIO/gpio.o ./Src/HAL/GPIO/gpio.su

.PHONY: clean-Src-2f-HAL-2f-GPIO


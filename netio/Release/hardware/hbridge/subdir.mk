################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../hardware/hbridge/ecmd.c \
../hardware/hbridge/hbridge.c 

OBJS += \
./hardware/hbridge/ecmd.o \
./hardware/hbridge/hbridge.o 

C_DEPS += \
./hardware/hbridge/ecmd.d \
./hardware/hbridge/hbridge.d 


# Each subdirectory must supply rules for building sources it contributes
hardware/hbridge/%.o: ../hardware/hbridge/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



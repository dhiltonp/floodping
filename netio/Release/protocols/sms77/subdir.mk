################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../protocols/sms77/sms77.c \
../protocols/sms77/sms77_ecmd.c 

OBJS += \
./protocols/sms77/sms77.o \
./protocols/sms77/sms77_ecmd.o 

C_DEPS += \
./protocols/sms77/sms77.d \
./protocols/sms77/sms77_ecmd.d 


# Each subdirectory must supply rules for building sources it contributes
protocols/sms77/%.o: ../protocols/sms77/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../hardware/sms/sms.c \
../hardware/sms/sms_ecmd.c \
../hardware/sms/sms_encoding.c 

OBJS += \
./hardware/sms/sms.o \
./hardware/sms/sms_ecmd.o \
./hardware/sms/sms_encoding.o 

C_DEPS += \
./hardware/sms/sms.d \
./hardware/sms/sms_ecmd.d \
./hardware/sms/sms_encoding.d 


# Each subdirectory must supply rules for building sources it contributes
hardware/sms/%.o: ../hardware/sms/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



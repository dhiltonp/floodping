################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../protocols/bootp/bootp.c \
../protocols/bootp/bootp_net.c 

OBJS += \
./protocols/bootp/bootp.o \
./protocols/bootp/bootp_net.o 

C_DEPS += \
./protocols/bootp/bootp.d \
./protocols/bootp/bootp_net.d 


# Each subdirectory must supply rules for building sources it contributes
protocols/bootp/%.o: ../protocols/bootp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



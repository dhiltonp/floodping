################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../protocols/yport/yport.c \
../protocols/yport/yport_net.c 

OBJS += \
./protocols/yport/yport.o \
./protocols/yport/yport_net.o 

C_DEPS += \
./protocols/yport/yport.d \
./protocols/yport/yport_net.d 


# Each subdirectory must supply rules for building sources it contributes
protocols/yport/%.o: ../protocols/yport/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



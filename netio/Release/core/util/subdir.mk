################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../core/util/fixedpoint.o \
../core/util/string_parsing.o 

C_SRCS += \
../core/util/fixedpoint.c \
../core/util/string_parsing.c 

OBJS += \
./core/util/fixedpoint.o \
./core/util/string_parsing.o 

C_DEPS += \
./core/util/fixedpoint.d \
./core/util/string_parsing.d 


# Each subdirectory must supply rules for building sources it contributes
core/util/%.o: ../core/util/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



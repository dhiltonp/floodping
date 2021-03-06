################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../hardware/adc/adc.o \
../hardware/adc/temp2text.o 

C_SRCS += \
../hardware/adc/adc.c \
../hardware/adc/hr20-batt.c \
../hardware/adc/hr20-temp-ecmd.c \
../hardware/adc/hr20-temp.c \
../hardware/adc/temp2text.c 

OBJS += \
./hardware/adc/adc.o \
./hardware/adc/hr20-batt.o \
./hardware/adc/hr20-temp-ecmd.o \
./hardware/adc/hr20-temp.o \
./hardware/adc/temp2text.o 

C_DEPS += \
./hardware/adc/adc.d \
./hardware/adc/hr20-batt.d \
./hardware/adc/hr20-temp-ecmd.d \
./hardware/adc/hr20-temp.d \
./hardware/adc/temp2text.d 


# Each subdirectory must supply rules for building sources it contributes
hardware/adc/%.o: ../hardware/adc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



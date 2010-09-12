################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../hardware/radio/rfm12/ecmd.o \
../hardware/radio/rfm12/process.o \
../hardware/radio/rfm12/rfm12.o 

C_SRCS += \
../hardware/radio/rfm12/ask_sense.c \
../hardware/radio/rfm12/ecmd.c \
../hardware/radio/rfm12/ecmd_ask.c \
../hardware/radio/rfm12/process.c \
../hardware/radio/rfm12/rfm12.c \
../hardware/radio/rfm12/rfm12_ask.c \
../hardware/radio/rfm12/rfm12_raw_net.c 

OBJS += \
./hardware/radio/rfm12/ask_sense.o \
./hardware/radio/rfm12/ecmd.o \
./hardware/radio/rfm12/ecmd_ask.o \
./hardware/radio/rfm12/process.o \
./hardware/radio/rfm12/rfm12.o \
./hardware/radio/rfm12/rfm12_ask.o \
./hardware/radio/rfm12/rfm12_raw_net.o 

C_DEPS += \
./hardware/radio/rfm12/ask_sense.d \
./hardware/radio/rfm12/ecmd.d \
./hardware/radio/rfm12/ecmd_ask.d \
./hardware/radio/rfm12/process.d \
./hardware/radio/rfm12/rfm12.d \
./hardware/radio/rfm12/rfm12_ask.d \
./hardware/radio/rfm12/rfm12_raw_net.d 


# Each subdirectory must supply rules for building sources it contributes
hardware/radio/rfm12/%.o: ../hardware/radio/rfm12/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



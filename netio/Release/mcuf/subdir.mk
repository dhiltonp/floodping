################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../mcuf/ecmd.c \
../mcuf/ledmatrixint.c \
../mcuf/mcuf.c \
../mcuf/mcuf_modul.c \
../mcuf/mcuf_modul_examples.c \
../mcuf/mcuf_modul_test_game_input.c \
../mcuf/mcuf_net.c \
../mcuf/mcuf_text.c 

OBJS += \
./mcuf/ecmd.o \
./mcuf/ledmatrixint.o \
./mcuf/mcuf.o \
./mcuf/mcuf_modul.o \
./mcuf/mcuf_modul_examples.o \
./mcuf/mcuf_modul_test_game_input.o \
./mcuf/mcuf_net.o \
./mcuf/mcuf_text.o 

C_DEPS += \
./mcuf/ecmd.d \
./mcuf/ledmatrixint.d \
./mcuf/mcuf.d \
./mcuf/mcuf_modul.d \
./mcuf/mcuf_modul_examples.d \
./mcuf/mcuf_modul_test_game_input.d \
./mcuf/mcuf_net.d \
./mcuf/mcuf_text.d 


# Each subdirectory must supply rules for building sources it contributes
mcuf/%.o: ../mcuf/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../services/glcdmenu/menu-interpreter/menu-interpreter.c \
../services/glcdmenu/menu-interpreter/menu-text.c \
../services/glcdmenu/menu-interpreter/menudata-progmem.c 

OBJS += \
./services/glcdmenu/menu-interpreter/menu-interpreter.o \
./services/glcdmenu/menu-interpreter/menu-text.o \
./services/glcdmenu/menu-interpreter/menudata-progmem.o 

C_DEPS += \
./services/glcdmenu/menu-interpreter/menu-interpreter.d \
./services/glcdmenu/menu-interpreter/menu-text.d \
./services/glcdmenu/menu-interpreter/menudata-progmem.d 


# Each subdirectory must supply rules for building sources it contributes
services/glcdmenu/menu-interpreter/%.o: ../services/glcdmenu/menu-interpreter/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



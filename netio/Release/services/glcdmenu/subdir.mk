################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../services/glcdmenu/glcdmenu-ecmd.c \
../services/glcdmenu/glcdmenu-s1d13305.c \
../services/glcdmenu/glcdmenu.c 

OBJS += \
./services/glcdmenu/glcdmenu-ecmd.o \
./services/glcdmenu/glcdmenu-s1d13305.o \
./services/glcdmenu/glcdmenu.o 

C_DEPS += \
./services/glcdmenu/glcdmenu-ecmd.d \
./services/glcdmenu/glcdmenu-s1d13305.d \
./services/glcdmenu/glcdmenu.d 


# Each subdirectory must supply rules for building sources it contributes
services/glcdmenu/%.o: ../services/glcdmenu/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"/root/workspace1/netio" -I"/root/workspace1/netio/core/portio" -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



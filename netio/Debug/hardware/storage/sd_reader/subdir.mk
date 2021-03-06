################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../hardware/storage/sd_reader/byteordering.c \
../hardware/storage/sd_reader/ecmd.c \
../hardware/storage/sd_reader/fat.c \
../hardware/storage/sd_reader/init.c \
../hardware/storage/sd_reader/partition.c \
../hardware/storage/sd_reader/sd_raw.c \
../hardware/storage/sd_reader/vfs_sd.c 

OBJS += \
./hardware/storage/sd_reader/byteordering.o \
./hardware/storage/sd_reader/ecmd.o \
./hardware/storage/sd_reader/fat.o \
./hardware/storage/sd_reader/init.o \
./hardware/storage/sd_reader/partition.o \
./hardware/storage/sd_reader/sd_raw.o \
./hardware/storage/sd_reader/vfs_sd.o 

C_DEPS += \
./hardware/storage/sd_reader/byteordering.d \
./hardware/storage/sd_reader/ecmd.d \
./hardware/storage/sd_reader/fat.d \
./hardware/storage/sd_reader/init.d \
./hardware/storage/sd_reader/partition.d \
./hardware/storage/sd_reader/sd_raw.d \
./hardware/storage/sd_reader/vfs_sd.d 


# Each subdirectory must supply rules for building sources it contributes
hardware/storage/sd_reader/%.o: ../hardware/storage/sd_reader/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



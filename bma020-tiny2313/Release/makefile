################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Debug/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
bma020-tiny2313.lss \

FLASH_IMAGE += \
bma020-tiny2313.hex \

EEPROM_IMAGE += \
bma020-tiny2313.eep \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: bma020-tiny2313.elf secondary-outputs

# Tool invocations
bma020-tiny2313.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,bma020-tiny2313.map -mmcu=attiny2313 -o "bma020-tiny2313.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

bma020-tiny2313.lss: bma020-tiny2313.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S bma020-tiny2313.elf  >"bma020-tiny2313.lss"
	@echo 'Finished building: $@'
	@echo ' '

bma020-tiny2313.hex: bma020-tiny2313.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -O ihex bma020-tiny2313.elf  "bma020-tiny2313.hex"
	@echo 'Finished building: $@'
	@echo ' '

bma020-tiny2313.eep: bma020-tiny2313.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex bma020-tiny2313.elf  "bma020-tiny2313.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: bma020-tiny2313.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=attiny2313 bma020-tiny2313.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: bma020-tiny2313.elf
	@echo 'Invoking: AVRDude'
	/usr/bin/avrdude -pt2313 -cusbasp -F -u -Uflash:w:bma020-tiny2313.hex:a -Ulfuse:w:0xc4:m -Uhfuse:w:0xdf:m -Uefuse:w:0xff:m
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ASM_DEPS)$(EEPROM_IMAGE)$(FLASH_IMAGE)$(ELFS)$(LSS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS) bma020-tiny2313.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
SpaceInvaders_Nucleo.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
SpaceInvaders_Nucleo.list \

OBJCOPY_BIN += \
SpaceInvaders_Nucleo.bin \


# All Target
all: SpaceInvaders_Nucleo.elf secondary-outputs

# Tool invocations
SpaceInvaders_Nucleo.elf: $(OBJS) $(USER_OBJS) C:\Users\rella\STM32CubeIDE\workspace_1.2.0\SpaceInvaders_Nucleo\STM32F746ZGTX_FLASH.ld
	arm-none-eabi-gcc -o "SpaceInvaders_Nucleo.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\rella\STM32CubeIDE\workspace_1.2.0\SpaceInvaders_Nucleo\STM32F746ZGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="SpaceInvaders_Nucleo.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

SpaceInvaders_Nucleo.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "SpaceInvaders_Nucleo.list"
	@echo 'Finished building: $@'
	@echo ' '

SpaceInvaders_Nucleo.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "SpaceInvaders_Nucleo.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

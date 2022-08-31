################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/embeeeeeeeeeeeeded/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./tm4c123gh6pm_startup_ccs.obj" \
"./APP/app.obj" \
"./HAL/LED.obj" \
"./MCAL/GPIO/dio/DIO.obj" \
"./MCAL/GPIO/port/Port.obj" \
"./MCAL/GPIO/port/Port_Lcfg.obj" \
"./MCAL/GPT/GPT.obj" \
"./MCAL/GPT/GPT_Lcfg.obj" \
"./MCAL/NVIC/NVIC.obj" \
"./MCAL/NVIC/NVIC_Lcfg.obj" \
"./MCAL/clock/SysCtr.obj" \
"./services/scheduler.obj" \
"../tm4c123gh6pm.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include APP/subdir_vars.mk
-include HAL/subdir_vars.mk
-include MCAL/GPIO/dio/subdir_vars.mk
-include MCAL/GPIO/port/subdir_vars.mk
-include MCAL/GPT/subdir_vars.mk
-include MCAL/NVIC/subdir_vars.mk
-include MCAL/clock/subdir_vars.mk
-include services/subdir_vars.mk
-include subdir_rules.mk
-include APP/subdir_rules.mk
-include HAL/subdir_rules.mk
-include MCAL/GPIO/dio/subdir_rules.mk
-include MCAL/GPIO/port/subdir_rules.mk
-include MCAL/GPT/subdir_rules.mk
-include MCAL/NVIC/subdir_rules.mk
-include MCAL/clock/subdir_rules.mk
-include services/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
LED_Control_Sprints.out \

EXE_OUTPUTS__QUOTED += \
"LED_Control_Sprints.out" \

BIN_OUTPUTS += \
LED_Control_Sprints.hex \

BIN_OUTPUTS__QUOTED += \
"LED_Control_Sprints.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "LED_Control_Sprints.out"

# Tool invocations
LED_Control_Sprints.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: Arm Linker'
	"D:/embeeeeeeeeeeeeded/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"LED_Control_Sprints.map" --heap_size=0 --stack_size=512 -i"D:/embeeeeeeeeeeeeded/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/lib" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/APP" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/HAL" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/Libraries" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/clock" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/Common" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/GPIO" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/GPIO/dio" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/GPIO/port" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/GPT" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/NVIC" -i"D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/services" -i"D:/embeeeeeeeeeeeeded/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="LED_Control_Sprints_linkInfo.xml" --rom_model -o "LED_Control_Sprints.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

LED_Control_Sprints.hex: $(EXE_OUTPUTS)
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: Arm Hex Utility'
	"D:/embeeeeeeeeeeeeded/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armhex" --diag_wrap=off -o "LED_Control_Sprints.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "tm4c123gh6pm_startup_ccs.obj" "APP\app.obj" "HAL\LED.obj" "MCAL\GPIO\dio\DIO.obj" "MCAL\GPIO\port\Port.obj" "MCAL\GPIO\port\Port_Lcfg.obj" "MCAL\GPT\GPT.obj" "MCAL\GPT\GPT_Lcfg.obj" "MCAL\NVIC\NVIC.obj" "MCAL\NVIC\NVIC_Lcfg.obj" "MCAL\clock\SysCtr.obj" "services\scheduler.obj" 
	-$(RM) "tm4c123gh6pm_startup_ccs.d" "APP\app.d" "HAL\LED.d" "MCAL\GPIO\dio\DIO.d" "MCAL\GPIO\port\Port.d" "MCAL\GPIO\port\Port_Lcfg.d" "MCAL\GPT\GPT.d" "MCAL\GPT\GPT_Lcfg.d" "MCAL\NVIC\NVIC.d" "MCAL\NVIC\NVIC_Lcfg.d" "MCAL\clock\SysCtr.d" "services\scheduler.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets


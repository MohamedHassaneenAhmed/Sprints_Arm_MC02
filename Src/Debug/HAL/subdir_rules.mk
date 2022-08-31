################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
HAL/%.obj: ../HAL/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"D:/embeeeeeeeeeeeeded/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/APP" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/clock" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/Common" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/GPIO" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/GPIO/dio" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/GPIO/port" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/GPT" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL/NVIC" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/HAL" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/Libraries" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/MCAL" --include_path="D:/embeeeeeeeeeeeeded/mahmoud/LED_Control_Sprints/services" --include_path="D:/embeeeeeeeeeeeeded/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="HAL/$(basename $(<F)).d_raw" --obj_directory="HAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '



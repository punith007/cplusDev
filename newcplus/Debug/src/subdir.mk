################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Person.cpp \
../src/newcplus.cpp \
../src/student.cpp 

OBJS += \
./src/Person.o \
./src/newcplus.o \
./src/student.o 

CPP_DEPS += \
./src/Person.d \
./src/newcplus.d \
./src/student.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/punith/my_git_repo/newcplus/inc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



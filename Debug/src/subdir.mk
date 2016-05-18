################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Card.cpp \
../src/Deck.cpp \
../src/Hand.cpp \
../src/Player.cpp \
../src/Stretch.cpp 

OBJS += \
./src/Card.o \
./src/Deck.o \
./src/Hand.o \
./src/Player.o \
./src/Stretch.o 

CPP_DEPS += \
./src/Card.d \
./src/Deck.d \
./src/Hand.d \
./src/Player.d \
./src/Stretch.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"C:\cygwin\lib\gcc\x86_64-pc-cygwin\5.3.0\include\c++" -I"C:\cygwin\lib\gcc\x86_64-w64-mingw32\4.9.2\include\c++\x86_64-w64-mingw32\bits" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



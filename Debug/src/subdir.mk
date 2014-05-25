################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ProyectoPrueba.c \
../src/hilos.c \
../src/listas.c \
../src/malloc.c \
../src/prueba_algoritmos.c \
../src/punteros.c \
../src/readFile.c \
../src/saludos.c 

OBJS += \
./src/ProyectoPrueba.o \
./src/hilos.o \
./src/listas.o \
./src/malloc.o \
./src/prueba_algoritmos.o \
./src/punteros.o \
./src/readFile.o \
./src/saludos.o 

C_DEPS += \
./src/ProyectoPrueba.d \
./src/hilos.d \
./src/listas.d \
./src/malloc.d \
./src/prueba_algoritmos.d \
./src/punteros.d \
./src/readFile.d \
./src/saludos.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -lpthread -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



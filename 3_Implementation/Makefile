CC =arm-none-eabi-gcc

MACH=cortex-m4

CFLAGS =-c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0 
LDFLAGS= -nostdlib -T linkerscript_stm32.ld

all:clean main.o driverfile.o startup_stm32.o main.elf run

main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^

driverfile.o:driverfile.c
	$(CC) $(CFLAGS) -o $@ $^

startup_stm32.o:startup_stm32.c
	$(CC) $(CFLAGS) -o $@ $^

main.elf:main.o driverfile.o startup_stm32.o
	$(CC) $(LDFLAGS) -o $@ $^
	
run:
	qemu-system-gnuarmeclipse.exe -M STM32F4-Discovery -mcu STM32F407VG -kernel main.elf
	
clean:
	-rm -rf *.o *.elf

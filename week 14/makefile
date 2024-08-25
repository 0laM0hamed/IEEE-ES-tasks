CC = arm-none-eabi-gcc
CFLAGS = -c -mcpu=$(ACH) -std=gnu11 -mthumb
LDFLAGS=-T linker.ld -nostdlib -Wl,-Map=program.map
ACH = cortex-m4




all:main.o GPIO_Prog.o RCC_Prog.o SysTick_Prog.o startup.o program.elf

main.o:main.c
			$(CC) $(CFLAGS) main.c -o main.o

GPIO_Prog.o:GPIO_Prog.c
			$(CC) $(CFLAGS) GPIO_Prog.c -o GPIO_Prog.o

RCC_Prog.o:RCC_Prog.c
			$(CC) $(CFLAGS) RCC_Prog.c -o RCC_Prog.o

SysTick_Prog.o:SysTick_Prog.c
			$(CC) $(CFLAGS) SysTick_Prog.c -o SysTick_Prog.o

startup.o:startup.c
			$(CC) $(CFLAGS) startup.c -o startup.o

program.elf:main.o GPIO_Prog.o RCC_Prog.o SysTick_Prog.o startup.o
			$(CC) $(LDFLAGS) $^ -o $@


 

clear:
			@rm -rf *.o
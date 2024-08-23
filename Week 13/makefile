CC = gcc
CFLAGS = -Wall -g
DEPS=include/fun.h
ACH = cortex-m4
SRCS = main.c fun.c
OBJ = main.o fun.o
TARGET = main

.PHONY: all clear

all: $(OBJS) $(TARGET)



main.o: main.c
		@$(CC) $(CFLAGS) -c main.c -o main.o

fun.o: fun.c
		@$(CC) $(CFLAGS) -c fun.c -o fun.o

$(TARGET): $(OBJ) 
		@$(CC) $(CFLAGS) $(OBJ) -o $(TARGET) 

clear:
		@rm -f  $(OBJ) $(TARGET)
CC = gcc
CFLAGS = -Wall
DEBUG_FLAGS= -g
ANALYZE_FLAGS= --enable=all --inconclusive --quiet
ANALYZE_TOOL=cppcheck
test=TEST
test.c=TEST_SRCS
DEPS=include/fun.h
ACH = cortex-m4
SRCS = main.c fun.c
OBJ = main.o fun.o
TARGET = main

.PHONY: all clear analyze debug

all: $(OBJS) $(TARGET)



main.o: main.c
		@$(CC) $(CFLAGS) -c main.c -o main.o

fun.o: fun.c
		@$(CC) $(CFLAGS) -c fun.c -o fun.o

$(TARGET): $(OBJ) 
		@$(CC) $(CFLAGS) $(OBJ) -o $(TARGET) 

debug:CFLAGS+= $(DEBUG_FLAGS)
debug:$(TARGET)


analyze:$(ANALYZE_TOOL) $(ANALYZE_FLAGS) $(SRCS)


$(TEST): $(TEST_SRCS)
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_SRCS)

clear:
		@rm -f  $(OBJ) $(TARGET)
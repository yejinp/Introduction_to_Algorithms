dir=$(shell pwd)

HEADERS:=$(dir)/../include/
CFLAGS:=-I$(HEADERS) -g -Wall

OBJ:=$(dir)/../obj
BIN:=$(dir)/../bin

objects=$(wildcard *.c)
$(warning $(objects))

.PHONY:all
all:mkdirs stack queue
mkdirs:
	-mkdir -p $(OBJ)
	-mkdir -p $(BIN)

stack:
	gcc -c -o $(OBJ)/stack.o $(CFLAGS) stack.c
queue:
	gcc -c -o $(OBJ)/queue.o $(CFLAGS) queue.c

.PHONY:clean
clean:
	-rm -f $(OBJ)/*.o
	-rm -f $(BIN)/*

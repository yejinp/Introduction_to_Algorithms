include env.mk

pwd=$(shell pwd)

CC?=gcc
MAKE?=make

SRC=src
OBJ_DIR=$(pwd)/obj
BIN=$(pwd)/bin
APP=$(pwd)/app

HEADERS:=$(pwd)/include/

.PHONY:all
all: mkdir stack queue;


#@cd $(SRC) && $(MAKE)  HEADERS="$(HEADERS)" CC=$(CC) MAKE=$(MAKE)

mkdir:
	@-mkdir -p $(OBJ_DIR)
	@-mkdir -p $(BIN)

stack:mkdir
	@cd $(SRC) && $(MAKE) HEADERS="$(HEADERS)" CC=$(CC) MAKE=$(MAKE) TARGET=stack
	@gcc -o $(BIN)/stack_main app/stack_main.c $(OBJ_DIR)/*.o  -I$(HEADERS) -g -Wall

queue:mkdir
	@cd $(SRC) && $(MAKE) HEADERS="$(HEADERS)" CC=$(CC) MAKE=$(MAKE) TARGET=queue
	@gcc -o $(BIN)/queue_main app/queue_main.c $(OBJ_DIR)/*.o  -I$(HEADERS) -g -Wall

.PHONY:clean
clean:
	@rm -rf $(OBJ_DIR)
	@rm -rf $(BIN)


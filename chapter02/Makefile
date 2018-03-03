include ../env.mk
pwd=$(shell pwd)

CC?=gcc
MAKE?=make

OBJ_DIR=$(pwd)/obj
SRC=src
BIN=$(pwd)/bin

INCLUDES=-I./include/

SRCS=$(wildcard src/*.c)
OBJECTS=$(patsubst %.c,%.o, $(subst src,obj,$(SRCS)))

.PHONY:all
all:mkdir objects bins;

mkdir:
	mkdir -p $(OBJ_DIR)
	mkdir -p $(BIN)
objects: $(SRCS) $(HEADERS);
	gcc -c -o $(OBJECTS) $(SRCS) $(INCLUDES)

bins:
	@echo "make bins"
	gcc -o $(BIN)/basics_app  app/basics_main.c $(INCLUDES) $(OBJECTS)

.PHONY:clean
clean:
	rm -rf $(OBJ_DIR) $(BIN)

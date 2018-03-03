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
HEADERS=$(wildcard $(pwd)/include/*.h)
$(warning $(SRCS))
$(warning $(OBJECTS))


.PHONY:all
all:mkdir bins;

mkdir:
	mkdir -p  $(OBJ_DIR)
	mkdir -p  $(BIN)
$(OBJECTS): $(SRCS) $(HEADERS)
	$(CC) -g -c -o $@ $< $(INCLUDES) 

bins: $(OBJECTS)
	$(CC) -g -o $(BIN)/quicksort app/quicksort_main.c $(OBJECTS) $(INCLUDES)
	@echo "make bins"

.PHONY:clean
clean:
	rm -rf $(OBJ_DIR) $(BIN)

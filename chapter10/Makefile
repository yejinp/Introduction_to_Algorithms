include env.mk

pwd=$(shell pwd)

CC?=gcc
MAKE?=make

SRC=src
OBJ_DIR=$(pwd)/obj
BIN=$(pwd)/bin
APP=$(pwd)/app

srcs=$(wildcard src/*.c)
objects=$(patsubst %.c,%.o, $(subst src,obj, $(srcs)))

HEADERS:=$(pwd)/include/

.PHONY:all
all: mkdir $(objects);

$(objects): $(srcs)
	gcc -c -o $@  $< -I$(HEADERS)

mkdir:
	-mkdir -p $(OBJ_DIR)
	-mkdir -p $(BIN)

.PHONY:clean
clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(BIN)


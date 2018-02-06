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
bins=$(patsubst %.c, %, $(subst src/,, $(srcs)))

HEADERS:=$(pwd)/include/

.PHONY:all
all: mkdir bins;

$(objects): $(srcs)
	gcc -c -o $@  $(patsubst %.o,%.c,$(subst obj,src,$@)) -I$(HEADERS)

mkdir:
	mkdir -p $(OBJ_DIR)
	mkdir -p $(BIN)

bins:$(objects)
	for sub_app in $(bins); do gcc -o $(BIN)/$${sub_app}_main $(APP)/$${sub_app}_main.c  -I$(HEADERS) $(objects); done
	

.PHONY:clean
clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(BIN)


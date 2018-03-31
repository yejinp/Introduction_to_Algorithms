CC=gcc

BIN=bin
SRC=src
HEADERS=$(wildcard include/*.h))
SRCS=$(wildcard $(SRC)/*.c)
OBJECTS=$(patsubstr %.c,%.o,$(SRCS))

$(warning $(SRCS))
$(warning $(OBJECTS))

all:$(BIN)
	

$(BIN):
	mkdir -p $(BIN)

clean:
	rm -rf $(BIN)

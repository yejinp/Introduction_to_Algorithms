CC=gcc

BIN=bin
SRC=src
HEADERS=include
SRCS=$(wildcard $(SRC)/*.c)
OBJECTS=$(subst src,objects,$(patsubst %.c,%.o,$(SRCS)))
app=$(wildcard app/*.c)
OBJECT_DIR=objects

APP=$(BIN)/heap_app

CFLAGS= -g

$(warning $(SRCS))
$(warning $(OBJECTS))

all:$(BIN) $(OBJECTS) $(APP);
	
$(OBJECTS):$(SRCS)
	mkdir -p $(OBJECT_DIR)
	$(CC) -c -o $@ $< -I$(HEADERS)

$(BIN):
	mkdir -p $(BIN)

$(APP):$(app) $(OBJECTS)
	$(CC) -o $@ $^ -I$(HEADERS)

clean:
	rm -rf $(BIN)
	rm -rf $(OBJECT_DIR)

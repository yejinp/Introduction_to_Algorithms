CC=gcc
CFLAGS=

INCLUDE=include
HEADERS=$(wildcard include/*.c)
SRCS=$(wildcard src/*.c)
OBJECTS=$(patsubst %.c,%.o,$(notdir $(SRCS)))

app_src=$(wildcard app/*.c)

OBJECTS_DIR=objects
BIN=bin

target=test_app

all:$(BIN)/$(target) $(OBJECTS_DIR)/$(OBJECTS) $(SRCS) $(HEADERS);

$(OBJECTS_DIR)/$(OBJECTS): $(OBJECTS_DIR) $(SRCS) $(HEADERS)
	$(CC)  $(CFLAGS)  -o $@ -I$(INCLUDE) -c $(SRCS) 

$(BIN)/$(target): $(BIN) $(SRCS) $(app_sr) $(OBJECTS_DIR)/$(OBJECTS)
	$(CC) -o $@ $(OBJECTS_DIR)/$(OBJECTS) -I$(INCLUDE) $(app_src)

$(OBJECTS):
	mkdir -p $(OBJECTS_DIR)

$(BIN):
	mkdir -p $(BIN)
clean:
	rm  -rf $(BIN) $(OBJECTS)


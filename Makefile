SRC_FILES = $(wildcard src/**/*.c)
BIN_FILES = $(SRC_FILES:src/%.c=bin/%)
BIN_DIRS = $(dir $(BIN_FILES))

all: $(BIN_DIRS) $(BIN_FILES)

$(BIN_DIRS):
	mkdir -p $@

bin/%: src/%.c
	gcc -o $@ $<

clean:
	rm -rf bin

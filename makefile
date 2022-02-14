COMPILER = gcc
SRC_FILES = $(wildcard src/*.c)
OBJ_FILES = $(subst src, build, $(SRC_FILES:.c=.o))
OUTPUT = bin/liblinalg.so

.PHONY: clean, run

$(OUTPUT): $(OBJ_FILES)
	$(COMPILER) -shared $^ -o $@

build/%.o: src/%.c
	$(COMPILER) -c $^ -o $@ -I./include

run:
	./$(OUTPUT)

clean:
	rm $(OUTPUT) $(OBJ_FILES)
.PHONY: clean
CC = gcc
CFLAGS = -Werror 
EXECUTABLE = main
SOURCES = $(wildcard src/*.c)
OBJECTS=$(patsubst src/%.c, build/%.o, $(SOURCES))

$(EXECUTABLE) : $(OBJECTS)
	$(CC)  $(OBJECTS) -o bin/$@ -lm

build/%.o: src/%.c
	$(CC) -c -Wall $(CFLAGS) $< -o $@

clean:
	rm build/*.o
	rm bin/*.exe
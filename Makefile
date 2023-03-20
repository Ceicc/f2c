CC=gcc
CC_FLAGS=-Wall -Werror
PREFIX=$(HOME)/.local

all: f2c

f2c: f2c.c
	$(CC) $(CC_FLAGS) -o f2c f2c.c

install: f2c
	cp f2c $(PREFIX)/bin/f2c

uninstall:
	rm $(PREFIX)/bin/f2c

clean:
	rm f2c

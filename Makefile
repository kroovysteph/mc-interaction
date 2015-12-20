C = gcc
CFLAGS = -std=c99 -I$(IDIR)

IDIR = ./include/
SRCDIR = ./src/

SOURCES = $(SRCDIR)*.c

all: interaction run clean

interaction:
	$(CC) $(SOURCES) $(CFLAGS) -o $@

run:
	./interaction

clean:
	rm interaction

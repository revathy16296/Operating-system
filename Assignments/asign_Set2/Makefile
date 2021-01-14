CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic -pthread

output: 16_FFF.o function.o
	gcc $(CFLAGS) -o output 16_FFF.o function.o

16_FFF.o: 16_FFF.c header.h
	gcc $(CFLAGS) -c 16_FFF.c

function.o: function.c header.h
	gcc $(CFLAGS) -c function.c

.phony: clean
clean:
	rm -rf *.o
	rm -rf *.c~
	rm -rf *.h~
	rm -rf output
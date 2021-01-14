CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic

output: 09_compare.o function.o
	gcc -o output 09_compare.o function.o

09_compare.o: 09_compare.c header.h
	gcc $(CFLAGS) -c 09_compare.c

function.o: function.c header.h
	gcc $(CFLAGS) -c function.c

.phony: clean
clean:
	rm -rf *.o
	rm -rf *.c~
	rm -rf *.h~
	rm -rf output
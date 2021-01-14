CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic -pthread

output: 12_999_t.o function.o
	gcc $(CFLAGS) -o output 12_999_t.o function.o

12_999_t.o: 12_999_t.c header.h
	gcc $(CFLAGS) -c 12_999_t.c

function.o: function.c header.h
	gcc $(CFLAGS) -c function.c

.phony: clean
clean:
	rm -rf *.o
	rm -rf *.c~
	rm -rf *.h~
	rm -rf output
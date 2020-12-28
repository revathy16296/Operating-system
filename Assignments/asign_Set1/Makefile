CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic

output: 02_999.o function.o
	gcc -o output 02_999.o function.o

02_999.o: 02_999.c header.h
	gcc $(CFLAGS) -c 02_999.c

function.o: function.c header.h
	gcc $(CFLAGS) -c function.c

.phony: clean
clean:
	rm -f *.o, output, *.c~, *.h~
CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic -pthread

output: 11_arthm.o function.o
	gcc $(CFLAGS) -o output 11_arthm.o function.o

11_arthm.o: 11_arthm.c header.h
	gcc $(CFLAGS) -c 11_arthm.c

function.o: function.c header.h
	gcc $(CFLAGS) -c function.c

.phony: clean
clean:
	rm -rf *.o
	rm -rf *.c~
	rm -rf *.h~
	rm -rf output
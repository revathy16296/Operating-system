CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic

output: 03_cla.o function.o
	gcc -o output 03_cla.o function.o

03_cla.o: 03_cla.c header.h
	gcc $(CFLAGS) -c 03_cla.c

function.o: function.c header.h
	gcc $(CFLAGS) -c function.c

.phony: clean
clean:
	rm -rf *.o
	rm -rf *.c~
	rm -rf *.h~
	rm -rf output
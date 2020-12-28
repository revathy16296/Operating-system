CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic

output: main.o function.o
	gcc -o output main.o function.o

main.o: main.c header.h
	gcc $(CFLAGS) -c main.c

function.o: function.c header.h
	gcc $(CFLAGS) -c function.c
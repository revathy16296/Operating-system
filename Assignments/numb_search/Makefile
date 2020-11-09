CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic

search: main.o func.o
	gcc -o search main.o func.o

main.o: main.c header.h
	gcc $(CFLAGS) -c main.c

func.o: func.c header.h
	gcc $(CFLAGS) -c func.c
CC = gcc
CFLAGS = -Wall -std=gnu99 -pedantic

calculator: calcmain.o calcfunc.o
	gcc -o calculator calcmain.o calcfunc.o

calcmain.o: calcmain.c calchead.h
	gcc $(CFLAGS) -c calcmain.c

calcfunc.o: calcfunc.c calchead.h
	gcc $(CFLAGS) -c calcfunc.c

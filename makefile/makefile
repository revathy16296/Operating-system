CFLAGS = -std=gnu99 -pedantic -Wall
hellomake: hellomake.o hellofunc.o 
	gcc -o hellomake hellomake.o hellofunc.o

hellomake.o: hellomake.c hellomake.h
	gcc $(CFLAGS) -c hellomake.c

hellofunc.o: hellofunc.c hellomake.h
	gcc $(CFLAGS) -c hellofunc.c

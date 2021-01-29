# the shared memory example from OSC 9e Sec. 3.5.1, Fig. 3.17, 3.18

# this must use GNU Make ("make" on Linux and Mac OS X, "gmake" on Solaris)

# compiler options -- C99 with warnings
OPT_GCC = gcc -Wall -Wextra

# compiler options and libraries for Linux, Mac OS X or Solaris
ifeq ($(OSTYPE),linux)
  OPT = -D_XOPEN_SOURCE=700
  LIB = -lrt
endif
ifeq ($(OSTYPE),darwin)	# Mac OS X
  OPT = 
  LIB = 
endif
ifeq ($(OSTYPE),solaris)
  OPT = -D_XOPEN_SOURCE=600
  LIB = -lrt
endif

all: cons prod

cons: 02_shm_cons.c
	$(OPT_GCC) $(OPT) -o cons 02_shm_cons.c $(LIB)

prod: 01_shm_prod.c
	$(OPT_GCC) $(OPT) -o prod 01_shm_prod.c $(LIB)

run: cons prod
	./prod
	./cons

clean:
	rm -f cons prod
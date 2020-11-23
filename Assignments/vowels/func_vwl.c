#include "head_vwl.h"

int openPipe(int fd[2]) {

    if (pipe(fd) == -1 ) {
        printf("\nPipe not created..\n");
        return EXIT_FAILURE;
    }
}

int CheckingIfChildExist(int)

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {

    int forkID = fork();
    if (forkID != 0) {
        fork();
    }
    printf("Hello world.!, from Process ID = %d\n", getpid());
    return EXIT_SUCCESS;
}
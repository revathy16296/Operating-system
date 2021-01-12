#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    char *buffer[argc];
    for (int i = 0; i < argc; i++) {
        if (i != argc-1) {
            buffer[i] = argv[i+1];
        } else 
            break;
        printf("%s, ", buffer[i]);
    }

    return EXIT_SUCCESS;
}
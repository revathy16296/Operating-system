#include "header.h"

int main(int argc, char *argv[]) 
{
    int op_val = atoi(argv[2]);
    int len = strlen(argv[1]);

    char string[len];
    
    strcpy(string, argv[1]);
    strCompare(string, op_val, len);
        
    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int p[2], i, retval = 0;
    retval = pipe(p);
    printf("p[0] = %d & p[1] = %d\n", p[0], p[1]);
    while(1) {    
        if (retval == -1) {
            printf("Max no of pipes that can be opened concurently are %d\n", i);
            exit(1);
        }
    i++;
    }
}
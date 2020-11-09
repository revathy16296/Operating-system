#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main () {
    fork();
    fork();
    printf("inside process 1\n");
    printf("process id pid%d",getpid());
    printf("parrent process id ppid %d\n",getppid());
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main () {
    //fork();
    printf("inside process 1\n");
    printf("present process id pid: %d\n",getpid());
    printf("parrent process id ppid: %d\n",getppid());
    
    fork();
    printf("inside process 2\n");
    printf("present process id pid: %d",getpid());
    printf("parrent process id ppid: %d\n",getppid());
    
    fork();
    printf("inside process 3\n");
    printf("present process id pid: %d",getpid());
    printf("parrent process id ppid: %d\n",getppid());
    
    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MESSAGE 16

int main() 
{
    char *msg = "HelloMSIS";
    char inbuf[MESSAGE];

    int p[2], pid, i;

    pipe(p);
    pid = fork();

    if (pid > 0) {
        printf("PID = %d\n", getpid());
        close(p[0]);
        write(p[1], msg, MESSAGE);
    }
    if(pid == 0) {
        close(p[1]);
        read(p[0], inbuf, MESSAGE);
        printf("In pid = %d --> %s\n", getpid(), inbuf);
    }
    return EXIT_SUCCESS;
}
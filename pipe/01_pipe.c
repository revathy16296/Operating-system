#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fd[2];
    pipe(fd);
    printf("p[0] = %d & p[1] = %d\n", fd[0], fd[1]);
}
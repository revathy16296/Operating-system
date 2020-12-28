#include <stdio.h>
#include <stdlib.h>

char *com1[], *com2[];

int join()
{
    int p[2], status;
    switch (fork())
    {
    case -1:
        perror("ERROR");
        break;
    case 0:
        break;
    
    default:
        wait(&status);
        break;
    return status;
    }
}

int main() 
{
    char *one[3], *two[2];
    int ret;

    one[0] = "ls";
    one[1] = "-ll";
    one[2] = (char*)0; // stdout STDIN(1), STDOUT(0), STDERR(2)

    two[0] = "sort";
    two[0] = (char)0;

    ret = join(one, two);
    printf("Join returned %d\n", ret);
    return EXIT_SUCCESS;

}
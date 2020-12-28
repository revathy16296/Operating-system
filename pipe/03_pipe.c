#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MSGSIZE 16

int main ()
{
    char *msg1 = "hellMSIS#1";
    char *msg2 = "hellMSIS#2";
    char *msg3 = "hellMSIS#3";

    char inbuf[MSGSIZE];

    int p[2];
    pipe(p);

    write(p[1],msg1,MSGSIZE);
    write(p[1],msg2,MSGSIZE);
    write(p[1],msg3,MSGSIZE);

    for (int i = 0; i < 3; i++) {
        
    }
}
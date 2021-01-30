#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

void main () 
{
    int shmID, flag;
    key_t key = 1234;
    shmID = shmget(key, 10, IPC_CREAT | 0666);
    if (shmID < 0) {
        perror("shmID Failed\n");
        exit(1);
    }
    printf("Shared memory created Successfully\n");
}

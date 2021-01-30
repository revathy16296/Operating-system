#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <fcntl.h> 
#include <sys/shm.h> 
#include <sys/stat.h> 

#define MAX_L 10

const int SIZE = 4096; 
int prod(int array2[])
{
    int prod = 1;
    for(int i = 0; i < 10; i++) {
        prod = prod * array2[i];
    }
    return prod;
}

int sum(int array2[])
{
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum = sum + array2[i];
    }
    return sum;
}

int main()
{
    int    ShmID; // variable for stroing SHm id
    const char *name = "OS";  // pointer for shared memory
    pid_t  pid;
    int *ptr; 
    int array1[MAX_L];
    printf("entering the file ");
    printf("enter the elements of the array with 10 elements only ");
    for(int i = 0; i < 10 ; i++)   {
        scanf("%d",&array1[i]);
    }

    ShmID = shm_open(name, O_CREAT | O_RDWR, 0666);  //specify the permission...
     if (ShmID < 0) {
        printf("* shmget error (server) *\n");
        exit(1);
     }

  // printf("Server has received a shared memory of four integers...\n");

    /// ShmPTR = (int *) shmat(ShmID, NULL, 0);
	ftruncate(ShmID, SIZE); 
	ptr = mmap(0, SIZE, PROT_WRITE , MAP_SHARED, ShmID, 0); 
    pid = fork();
    if(pid == 0) {
        int sum1, prod1;
        sum1 = sum(array1);
        prod1 = prod(array1);

        printf("the product of the elements is %d\n",prod1);
        printf("the sum of the elements %d\n",sum1);
        ptr[0] = sum1;
        printf("shared the sum value in the shared memory\n");
    }
    else {
        wait();
        int sum2;
        float avg;
        sum2 = ptr[0];
        printf("accessing the shared memory\n");
        //printf("the sum received from shm is %d",ShmPTR[0]);
        avg = sum2/10;
        printf("the avg of the elements is %f\n",avg);
                 
        printf("the parent process has detached the shared memory\n ");
        shm_unlink(name);
        printf("the parent process has removed the shared memory...\n");
    }
}
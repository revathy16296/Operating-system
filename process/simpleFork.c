#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void swap(int *numInArray){
    int temp = *numInArray;
    *numInArray = *(numInArray+1);
    *(numInArray+1) = temp;
}

int main(int argc, int *argv[]) {

    printf("Inside Process ID %d\n", getpid());
    int num[] = {123, 321};
    printf("Before swap: num1 = %d & num2 = %d\n", num[0], num[1]);

    int forkID = fork();
    if (forkID == 0) {
        printf("\nInside Process ID %d\n", getpid());
        swap(&num);
        printf("After swap: num1 = %d & num2 = %d\n", num[0], num[1]);
    } 
    
    wait(NULL);
    
    return EXIT_SUCCESS;
}
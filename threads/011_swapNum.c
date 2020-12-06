#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *entry_Point(int *value) 
{
    printf("\nSwapping inside thread 1 :XD \n");
    
    int temp = *value; 
    *value = *(value+1);
    *(value+1) = temp;
    //printf("After swap: num1 = %d and num2 = %d\n", temp.num1, temp.num2); 
}

int main(int argc, char *argv[]) 
{  
    int nNum[2] = {123, 321};
    printf("Hello from the main thread :D \n");
    printf("Before swap: num1 = %d and num2 = %d\n", nNum[0], nNum[1]);

    pthread_t thread1;
    pthread_create(&thread1, NULL, entry_Point, &nNum);
    pthread_join(thread1, NULL);

    printf("After swap: num1 = %d and num2 = %d\n", nNum[0], nNum[1]);
    
    return EXIT_SUCCESS;
}
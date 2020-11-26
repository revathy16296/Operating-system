#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
// #define Message 85

void *entry_Point(void *value1, void *value2) {
    
    printf("\nSwapping inside thread 1 :XD \n");
    
    /*int temp = value1;
    value1 = value2;
    value1 = temp; */

    return NULL;
}

int main(int argc, char *argv[]) {
    
    int num1 = 123, num2 = 321;
    printf("Hello from the main thread :D \n");
    printf("Before swap: num1 = %d and num2 = %d\n", num1, num2);

    pthread_t thread1;
    pthread_create(&thread1, NULL, entry_Point, (&num1, &num2));
    pthread_join(thread1, NULL);

    printf("After swap: num1 = %d and num2 = %d\n", num1, num2);
    
    return EXIT_SUCCESS;
}
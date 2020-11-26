#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
// #define Message 85

void *entry_Point(void *somevalue) {
    
    printf("Hello from the thread 1 : ) \n");
    int *num = somevalue;
    printf("The value passed to thread is %d\n", *num);
    return NULL;
}

int main(int argc, char *argv[]) {
    
    printf("Hello from the main thread :D \n");
    int num = 123;

    pthread_t thread1;
    pthread_create(&thread1, NULL, entry_Point, &num);
    pthread_join(thread1, NULL);
    
    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

#define LIMIT 10

//Used for passing multiple arguments to a thread for 999 & arthmetic 
struct Passing_for_threads  
{
    int array[LIMIT];
    int array_size;
    int sum;
}; typedef struct Passing_for_threads arg_t;

//Used for passing multiple arguments to a thread for FFF problem
struct for_FFF 
{
    char string[LIMIT];
    int option;
    int length;
}; typedef struct for_FFF FFF_t;

int addition (int array[], int arr_size);
int multiplacation (int array[], int arr_size);
int subtraction (int array[], int arr_size);
int average (float sum, int arr_size);
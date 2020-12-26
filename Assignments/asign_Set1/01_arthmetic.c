#include <stdio.h>
#include <stdlib.h>

#define arr_size 10

int addition (int array[]) 
{
    int buffer = 0;
    for(int i = 0; i < arr_size; i++){
        buffer += array[i];
    }
    return buffer;
}

int multiplacation (int array[]) 
{
    int buffer = 0;
    for(int i = 0; i < arr_size; i++){
        if (i == 0) 
            buffer = array[i];
        else 
            buffer *= array[i];
    }
    return buffer;
}

int subtraction (int array[]) 
{
    int buffer = 0;
    for(int i = 0; i < arr_size; i++){
        if (i == 0) 
            buffer = array[i];
        else 
            buffer -= array[i];
    }
    return buffer;
}

int average (float sum) 
{
    float avg = sum / (float)arr_size;
    return avg;
}

int main()
{
    printf("Enter ten numbers: ");
    int array[arr_size];

    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &array[i]);
    }

    int add = addition(array);
    float avg = average(add);
    int sub = subtraction(array);
    int mul = multiplacation(array);
    

    printf("Sum of elements = %d\n", add);
    printf("average of elements = %f\n", avg);
    printf("Sub of elements = %d\n", sub);
    printf("mul of elements = %d\n", mul);
}
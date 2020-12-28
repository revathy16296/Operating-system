#include "header.h"

int main() 
{
printf("Enter ten numbers: ");
    int array[LIMIT];

    for (int i = 0; i < LIMIT; i++) {
        scanf("%d", &array[i]);
    }

    int arr_size = sizeof(array)/sizeof(array[0]);

    int add = addition(array, arr_size);
    float avg = average(add, arr_size);
    int sub = subtraction(array, arr_size);
    int mul = multiplacation(array, arr_size);
    

    printf("Sum of elements = %d\n", add);
    printf("average of elements = %f\n", avg);
    printf("Sub of elements = %d\n", sub);
    printf("mul of elements = %d\n", mul);
}
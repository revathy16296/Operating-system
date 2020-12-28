#include "header.h"

int main ()
{
    printf("Enter '999' when done entering numbers\n");
    int array[arr_size];

    for (int i = 0; i < arr_size; i++) {
        if(array[i] != 999) {
            scanf("%d", &array[i]);
            continue;
        } 
        else 
            break;
    }

    int add = addition(array);
    float avg = average(add);
    int sub = subtraction(array);
    int mul = multiplacation(array);
    

    printf("Sum of elements = %d\n", add);
    printf("average of elements = %f\n", avg);
    printf("Sub of elements = %d\n", sub);
    printf("mul of elements = %d\n", mul);

    return EXIT_SUCCESS;
}
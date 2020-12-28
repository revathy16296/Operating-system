#include "header.h"

int main (int argc, int *argv[])
{
    int arr_size = argc - 2;
    int array[arr_size];
    for (int i = 1; i <= arr_size; i++) {
        if ((atoi(argv[i]) != 999) && (i == 0)) {
            array[i] = atoi(argv[i]);
            continue;
        }
        else if ((atoi(argv[i - 1]) != 999) && (i > 0)) {
            array[i] = atoi(argv[i]);
            continue;
        }
        else {
            break;
        }
    }

    printf("arr_size = %d\n", arr_size);

    for (int j = 1; j <= arr_size; j++) {
        printf("array[%d] = %d --> argv[%d] = %d\n", j, array[j], j, atoi(argv[j]));
    }

    int add = addition(array, arr_size);
    float avg = average(add, arr_size);
    int sub = subtraction(array, arr_size);
    int mul = multiplacation(array, arr_size);
    
    printf("Sum of elements = %d\n", add);
    printf("average of elements = %f\n", avg);
    printf("Sub of elements = %d\n", sub);
    printf("mul of elements = %d\n", mul);

    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

#define limit 10

int main ()
{
    //printf("Enter ten numbers: ");
    int array[limit];

    for (int i = 0; i < limit; i++) {
        if (scanf("%d", &array[i] != 999))
		continue;
	else 
		break;
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

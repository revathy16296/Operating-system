#include "header.h"

int main ()
{
    printf("Enter '999' when done\n");
    int array[LIMIT];

    for (int i = 0; i < LIMIT; i++) {
        if ((array[i] != 999) && (i == 0)) {
            scanf("%d", &array[i]);
            continue;
        }
        else if ((array[i - 1] != 999) && (i > 0)) {
            scanf("%d", &array[i]);
            continue;
        }
	    else 
		    break;
    }

    int arr_size = 0;
    for (int j = 0; j < LIMIT; j++) {
        if (array[j] != 999) {
            arr_size++;
            continue;
        } else {
            break;
        }
        printf("%d, ", array[j]);
        printf("\n%d\n", arr_size);
    }

    int add = addition(array, arr_size);
    float avg = average(add, arr_size);
    int sub = subtraction(array, arr_size);
    int mul = multiplacation(array, arr_size);
    

    printf("Sum of elements = %d\n", add);
    printf("average of elements = %f\n", avg);
    printf("Sub of elements = %d\n", sub);
    printf("mul of elements = %d\n", mul);
}

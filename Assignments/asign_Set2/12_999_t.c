#include "header.h"

void *routine(arg_t *argt)
{
    int add = addition(argt->array, argt->array_size);
    int mul = multiplacation(argt->array, argt->array_size);
    int sub = subtraction(argt->array, argt->array_size);

    printf("Addition of elements = %d\n", add);
    printf("product of elements = %d\n", mul);
    printf("Subbtraction of elements = %d\n", sub);

    argt->sum = add;
}

int main ()
{
    printf("Enter '999' when done\n");
    arg_t args;
    int sum;

    for (int i = 0; i < LIMIT; i++) {
        if ((args.array[i] != 999) && (i == 0)) {
            scanf("%d", &args.array[i]);
            continue;
        }
        else if ((args.array[i - 1] != 999) && (i > 0)) {
            scanf("%d", &args.array[i]);
            continue;
        }
	    else 
		    break;
    }

    int arr_size = 0;
    for (int j = 0; j < LIMIT; j++) {
        if (args.array[j] != 999) {
            arr_size++;
            continue;
        } else {
            break;
        }
        printf("%d, ", args.array[j]);
        printf("\n%d\n", arr_size);
    }

    args.array_size = arr_size;

    pthread_t thread;
    pthread_create(&thread, NULL, routine, &args);
    pthread_join(thread, NULL);

    float avg = average(args.sum, args.array_size);
    printf("average of elements = %f\n", avg);

    return EXIT_SUCCESS;
}
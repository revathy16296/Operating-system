#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct parm_arr {
	int arr1[10];
	int arr2[10];
	int size_a;
	int size_b;
	int tot_size;
}; typedef struct parm_arr array;

void *replaceArray(array *array)
{	
	/*for(int i = 0; i < t_size; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}*/
	return NULL;
}

int main() 
{
	int size_a, size_b;

	printf("Enter the size of arrays a[] & b[]: ");
	scanf("%d""%d", &size_a, &size_b);

	array arr[size_a + size_b]; 
	int t_size = size_a + size_b;
	
	printf("Enter the number for a[]\n");
	for(int i = 0; i < size_a; i++) {
		scanf("%d", &arr->arr1[i]); 
	}

	printf("Enter the number for b[]\n");
	for(int j = 0; j < size_b; j++) {
		scanf("%d", &arr->arr2[j]); 
	}

	/*for(int k = 0; k < size_a; k++) { 
		printf("a[%d] = %d\n", k, arr->arr1[k]);
	}

	for(int l = 0; l < size_b; l++) { 
		printf("b[%d] = %d\n", l, arr->arr2[l]);
	}*/

	int t_size1 = sizeof(arr->arr1)/sizeof(arr->arr1[0]);
	int t_size2 = sizeof(arr->arr2)/sizeof(arr->arr2[0]);
	
	printf("size of a[] = %d\n", t_size1);
	printf("size of b[] = %d\n", t_size2);

	pthread_t thread1;
	pthread_create(&thread1, NULL, replaceArray, arr);
	pthread_join(thread1, NULL);

	return EXIT_SUCCESS;
}

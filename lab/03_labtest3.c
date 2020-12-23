#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct parm_arr 
{
	int arr1[10];
	int arr2[10];
	int Size_a;
	int Size_b;
}; typedef struct parm_arr array;

void *replaceArray_evn(array *array)
{	
	for (int i = 0; i < array->Size_b; i++) {
		if((i % 2) == 0) {
			array->arr2[i] = array->arr1[i + 1];	
		}
		printf("b[%d] = %d\n", i, array->arr2[i]);
	}
	return NULL;
}

void *replaceArray_odd(array *array)
{	
	for (int i = 0; i < array->Size_b; i++) {
		if ((i % 2) != 0) {
			array->arr1[i] = array->arr2[i + 1];
		}
		printf("a[%d] = %d\n", i, array->arr1[i]);
	}
	return NULL;
}

int main(int argc, int *argv[]) 
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

	arr->Size_a = size_a;
	arr->Size_b = size_b;	

	pthread_t thread1, thread2;

	pthread_create(&thread1, NULL, replaceArray_evn, arr);
	pthread_create(&thread2, NULL, replaceArray_odd, arr);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	return EXIT_SUCCESS;
}

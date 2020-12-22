#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct parm_arr {
	int arr1[10];
	int arr2[10];
}; typedef struct parm_arr array;

void *replaceArray(int *array)
{
	int t_size = sizeof(array)/sizeof(array[0]);
	printf("size of array = %d\n", t_size);
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
	
	int array[size_a + size_b]; 
	int t_size = size_a + size_b;
	
	for(int i = 0; i < t_size; i++) {
		scanf("%d", &array[i]); 
	}

	for(int i = 0; i < t_size; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	pthread_t thread1;
	pthread_create(&thread1, NULL, replaceArray, array);
	pthread_join(thread1, NULL);

	return EXIT_SUCCESS;
}

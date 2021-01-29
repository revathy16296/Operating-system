#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX 10

struct ArgsForThread 
{
	int fsize;
	int hsize;
	int t_sum1;
    int t_sum2;
}; 
typedef struct ArgsForThread data; 

int array[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int *function2(data *arg2)
{
	int sum2 = 0;
	for (int j = arg2->hsize; j <= arg2->fsize; j++) {
		sum2 += array[j];
	}
	printf("Total sum int t2 = %d\n", sum2);
	
	arg2->t_sum2 = sum2; 	
}

int *function1(data *arg1)
{
	int sum1 = 0;
	for (int i = 0; i < arg1->hsize; i++) {
		sum1 += array[i];
	}
	printf("Total sum in t1 = %d\n", sum1);

	arg1->t_sum1 = sum1; 	
}

int main ()
{
	int size = sizeof(array)/sizeof(int);
	int h_size = size/2;
	int *ret1;
	int *ret2;
	int tSum=0;
	
	data thr;
	thr.fsize = size;
	thr.hsize = h_size;
	
	pthread_t t1, t2;
	pthread_create(&t1, NULL, function1, &thr);
	pthread_create(&t2, NULL, function2, &thr);
	
	pthread_join(t1, &ret1);
	pthread_join(t2, &ret2);
	tSum=thr.t_sum1+thr.t_sum2;
		
	printf("Total sum = %d\n", tSum);
	
	return EXIT_SUCCESS;
	
}
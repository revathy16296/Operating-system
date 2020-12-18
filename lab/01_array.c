#include <stdio.h>
#include <stdlib.h>
#define FIRST 10
#define SECOND 5

int concatnate (int one[], int two[]) 
{	
	int buffer[15];
	int j = 0;
	for (int i = 0; i < 15; i++) {
		if(i < 10) buffer[i] = one[i];
		else if(i >= 10) { 
			buffer[i] = two[j];
       			j++;
		}		
		printf("Elements of first array = %d\n", buffer[i]);
	}
}

int main () 
{
	int first[FIRST];
	int second[SECOND];


	printf("Enter any 10 number's for first array: \n");
	for (int i = 0; i < FIRST; i++) {
		scanf("%d", &first[i]);
	}


	printf("Enter any 5 number's for second array: \n");
	for (int j = 0; j < SECOND; j++) {
		scanf("%d", &second[j]);
	}

	concatnate(first, second);

	return EXIT_SUCCESS;
}

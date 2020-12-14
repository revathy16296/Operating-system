#include <stdio.h>
#include <stdlib.h>

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
	int first[10] = {1,2,3,4,5,6,7,8,9,10};
	int second[5] = {11,12,13,14,15};

	concatnate(first, second);

	return EXIT_SUCCESS;
}

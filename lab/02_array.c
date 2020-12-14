#include <stdio.h>
#include <stdlib.h>

int insertAtFifth(int *one, int *two)
{
	int buffer[15];
	for (int i = 0; i < 15; i++) {
		if ((i < 5) || (i > 9)) {
			buffer[i] = *one;
			*one++;
		}
		else if ((i > 4) && (i < 10)) {
			buffer[i] = *two;
			*two++;	
		} 	
		printf("Inside array 1 = %d\n", buffer[i]);	
	}

}

int main () 
{
	int first[10] = {1,2,3,4,5,6,7,8,9,10};
	int second[5] = {11,12,13,14,15};

	insertAtFifth(&first, &second);

	return EXIT_SUCCESS;
}

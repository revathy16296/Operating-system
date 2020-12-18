#include <stdio.h>
#include <stdlib.h>
#define FIRST 10
#define SECOND 5

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
	int first[FIRST];
	int second[SECOND];

	printf("Enter any 10 number's to the first array: \n");
	for (int i = 0; i < FIRST; i++) {
		scanf("%d", &first[i]);
	}

	printf("Enter any 5 number's to the second array: \n");
	for (int j = 0; j < SECOND; j++) {
		scanf("%d", &second[j]);
	}

	insertAtFifth(&first, &second);

	return EXIT_SUCCESS;
}

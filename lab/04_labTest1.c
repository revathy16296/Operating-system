#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int injectArray(int a[], int b[], int size1, int size2)
{
	printf("\nInjecting b[] at (m/2)th index of a[]\n\n");
	int buffer[15];
	int s = size1/2;
	
	for (int i = 0; i < 15; i++) {
		if ((i < s) || (i > s+size2-1)) {
			buffer[i] = *a;
			*a++;
		} 
		else if ((i > s-1) && (i < (s+size2+1))){
			buffer[i] = *b;
			*b++;
		}
		printf("buffer[%d] = %d\n", i, buffer[i]);
	}	
}

int replaceArray(int a[], int b[])
{
	printf("Replacing Even index of b[] with odd index of a[]\n\n");
	for(int i = 0; i < 5; i++) {
		if ((i % 2) == 0) { 
			b[i] = a[i + 1];
		}
		printf("b[%d] = %d\n", i, b[i]);
	}
}

int main ()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[5] = {11,12,13,14,15};

	/*printf("Enter the number for first array: \n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}	

	printf("Enter the number for second array: \n");
	for (int j = 0; j < 5; j++) {
		scanf("%d", &b[j]);
	}*/

	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);

	replaceArray(a, b);
	injectArray(a, b, size1, size2);
}

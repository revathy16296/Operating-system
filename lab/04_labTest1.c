#include <stdio.h>
#include <stdlib.h>

int injectArray(int a[], int b[], int size1, int size2)
{
	printf("\nInjecting b[] at (m/2)th index of a[]\n");
	int buffer[15];
	
	printf("\nsize of a[] = %d\n", size1);
	printf("size of b[] = %d\n\n", size2);

	int t_size = size1 + size2;
	int size_1 = size1 /= 2;
	
	for (int i = 0; i < t_size; i++) {
		if ((i < size_1) || (i > (size_1+size2-1))) {
			buffer[i] = *a;
			*a++;
		} 
		else if ((i > size_1-1) && (i < (size_1+size2+1))){
			buffer[i] = *b;
			*b++;
		}
		printf("buffer[%d] = %d\n", i, buffer[i]);
	}	
}

int replaceArray(int a[], int b[], int size1, int size2)
{
	printf("\nReplacing Even index of b[] with odd index of a[]\n");
	printf("\nsize of b[] = %d\n\n", size2);

	if ((size1 < size2) && ((size1 % 2) == 0)) 
		printf("There will be garbage values in every even index from b[%d]\n", size1);
	else 
		printf("There will be garbage values in every even index from b[%d]\n", size1-1);

	for(int i = 0; i < size2; i++) {
		if (((i % 2) == 0) && (a[i] <= b[size1])){ 
			b[i] = a[i + 1];
		} 
		printf("b[%d] = %d\n", i, b[i]);
	}
}

int main ()
{
	int first, second;
	
	printf("Enter the size of arrays a[0] and b[0]: ");
	scanf("%d""%d", &first, &second);
	
	int a[first], b[second];

	printf("Enter the number for a[]: ");
	for (int i = 0; i < first; i++) {
		scanf("%d", &a[i]);
	}	

	printf("Enter the number for b[]: ");
	for (int j = 0; j < second; j++) {
		scanf("%d", &b[j]);
	}

	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);

	replaceArray(a, b, size1, size2);
	injectArray(a, b, size1, size2);

	return EXIT_SUCCESS;
}

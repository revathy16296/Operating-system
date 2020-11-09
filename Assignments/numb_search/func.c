#include "header.h"

int checkInputSize(int num) {
	if (num < 4) {
		printf("Usage: Enter the number to search for and specify the range(starting number and ending number)\n");
		exit(1);
	}
}

int Convert_To_Single_Digit(int num) {
    
    int sum = 0, mod;
    while(num > 0) {   
        mod = num % 10;    
        sum = sum + mod;    
        num = num / 10;    
    }    
    return sum;
}
int searchingForMatch(int n, int srh, int i) {

    if (n == srh) {
        printf("Found some matches for numbers = %d for the number %d\n",i, n);
        return 0;
    }       
}
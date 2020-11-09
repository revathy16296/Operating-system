#include "header.h"

int check_Input_Size(int num) {
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
int searching_For_Match(int n, int srh, int i) {

    if (n == srh) {
        printf("Found matches = %d for the number %d\n", i, n);
        return 0;
    }
    else {
        printf("No match found for the number %d\n", srh);
        exit(1);
    }
}
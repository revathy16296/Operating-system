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
int searching_For_Match(int num, int target_num, int i) {

    if (num == target_num) {
        //printf("Found some matche for numbers = %d for the number %d\n",i, num);
        printf("Found a match for number = %d\n", i);
        return 0;
    }       
}

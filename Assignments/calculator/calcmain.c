#include "calchead.h"

int main (int argSize, char * String[0]) {
    
    int op1 = atoi(String[1]);
    int op2 = atoi(String[3]);
	int opr = *(String[2]);
    int size = argSize;
    
    checkInputSize(size);
    printf("Your answer = %d", calculate(op1, opr, op2));
    return EXIT_SUCCESS;

}

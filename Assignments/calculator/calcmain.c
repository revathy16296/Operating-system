#include "calchead.h"

int main (int argSize, char * String[]) {
    
    int op1 = atoi(String[1]);
    int op2 = atoi(String[3]);
    int opr = *(String[2]);
    int size = argSize;
    
    checkInputSize(size);
    printf("Your answer = %d\n", calculate(op1, opr, op2));
    return EXIT_SUCCESS;

}

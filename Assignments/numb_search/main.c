#include "header.h"

int main (int argSize, char * String[0]) {
    
    int srh = atoi(String[1]);
    int str = atoi(String[2]);
	int end = atoi(String[3]);
    int size = argSize;
    
    checkInputSize(size);
    
    for (int i = str; i != end+1; i++) {
    
        int n = Convert_To_Single_Digit(i);        
        int m = searchingForMatch(n, srh, i);
    }
    return EXIT_SUCCESS;
}
#include "header.h"

int main (int argSize, char * String[0]) {
    
    int srh = atoi(String[1]);
    int str = atoi(String[2]);
	int end = atoi(String[3]);
    int size = argSize;
    
    check_Input_Size(size);
    
    for (int i = str; i != end+1; i++) {
    
        int n = Convert_To_Single_Digit(i);
        int m = searching_For_Match(n, srh, i);
    }
    return EXIT_SUCCESS;
}
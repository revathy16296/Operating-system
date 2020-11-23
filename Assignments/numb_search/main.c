#include "header.h"

int main (int argSize, char * String[]) {
    
    int srh = atoi(String[1]); //The number to search
    int str = atoi(String[2]); //starting range 
    int end = atoi(String[3]); //End of range
    int size = argSize;
    
    check_Input_Size(size);
    
    for (int i = str; i != end+1; i++) {
    
        int n = Convert_To_Single_Digit(i);        
        int m = searching_For_Match(n, srh, i);
    }
    return EXIT_SUCCESS;
}

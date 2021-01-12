#include <stdio.h>
#include <stdlib.h>

#define LIMIT 32

int main() 
{
    FILE *fptr;
    char c;
    int count = 0;
    int num;

    fptr = fopen("./array.txt", "r"); 
  
    if (fptr == NULL) { 
        printf("Could not open file\n"); 
        exit(EXIT_FAILURE); 
    } 
   
    for (c = fgetc(fptr); c != EOF; c = fgetc(fptr)) { 
        if (c == '\n') { 
            count++;
        }
    }  
    printf("The file has %d lines\n", count);
    int array[count];
        
    for (int i = 0; i < count; i++) {
        //if (c != '\n')
        array[i] = fscanf(fptr, "%d", &num);
    }
    fclose(fptr);

    for (int j = 0; j < count; j++) {
        printf("%d, ", array[j]);
    }
}
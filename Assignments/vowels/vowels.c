/*Implement a C Program to create a child process,
where the input is taken from CLA. 
Child process does the computation of vowels existance 
and calculates the total number of vowels. 
From the child process, send the total number to the 
parent process.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include<sys/wait.h>
#include <string.h>


int main(int argc, char * argv[]) {
    
    printf("In Parent PID: %d\n", getpid());
    char * vowel[10] = {"a","e","i","o","u"};
    char string[30];
    strcpy(string, argv[1]);
    int strLen, countOfVowel = 0;
    int ret_value = fork();
    //printf("string: %s\n", string);

    if(ret_value < 0) {
        printf("child process not created so quitting...\n");
        exit(EXIT_FAILURE);
    }
    
    else if(ret_value == 0) {
        
        printf("In child PID: %d\n", getpid());
        strLen = strlen(string);
        
        for(int i = 0; i <= strLen; i++) {
            //if vowel exists in string then add + 1 to countOfVowel 
            if (strchr(string, *vowel[i]) != NULL) {
                printf("string: %s\n", string);
                countOfVowel++; 	
            }
            printf("Total count of vowel in string %d\n", countOfVowel);
        }
    }
    
    else {
        
        wait(NULL);
        //read(&countOfVowel);
        printf("Total count of vowel in string %d\n", countOfVowel);
        printf("Back in Parrent process PID: %d\n", getpid());    
    }
}
/*Implement a C Program to create a child process,
where the input is taken from CLA. 
Child process does the computation of vowels existance 
and calculates the total number of vowels. 
From the child process, send the total number to the 
parent process.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>
#include <string.h>

int main(int argc, char * argv[]) {
    
    printf("\nIn Parent (PID=%d)\n", getpid());
    //fd[0] = read from 
    //fd[1] = write from
    int fd[2];
    if (pipe(fd) == -1 ) {
        printf("\nPipe not created..\n");
        return EXIT_FAILURE;
    }

    int ret_value = fork();
    //printf("string: %s\n", string);

    if(ret_value < 0) {
        printf("child process not created so quitting...\n");
        exit(EXIT_FAILURE);
    }
    
    else if(ret_value == 0) {
        
        close(fd[0]);
        int strLen;
        char * vowel[10] = {"a","e","i","o","u"};
        char string[30];
        strcpy(string, argv[1]);
        printf("In child (PID=%d)\n", getpid());
        strLen = strlen(string);
        
        int j;
        for(int i = 0; i < strLen; i++) {
            //if vowel exists in string then add + 1 to countOfVowel 
            if (strchr(string, *vowel[i]) != NULL) {
                //printf("string: %s\n", string);
                j++;
                printf("(IN IF LOOP)Total count of vowel in string %d\n", j); 	
            }
            printf("(IN FOR LOOP)Total count of vowel in string %d\n", j);    
        }
        //return j;
        if (write(fd[1], &j, sizeof(int)) == -1) {
                printf("not able to write..\n");
                return 1;
            }
            sleep(1);
            close(fd[1]);
        printf("(IN ELSE IF LOOP)Total count of vowel in string %d\n", j);
              
    }
    
    else {
        
        wait(NULL);
        close(fd[1]); 
        int op_of_child;
        if (read(fd[0], &op_of_child, sizeof(int)) == -1) {
            printf("not able to write..\n");
            return 1;
        }
        close(fd[0]);
        //read(&countOfVowel);
        //printf("Total count of vowel in string %d\n", countOfVowel);
        printf("\nBack in Parrent process (PID=%d)\n", getpid());
        printf("Total count of vowel in string %d\n\n", op_of_child);    
    }
    return EXIT_SUCCESS;
}
/*Implement a C program to create a child process, 
where the input is taken through CLA.
Child process does the computation of running the 'ls' 
command and check the files in the current directory. 
Possible show the number of files 
in the current directory.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char * argv[]){
   
    printf("\n In parent process %d\n", getpid());
    int ret_value = fork();
    char * str1 = argv[1];
    char * str2 = "ls";
    
    if(ret_value < 0) {
        printf("child process not created so quitting...\n");
        exit(EXIT_FAILURE);
    }
    
    else if(ret_value == 0) {
        printf("\n In child's PID=%d & parent's PID=%d\n\n", getpid(), getppid());
        if (argc > 2) {
            printf("Usage: Enter 'ls' after the command but not more than 2 arguments\n");
        }
        else {
            if ( strcmp(str1, str2) == 0) {
                execlp("/bin/ls", "ls", "-l", NULL);
                exit(EXIT_SUCCESS);
            }
            else {
                printf("Usage: Input 'ls' after the command\n");
            }
        }
    }
    
    else {
        wait(NULL);
        printf("\n\n Back in Parrent process = %d\n", getpid());    
    }
    return EXIT_SUCCESS;
}
// creating a child and parrent process

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    //getpid() = get the id of current process and getppid() = get the id parrent process id//
    printf("Parrent process id of the current process: %d\n", getppid());
    printf("The current parrent process id: %d\n",getpid());
    printf("creating a child process\n");
    int ret_value = fork();
    
    if(ret_value < 0) {
        printf("child process not created so quitting...\n");
        exit(1);
    }
    
    else if(ret_value == 0) {
        printf("Inside the child process\n");
        printf("The child id process chpid: %d\n",getpid());
        printf("The parrent pid of child process %d is %d\n",getppid(), getpid());
        sleep(20); // It will put the process to sleep mode for specified time in the argument
    }
    
    else {
        wait(); // an api call to wait till the child process complets
        printf("Parrent process\n");    
    }
}
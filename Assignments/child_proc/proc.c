#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    printf("I am Parrent process my PPID is: %d\n", getppid());
    printf("My process PID is: %d\n",getpid());
    printf("creating a child process\n"); 
    
    int ret_value1, ret_value2, ret_value3;
    ret_value1 = fork();
    
    if(ret_value1 < 0) {
        printf("\nchild process not created so quitting...\n");
        exit(1);
    }
    
    else if(ret_value1 == 0) {
        printf("\nInside the child process 1\n");
        printf("The child id process PID: %d\n",getpid());
        printf("The parent PPID is %d & child process is %d\n",getppid(), getpid());
        //sleep(3);
        ret_value2 = fork();
        
        if(ret_value2 == 0) {
            printf("\nInside the child process 2\n");
            printf("The child id process PID: %d\n",getpid());
            printf("The parent PPID is %d & child process is %d\n",getppid(), getpid());
            //sleep(4);
            ret_value3 = fork();
            
            if (ret_value3 == 0) {
                printf("\nInside the child process 3\n");
                printf("The child's process PID is: %d\n",getpid());
                printf("The parent PPID is %d & child process is %d\n",getppid(), getpid());
                //sleep(5);
                exit(1);    
            }
        }
        
    }
    
    else {
        sleep(5); 
        printf("\nNow back in Parrent process PPID=%d & current process PID=%d\n\n", getppid(), getpid());    
    }
}
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (void) {
    int ret_value, count = 3;
    ret_value1 = fork();
    for (int i = 1; i <= count; i++) {
        
        if (ret_value > 0) {
            printf("I am parrent & My pid is %d\n",  getpid());
        }
        else (ret_value == 0) {
            sleep(0.5);
            printf("I am child & My pid is %d\n", getpid());
            printf("My parent's pid is %d\n", getppid());
        }
        continue;
    } 
    return 0;
}

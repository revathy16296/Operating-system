#include "head_vwl.h"

int main(int argc, char * argv[]) {

    // Intially in parent process
    printf("\nIn Parent (PID=%d)\n", getpid());

    // A function call to open the Pipe connection 
    // and initiating file discreptor variable.
    int fd[2];
    openPipe(fd[2]);

    // Creating a child process
    int ret_value = fork();
    CheckingIfChildExist(ret_value);

}

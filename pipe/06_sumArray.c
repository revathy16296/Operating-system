#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#define MAX 10
int array[MAX] = {1,2,3,4,5,6,7,8,9,10};

int FirstHalf(int h_sze, int f_sze)
{
    int f_sum = 0;
    for(int i = 0; i < h_sze; i++) {
        f_sum += array[i];
    }
    return f_sum;
}

int SecondHalf(int h_sze, int f_sze)
{
    int s_sum = 0;
    for(int j = h_sze; j < f_sze; j++) {
        s_sum += array[j];
    }
    return s_sum;
}

int main()
{
    int fd[2];
    int pip = pipe(fd);

    /* fd[0] = read  */
    /* fd[1] = write */

    if(pip != 0) {
        printf("Pipe not created\n",);
        exit(1);
    }
    
    int Fsize = sizeof(array)/sizeof(int);
    int Hsize = Fsize/2;

    int pid = fork();
    if (pid < 0) {
        printf("Child process not created\n");
        exit(1);
    }
    
    if (pid == 0) {
        close(fd[0]);
        int Fhalf = FirstHalf(Hsize, Fsize);
        int Shalf = SecondHalf(Hsize, Fsize);
        write(fd[1], &Fhalf, sizeof(int));
        write(fd[1], &Shalf, sizeof(int));
        close(fd[1]);
        sleep(2);
    }
    else {
        wait(NULL);
        int op_fhalf, op_shalf;
        
    }
    
    return 0;
}
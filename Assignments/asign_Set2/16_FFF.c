#include "header.h"
void *routine(FFF_t *argt)
{
    strCompare(argt->string, argt->option, argt->length);
}
int main(int argc, char *argv[]) 
{
    FFF_t args;                 //struct to pass multiple arguments to a single thread 
    int op_val = atoi(argv[2]); //Converting the option value from int_string to actual int
    int len = strlen(argv[1]);  //Finding out the length of string
    
    //Putting it into argument passing struct
    args.option = op_val;       
    args.length = len;          
    strcpy(args.string, argv[1]);  
    
    //creating a thread to compare string wrt the option value
    pthread_t thread;
    pthread_create(&thread, NULL, routine, &args);
    pthread_join(thread, NULL);
        
    return EXIT_SUCCESS;
}
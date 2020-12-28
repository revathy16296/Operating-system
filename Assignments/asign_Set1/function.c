#include "header.h"

int addition (int array[]) 
{
    int buffer = 0;
    for(int i = 0; i < arr_size; i++){
        buffer += array[i];
    }
    return buffer;
}

int multiplacation (int array[]) 
{
    int buffer = 0;
    for(int i = 0; i < arr_size; i++){
        if (i == 0) 
            buffer = array[i];
        else 
            buffer *= array[i];
    }
    return buffer;
}

int subtraction (int array[]) 
{
    int buffer = 0;
    for(int i = 0; i < arr_size; i++){
        if (i == 0) 
            buffer = array[i];
        else 
            buffer -= array[i];
    }
    return buffer;
}

int average (float sum) 
{
    float avg = sum / (float)arr_size;
    return avg;
}
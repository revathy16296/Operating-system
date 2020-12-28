#include "header.h"

int addition(int array[], int size) 
{
    int buffer = 0;
    for(int i = 0; i < size; i++){
        buffer += array[i];
    }
    return buffer;
}

int multiplacation(int array[], int size) 
{
    int buffer = 0;
    for(int i = 0; i < size; i++){
        if (i == 0) 
            buffer = array[i];
        else 
            buffer *= array[i];
    }
    return buffer;
}

int subtraction(int array[], int size) 
{
    int buffer = 0;
    for(int i = 0; i < size; i++){
        if (i == 0) 
            buffer = array[i];
        else 
            buffer -= array[i];
    }
    return buffer;
}

int average(float sum, int size) 
{
    float avg = sum / (float)size;
    return avg;
}
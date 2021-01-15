///Count the number of characters in a given string without making use of the string library function. Use ‘for loop’. Get the input using ‘fgets’.
#include <stdio.h>

void main()
{
    char string[50];
    int i, length = 0;

    printf("Enter a string \n");
    gets(string);
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of a string is the number of characters in it \n");
    printf("the length of %s = %d\n", string, length);
}

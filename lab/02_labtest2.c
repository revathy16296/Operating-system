#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strrev1(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char temp;
    while (i > j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    return str;
}

int main()
{
    char s1[50];

    printf("Enter your string: ");
    fgets(s1,sizeof(s1),stdin);
    strrev1(s1);
    printf("\nYour reverse string is: %s\n", s1);
    return(0);
}


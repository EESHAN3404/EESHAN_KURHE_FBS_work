#include <stdio.h>

int mystrncmp(char *str1, char *str2, int n);

void main() 
{
    char str1[10] = "firstbit";
    char str2[10] = "firstbox";
    int n = 5;

    printf("%d", mystrncmp(str1, str2, n));
}

int mystrncmp(char *str1, char *str2, int n)
{
    int i = 0;
    while(i < n && str1[i] != '\0' && str2[i] != '\0')
	{
        if(str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    if (i < n)
        return str1[i] - str2[i];

    return 0;
}
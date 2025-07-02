#include <stdio.h>

int mystrlen(char *str);
 
void main() {
    char str[20] ="firstbit";
    printf("Length= %d",mystrlen(str));
}

int mystrlen(char *str) 
{
    int count=0;
    while(str[count] != '\0') 
	{
    count++;
    }
    return count;
}
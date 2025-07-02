#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "World";
	char str2[10];
    strcpy(str2, str);
    printf("Copied: %s",str2);
}
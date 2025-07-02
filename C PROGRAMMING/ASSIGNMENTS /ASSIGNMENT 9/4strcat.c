#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[10] = "Hello "; 
	char str2[] = "World";
    strcat(str1, str2);
    printf("Concatenated: %s", str1);
}
#include <stdio.h>
#include <string.h>

void main() 
{
    char *p = strstr("abcdef", "cd");
    printf("%s\n", p);
}
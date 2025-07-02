#include <stdio.h>
#include <string.h>

void main() 
{
    char *copy = strdup("Clone");
    printf("%s\n", copy);
    free(copy);
    
}
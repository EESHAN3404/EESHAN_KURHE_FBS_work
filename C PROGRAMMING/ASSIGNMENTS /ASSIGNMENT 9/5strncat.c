#include <stdio.h>
#include <string.h>

void main() {
    
	char str1[10] = "Hello ";
	char str2[] = "World";
    strncat(str1, str2, 3);
    printf("Concatenated: %s", str1);
}
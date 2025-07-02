#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "a,b,c", *p = strtok(str, ",");
    while(p) 
	{ 
	printf("%s\n", p); p = strtok(NULL, ","); 
	}
}
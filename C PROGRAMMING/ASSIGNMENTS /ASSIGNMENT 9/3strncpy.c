#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "EESHAN"; 
	char str2[10];
    strncpy(str2, str, 4);
    str2[4] = '\0';
    printf("Copied:%s", str2);
}
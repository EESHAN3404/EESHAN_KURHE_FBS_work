#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "Copy";
	char str2[10];
    memcpy(str2, str, strlen(str)+1);
    printf("%s", str2);
}
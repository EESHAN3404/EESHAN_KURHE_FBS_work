#include <stdio.h>
#include <string.h>

void main() {
    char *pos = strchr("hello", 'l');
    printf("%s", pos);
}
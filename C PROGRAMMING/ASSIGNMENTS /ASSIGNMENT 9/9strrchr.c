#include <stdio.h>
#include <string.h>

int main() {
    char *pos = strrchr("hello", 'l');
    printf("%s", pos);
}
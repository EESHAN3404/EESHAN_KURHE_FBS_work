#include <stdio.h>
#include <string.h>

void main() {
    char *p = strpbrk("banana", "aeiou");
    printf("%c\n", *p);
}
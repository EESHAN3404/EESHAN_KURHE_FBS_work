#include <stdio.h>
#include <string.h>

void main() {
    printf("%lu\n", strcspn("abc123", "123"));
}
#include <stdio.h>
void printNumbers1to10();
void main() {
  
    printNumbers1to10();
    return 0;
}

void printNumbers1to10() {
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
}

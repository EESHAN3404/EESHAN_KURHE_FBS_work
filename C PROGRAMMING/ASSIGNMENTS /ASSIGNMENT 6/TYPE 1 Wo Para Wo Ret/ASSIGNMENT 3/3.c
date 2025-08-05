#include <stdio.h>
void sumRange();

int main() {
    sumRange();
    return 0;
}

void sumRange() {
    int i = 1;
    int sum = 0;
    while (i <= 5) {
        sum += i;
        i++;
    }
    printf("Sum: %d\n", sum);
}


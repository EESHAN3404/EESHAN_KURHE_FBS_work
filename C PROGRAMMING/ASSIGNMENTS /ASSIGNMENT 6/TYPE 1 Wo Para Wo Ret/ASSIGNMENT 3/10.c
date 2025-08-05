#include <stdio.h>

void sumFirstLastDigit();

void main() {
    sumFirstLastDigit();
    return 0;
}

void sumFirstLastDigit() {
    int n, firstdig;
    printf("Enter the Number: ");
    scanf("%d", &n);

    int lastdig = n % 10;
    while (n > 0) {
        firstdig = n % 10;
        n = n / 10;
    }

    int sum = lastdig + firstdig;
    printf("Sum: %d\n", sum);
}

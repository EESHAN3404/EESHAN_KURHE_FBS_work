#include <stdio.h>

void printArmstrongNumbers();

void main() {
    printArmstrongNumbers();
}

void printArmstrongNumbers() {
    int s, e;
    printf("Enter the range to start: ");
    scanf("%d", &s);

    printf("Enter the range to end: ");
    scanf("%d", &e);

    printf("Armstrong numbers from %d to %d are:\n", s, e);

    for (int i = s; i <= e; i++) {
        int n = i, rem, sum = 0, temp = i;

        while (temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == n) {
            printf("%d\n", i);
        }
    }
}

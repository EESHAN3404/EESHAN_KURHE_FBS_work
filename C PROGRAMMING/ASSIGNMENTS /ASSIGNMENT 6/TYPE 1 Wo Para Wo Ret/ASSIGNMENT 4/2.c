#include <stdio.h>

void printPrimeNumbers();

void main() {
    printPrimeNumbers();
}
void printPrimeNumbers() {
    int s, e;
    printf("Enter the range to start: ");
    scanf("%d", &s);
    printf("Enter the range to end: ");
    scanf("%d", &e);

    printf("Prime numbers from %d to %d are:\n", s, e);

    for (int n = s; n <= e; n++) {
        int status = 1;
        if (n < 2) {
            status = 0;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    status = 0;
                    break;
                }
            }
        }
        if (status) {
            printf("%d\n", n);
        }
    }
}

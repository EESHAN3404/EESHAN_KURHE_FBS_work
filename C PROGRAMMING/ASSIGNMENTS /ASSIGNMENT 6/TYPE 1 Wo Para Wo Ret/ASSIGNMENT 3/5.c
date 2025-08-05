#include <stdio.h>

void checkArmstrong();

void main() {
    checkArmstrong();
    return 0;
}
void checkArmstrong() {
    int n, rem, sum = 0, temp;

    printf("Enter the Number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }

    if (temp == sum)
        printf("Number is Armstrong\n");
    else
        printf("Number is Not Armstrong\n");
}


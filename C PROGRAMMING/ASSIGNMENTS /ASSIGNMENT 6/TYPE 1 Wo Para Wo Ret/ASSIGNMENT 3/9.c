#include <stdio.h>

void checkPalindrome();

void main() {
    checkPalindrome();
    return 0;
}

void checkPalindrome() {
    int n, rem, sum = 0, temp;

    printf("Enter the Number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }

    if (temp == sum)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
}

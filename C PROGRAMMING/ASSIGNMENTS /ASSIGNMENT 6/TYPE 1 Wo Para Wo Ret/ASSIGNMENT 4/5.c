#include <stdio.h>

void menuD();

void main() {
    
    menuDrivenProgram();
}

void menuD() {
    int ch, n;
    printf("Enter your choice Press \n1. To check number is even or odd\n2. To check number is prime or not\n3. To check number is palindrome or not\n4. To check number is positive, negative or zero\n5. To reverse a number\n6. To find sum of digits\nChoice: ");
    scanf("%d", &ch);

    printf("Enter the number: ");
    scanf("%d", &n);

    if (ch == 1) {
        if (n % 2 == 0)
            printf("Number is Even\n");
        else
            printf("Number is Odd\n");
    }
    else if (ch == 2) {
        int isPrime = 1;
        if (n <= 1)
            isPrime = 0;
        else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
            printf("Number is Prime\n");
        else
            printf("Number is Not Prime\n");
    }
    else if (ch == 3) {
        int temp = n, rev = 0, rem;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (rev == n)
            printf("Number is Palindrome\n");
        else
            printf("Number is Not Palindrome\n");
    }
    else if (ch == 4) {
        if (n > 0)
            printf("Number is Positive\n");
        else if (n < 0)
            printf("Number is Negative\n");
        else
            printf("Number is Zero\n");
    }
    else if (ch == 5) {
        int rev = 0, rem, temp = n;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        printf("Reversed Number is: %d\n", rev);
    }
    else if (ch == 6) {
        int sum = 0, rem, temp = n;
        while (temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        printf("Sum of Digits: %d\n", sum);
    }
    else {
        printf("Enter Correct Choice\n");
    }
}

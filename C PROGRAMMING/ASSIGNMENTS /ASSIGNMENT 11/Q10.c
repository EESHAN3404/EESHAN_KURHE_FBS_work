//10. Write a program to check the string is palindrome or not.

#include <stdio.h>

void main()
{
    char str[100];
    int i, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);  
    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

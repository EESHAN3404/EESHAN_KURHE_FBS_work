//1. Write a program to scan string from user then scan a single character and search it in a accepted string.

#include <stdio.h>

void main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    gets(str);  
    
    printf("Enter a character to search: ");
    scanf(" %c", &ch); 
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at position %d\n", ch, i);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Character '%c' not found in the string.\n", ch);
    }
}
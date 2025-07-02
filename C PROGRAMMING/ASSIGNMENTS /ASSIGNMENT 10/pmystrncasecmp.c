#include <stdio.h>

int mystrncasecmp(char *str1, char *str2, int n);
char toLower(char ch);  

void main()
{
    char str1[10] = "First";
    char str2[10] = "fIRst";

    int result = mystrncasecmp(str1, str2, 5);

    if (result == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
}

int mystrncasecmp(char *str1, char *str2, int n)
{
    int i = 0;
    while (i < n && str1[i] != '\0' && str2[i] != '\0') {
        char c1 = toLower(str1[i]);
        char c2 = toLower(str2[i]);

        if (c1 != c2)
            return c1 - c2;

        i++;
    }

    if (i < n)
        return toLower(str1[i]) - toLower(str2[i]);

    return 0;
}

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    else
        return ch;
}


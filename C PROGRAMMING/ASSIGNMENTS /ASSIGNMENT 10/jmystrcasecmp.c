#include <stdio.h>

char upper(char); 
int mystrcasecmp(char str1[], char str2[]);

void main() 
{
    char str1[20] = "FirstBit";
    char str2[20] = "firstbit";

    int result = mystrcasecmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal");
    } else if (result < 0) {
        printf("str1 is smaller");
    } else {
        printf("str1 is greater");
    }
}

char upper(char c) 
{
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    } else {
        return c;
    }
}

int mystrcasecmp(char str1[], char str2[]) 
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        char c1 = upper(str1[i]);
        char c2 = upper(str2[i]);

        if (c1 != c2) {
            return c1 - c2;
        }
        i++;
    }

    return upper(str1[i]) - upper(str2[i]);
}

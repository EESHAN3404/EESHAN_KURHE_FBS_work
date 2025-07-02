//7. WAP to Remove the Characters of Odd Index Values in a String

#include <stdio.h>

void main()
{
    char str[100],newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (i % 2 == 0) 
		{
            newStr[j]=str[i];
            j++;
        }
    }

    newStr[j] = '\0'; 

    printf("Modified string (odd index chars removed): %s\n", newStr);
}

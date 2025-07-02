#include <stdio.h>

void main()
{
    char str[20];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for (i=0;str[i]!='\0';i++) 
	{
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
			{
            count++;
            }
    }

    printf("Number of vowels: %d\n", count);
}
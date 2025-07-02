//6. WAP to Take in a String and Replace Every Blank Space with special symbol.

#include <stdio.h>

void main()
{
    char str[100];
    char symbol;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the symbol to replace spaces with: ");
    scanf(" %c", &symbol); 

    for (i=0;str[i]!='\0';i++) 
	{
        if (str[i] == ' ')
		{
            str[i] = symbol;
        }
    }

    printf("Modified string: %s\n", str);
}

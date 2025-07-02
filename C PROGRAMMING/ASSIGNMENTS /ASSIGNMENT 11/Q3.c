//3. WAP to Remove the nth Index Character from a Non-Empty String

#include <stdio.h>

void main()
{
    char str[100];
    int i, n;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the index to remove: ");
    scanf("%d", &n);

    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    if (n < 0 || n >= length) 
	{
        printf("Invalid index!\n");
    } else 
	{
        for (i = n; i < length; i++) 
		{
            str[i] = str[i + 1];
        }

        printf("Modified string: %s\n", str);
    }
}

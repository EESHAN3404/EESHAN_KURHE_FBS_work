#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int len;
    char temp;

    printf("Enter a string: ");
    gets(str); 

    len = strlen(str);

    if (len < 2) 
	{
        printf("String is too short to swap characters.\n");
    } 
	else 
	{
        temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;

        printf("Modified string: %s\n", str);
    }
}

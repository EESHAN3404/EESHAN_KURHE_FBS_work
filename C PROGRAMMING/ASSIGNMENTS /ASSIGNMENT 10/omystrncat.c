#include <stdio.h>

char* mystrncat(char *dest, char *src, int n);

void main()
{
    char dest[20] = "first";
    char src[10] = "bit";

    mystrncat(dest, src, 2);  

    printf("Result: %s\n", dest);  \
}

char* mystrncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;
    while (dest[i] != '\0') 
	{
        i++;
    }
    while (src[j] != '\0' && j < n) 
	{
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';  

    return dest;
}

#include<stdio.h>

char* mystrrchr(char* ptr, char x);

void main()
{	
	char str[10]="firstbit";
	char ch='b';
	
	char* res = mystrrchr(str,ch);
	
	if(res!=NULL)
        printf("Char '%c' found at position: %ld\n", ch, res - str);
    else
        printf("Char not found", ch);
}
char* mystrrchr(char* ptr, char x)
{
	char* last = NULL;
    int i = 0;

    while(ptr[i] != '\0')
    {
        if(ptr[i] == x)
        {
            last = &ptr[i]; 
        }
        i++;
    }

    return last;
}
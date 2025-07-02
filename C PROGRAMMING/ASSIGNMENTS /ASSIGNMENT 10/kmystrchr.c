#include<stdio.h>

char* mystrchr(char* ptr,char x);

void main()
{	
	char str[10]="firstbit";
	char ch='b';
	
	char* res = mystrchr(str,ch);
	
	if(res!=NULL)
        printf("Char %c found ", ch);
    else
        printf("Char not found", ch);
}
char* mystrchr(char* ptr, char x)
{
	int i=0;
	while(ptr[i]!='\0')
	{
		if(ptr[i] == x)
		{
		    return &ptr[i]; 
        }
    i++;    
    }
   return NULL;
}
#include <stdio.h>

char* mystrstr(char *,char *); 

void main() 
{
    char str[20] = "firstbit";
    char sub[10] = "fi";

    char *res = mystrstr(str, sub);

    if (res!=NULL) 
	{
        printf("Substring found at position:%ld",res-str);
    } 
	else 
	{
        printf("Substring not found");
    }
}

char* mystrstr(char *mainstr,char *substr) 
{
    if (substr[0]=='\0') 
	{
        return mainstr;
    }
    for (int i = 0;mainstr[i] != '\0';i++) 
	{
        int j = 0;
        while(substr[j]!='\0' && mainstr[i+j]==substr[j]) 
		{
            j++;
        }
        if (substr[j]=='\0') {
            return &mainstr[i];
        }
    }
    return NULL;
}

#include <stdio.h>

void mystrrev(char *); 
void main() 
{
    char str[20] = "firstbit";
    mystrrev(str);
    printf("Reverse Str= %s",str);
}

void mystrrev(char *str) 
{
    int s=0;
    int e=0;
    while(str[e]!='\0') 
	{
        e++;
    }
    e--; 
    
    char temp;
	while(s<e) {
        temp= str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
}
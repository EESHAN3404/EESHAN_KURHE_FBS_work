#include <stdio.h>

void mystrncpy(char *,char *,int); 

void main() 
{
    char str1[10];
    char str2[]="firstbit";

    mystrncpy(str1,str2,6);
    str1[6] = '\0';
    printf("str1= %s",str1);
}
void mystrncpy(char *x,char *y,int n) 
{
    int i = 0;
    while(i<n && y[i]!='\0') 
	{
        x[i]=y[i];
        i++;
    }
    while(i<n) 
	{
        x[i] = '\0';
        i++;
    }
}
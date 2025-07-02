#include <stdio.h>

void mystrcpy(char *str1,char *str2);

void main() 
{
    char str1[10]="firstbit";
    char str2[10]; 
    mystrcpy(str1,str2);
    printf("str2= %s",str2);
}

void mystrcpy(char *str1,char *str2)
{
    int i=0;
    while(str1[i] != '\0') {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
}
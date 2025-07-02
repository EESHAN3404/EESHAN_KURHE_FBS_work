#include <stdio.h>

void mystrcat(char *,char *);

void main() {
    char str1[20]="first";
    char str2[]="bit";

    mystrcat(str1,str2);

    printf("Str = %s",str1);
}
void mystrcat(char *x, char *y) {
    int i=0;  
    while(x[i] != '\0') {
        i++;
    }
    int j=0;
    while(y[j] != '\0') {
        x[i]=y[j];
        i++;
        j++;
    }
    x[i] = '\0';
}
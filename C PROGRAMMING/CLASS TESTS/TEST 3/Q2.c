//Print alternate numbers in the given range.

#include<stdio.h>

void main(){

	
	int s,e;
	printf("Enter the range to start : ");
    scanf("%d", &s);

    printf("Enter the range to end : ");
    scanf("%d", &e);

    printf("Alternate Numbers :- ", s, e);
    for (int n=s;n<=e;n=n+2) 
	{
        printf("%d ",n);
    }  
}

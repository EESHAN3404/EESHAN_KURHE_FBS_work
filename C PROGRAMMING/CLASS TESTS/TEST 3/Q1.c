//Print even and odd numbers in the given range.

#include<stdio.h>

void main(){

	
	int s,e;
	printf("Enter the range to start : ");
    scanf("%d", &s);

    printf("Enter the range to end : ");
    scanf("%d", &e);

    printf("Even numbers :- ");
    for (int n=s;n<=e;n++) 
	{
        if (n%2==0) 
		{
        printf("%d ",n);
        }
    }

    printf("\nOdd Numbers :-");
    for (int n=s;n<=e;n++)
	{
        if (n%2!=0) 
		{
        printf("%d ", n);
        }
    }

}

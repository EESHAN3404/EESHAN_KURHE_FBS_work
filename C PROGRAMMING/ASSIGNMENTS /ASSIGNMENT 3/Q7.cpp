//Find factorial of given number. Input: n = 5 Output: 120

#include<stdio.h>

int main(){

	int n,fact=1;
	printf("Enter the Number:");
	scanf("%d",&n);
	
	int i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial : %d",fact);
}

//Check the given number is Palindrome number or not. Input: n = 121 Output: Palindrome

#include<stdio.h>

int main()
{
	int n,rem,sum=0,temp;
	printf("Enter the Number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a Palindrome");
	}
}


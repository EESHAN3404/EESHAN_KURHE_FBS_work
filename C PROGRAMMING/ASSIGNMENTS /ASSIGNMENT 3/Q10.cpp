//Find Sum of first and last digit of given number. Input: n = 12345 Output: 6 (1 + 5)

#include<stdio.h>

int main(){

	int n,firstdig;
	printf("Enter the Number:");
	scanf("%d",&n);
	
	int lastdig= n % 10;
	while(n>0)
	{
		firstdig=n%10;
		n=n/10;
	}
	int sum =lastdig+firstdig;
	printf("Sum : %d",sum);
}

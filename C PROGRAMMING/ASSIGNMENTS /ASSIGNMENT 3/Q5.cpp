//Check the given number is Armstrong number or not.. Input: n = 153 Output: Armstrong

#include <stdio.h>

int main(){
	
	int n,rem,sum=0,temp;
	
	printf("Enter the Number :-");
	scanf("%d", &n);
	
	temp=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=rem*rem*rem+sum;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is Not Armstrong");
	}
}

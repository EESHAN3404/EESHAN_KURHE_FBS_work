//Check the given number is Perfect number or not. Input: n = 28 Output: Perfect

#include<stdio.h>

int main(){
	
	int n,sum=0;
	
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	int i=1;
	while(i<n){
		if(n % i == 0){
			sum += i;
		}
		i++;
	}
	if(sum == n){
		printf("Number is Perfect");
	}
	else{
		printf("Number is Not Perfect");
	}
	return 0;
}

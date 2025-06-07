//Check the given number is Strong number or not. Input: n = 145 Output: Strong

#include<stdio.h>
int main(){
	
	int num,sum=0,rem;
	printf("Enter the Number : ");
	scanf("%d",&num);
	int org=num;
	
	while(num>0){
		rem=num%10;
		int fact=1;
		while(rem>=1){
		   fact=fact*rem;
		   rem--;
     	}   
	 sum=sum+fact;
	 num=num/10;
	}
	if(sum==org){
		printf("Strong");
	}
	else{
		printf("Not a Strong");
	}
	
}

//print last two digit of number

#include <stdio.h>

int main(){
	
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	int newnum=num%100;
	
	printf("Last two Digits are : %d",newnum);
}


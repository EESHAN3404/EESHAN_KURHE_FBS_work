//Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>

int main(){
	int a=10;
	int b=20;
	int temp;
	
	printf("BEFORE SWAPPING\n a=%d\n b=%d\n", a ,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("AFTER SWAPPING\n a=%d\n b=%d\n", a ,b);
	
	return 0; 
}

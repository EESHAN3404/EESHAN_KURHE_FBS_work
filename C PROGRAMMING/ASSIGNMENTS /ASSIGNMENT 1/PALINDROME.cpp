//Write a program to check given 3 digit number is pallindrome or not.

#include <stdio.h>

int main(){
	
	int num = 121; 
	int firstnum=num/100; 
	int lastnum=num%10;
	
	if(firstnum==lastnum){
		printf("Number is palindrome");
	}
	else{
		printf("Number is Not a Palindrome");
	}
	return 0;
}

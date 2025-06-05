//Write a program to find greatest of three numbers using nested if-else

#include <stdio.h>

int main(){
	int num1=10;
	int num2=20;
	int num3=30;
	
	if (num1>=num2 && num1>=num3){
		printf("Num1 is Greater");
	}
	
	else if (num2>=num1 && num2>=num3){
		printf("Num2 is Greater");
	}
	
	else{
		printf("Num3 is Greater");
	}
}

//Write a C program to convert temperature from Celsius to Fahrenheit using the formula:
//F = (C *9/5)+32

#include <stdio.h>

int main(){
	int C = 100 ;//temprature in degree
	int F = (C*9/5)+32;//temprature in fahrenheit
	
	printf("Temprature in Fahrenheit : %d" , F);
	
	return 0 ;
}

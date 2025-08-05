//Write a program to check whether a given year is a leap year.

#include<stdio.h>

void leap();

void main(){
	
	leap();
	
}

void leap(){
	int year=2024;
	
	if(year%4==0){
		printf("%d is a leap year",year);
	}
	else{
		printf("%d is not a leap year",year);
	}
}


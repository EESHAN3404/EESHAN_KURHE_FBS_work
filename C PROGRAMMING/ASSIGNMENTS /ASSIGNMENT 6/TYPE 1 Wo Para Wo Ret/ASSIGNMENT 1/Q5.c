//Write a program to check whether a person is eligible to vote (age . 18).

#include <stdio.h>

void vote();

void main(){
	
	vote();
	
}

void vote(){
	int age=21;
	
	if(age>=18){
		printf("Eligible for Voting");
	}
	else{
		printf("Not Eligible for Voting");
	}
}

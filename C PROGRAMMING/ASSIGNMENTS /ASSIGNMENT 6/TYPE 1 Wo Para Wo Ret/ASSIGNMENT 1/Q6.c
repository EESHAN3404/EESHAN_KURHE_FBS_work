//Write a program to check whether a given character is uppercase or lowercase

#include <stdio.h>

void uplow();

void main(){
	
	uplow();
	
}

void uplow(){
	char ch='A';
	
	if(ch>='A'&& ch<='Z'){
		printf("Alphabet is Uppercase");
	}
	else{
		printf("Alphabet is Lowercase");
	}
}

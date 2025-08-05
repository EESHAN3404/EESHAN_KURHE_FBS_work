//Write a program to check whether a given character is a vowel or consonant

#include <stdio.h>

void vowel();

void main(){
	
	vowel();
	
}

void vowel(){
char ch = 'b';
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("The Alphabet %c is a vowel",ch);
	}
	else{
		printf("The Alphabet %c is a consonant",ch);
	}
	
}
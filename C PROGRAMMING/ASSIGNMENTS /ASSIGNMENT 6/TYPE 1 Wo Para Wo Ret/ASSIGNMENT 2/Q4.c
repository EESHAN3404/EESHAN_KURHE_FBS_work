/*Ask the user to enter marks. Then show the result based on these rules:
If marks are more than 75 ¨ show "Distinction"
If marks are more than 65 ¨ show "First Class"
If marks are more than 55 ¨ show "Second Class"
If marks are 40 or more ¨ show "Pass Class"
If marks are less than 40 ¨ show "Fail"*/

#include <stdio.h>

void result();

int main(){
	
	result();
	
}

void result(){
	int marks=25;
	
	if (marks>=75){
		printf("Distinction");
	}
	
	else if (marks<75 && marks>=65){
		printf("First Class");
	}
	
	else if (marks<65 && marks>=55){
		printf("Second Class");	
	}
	else if (marks<55 && marks>=35){
		printf("Pass");	
	}
	else{
		printf("Fail");	
	}
}
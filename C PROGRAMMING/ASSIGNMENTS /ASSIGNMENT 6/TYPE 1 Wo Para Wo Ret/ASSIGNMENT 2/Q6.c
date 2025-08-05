//Accept a number and check if it is divisible by 3, 5,both.

#include <stdio.h>

void divisble();

void main() {
	
	divisble();
}

void divisble(){
	
	int num;
    
    printf("Enter the Number : ");
    scanf("%d",&num);
    
    if(num%5==0 && num%3==0){
    	printf("Number is Divisble By Both 3 and 5");
	}
	else if(num%5==0){
    	printf("Number is Divisble By 5");
	}
	else if(num%3==0){
    	printf("Number is Divisble By 3");
	}
	else{
    	printf("Number is Not Divisble By Both 3 and 5");
	}
}

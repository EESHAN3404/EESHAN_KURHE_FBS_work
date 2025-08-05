//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include <stdio.h>
#include <stdlib.h>

void calc();

void main(){
	
     calc();

}

void calc(){
	
	char op;
	int num1,num2,result;
	
	printf("Enter the Numbers:\n");
	scanf("%d %d",&num1,&num2);
	
	printf("Enter an operator (+,-,*,/,%%)\n");
	//fflush(stdin);//for cleaning the buffer
	scanf(" %c",&op);
	
	if(op=='+'){
		result=num1+num2;
	}
	else if(op=='-'){
		result=num1-num2;
	}
	else if(op=='*'){
		result=num1*num2;
	}
	else if(op=='/'){
		result=num1/num2;
	}
	else if(op=='%'){
		result=num1 % num2;
	}
	else{
		printf("Enter correct operator");
	}
	printf("Result : %d", result);
}
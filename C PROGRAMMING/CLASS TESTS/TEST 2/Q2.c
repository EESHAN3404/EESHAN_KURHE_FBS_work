//WAP to check program is positive , negative or zero.
#include<stdio.h>

void main(){
	int n;
	printf("Enter The Number :-");
	scanf("%d",&n);
	if(n>0){
		printf("POSITIVE NUMBER");
	}
	else if(n<0){
		printf("NEGATIVE NUMBER");;
	}
	else{
		printf("NUMBER IS ZER0");
	}
}
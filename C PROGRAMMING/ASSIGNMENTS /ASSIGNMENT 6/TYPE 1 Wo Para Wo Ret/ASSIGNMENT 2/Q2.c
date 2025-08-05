//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include <stdio.h>

void triangle();

int main(){
	
	triangle();
	
}

void triangle(){
	
	int s1 , s2 , s3;
	
	printf("Enter the sides for the traingle\n");
	
	printf("Side 1 :\n");
	scanf("%d",&s1);
	
	printf("Side 2 :\n");
	scanf("%d",&s2);
	
	printf("Side 3 :\n");
	scanf("%d",&s3);
	
	if(s1==s2&&s2==s3){
		printf("Triangle is Equilateral");
	}
	else if(s1==s2 || s2==s3 || s1==s3){
		printf("Triangle is Isosceles");
	}
	else{
		printf("Triangle is Scalene");
	}
	
}
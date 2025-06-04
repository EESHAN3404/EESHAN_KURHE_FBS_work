//Write a C program to input the length and width of a rectangle and find its perimeter

#include <stdio.h>

int main(){
	int l=10;//legth of rectangle
	int b=30;//breadth of rectangle
	
	int peri = 2*(l+b);//formula for perimeter
	
	printf("Perimeter of Rectangle is : %d", peri);
	
	return 0;
}

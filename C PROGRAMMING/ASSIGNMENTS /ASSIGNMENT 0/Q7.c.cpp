//Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>

int main(){
	int time=160;
		
	int hours=time/60;//for square
	int mins=time%60;//for cube
	
	printf("Hours = %d Hrs\n", hours);
	
	printf("Minutes = %d Mins", mins);
	
	return 0; 
}


//Write a program to convert given time in hh,mm,ss into total seconds.

#include<stdio.h>

int main(){

	printf("Enter Time");
	
	int hours;
	printf("\nHours:");
	scanf("%d",&hours);
	
	int mins;
	printf("\nMins:");
	scanf("%d",&mins);
	
	int sec;
	printf("\nSeconds :");
	scanf("%d",&sec);
	
    int totaltime = (hours*3600)+(mins*60)+sec;

	printf("\nTotal Time In Seconds is :%d", totaltime);
	
	return 0; 
}

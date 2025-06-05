//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage

#include <stdio.h>

int main(){
	int maths=100;
	int phy=89;
	int chem=91;
	int bio=95;
	int eng=99;

	int totalmks = maths+phy+chem+bio+eng;
	
	int percent = ((float)totalmks/500)*100;
	
	printf("Marks In Subjects\n");
	
	printf("MATHS = %d\n " , maths);
	printf("PHYSICS = %d\n " , phy);
	printf("CHEMISTRY = %d\n " , chem);
	printf("BIOLOGY = %d\n " , bio);
	printf("ENGLISH = %d\n " , eng);
	
	printf("TOTAL MARKS OBTAINED = %d\n " , totalmks);
	
	printf("PERCENTAGE = %d % " , percent);
	
	return 0;
}

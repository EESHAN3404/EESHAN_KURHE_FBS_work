//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively

#include <stdio.h>

int main(){
	
	int basicsalary=5000;
	int da,ta,hra,totalsalary;
	if(basicsalary<=5000){
		da=0.1*basicsalary;
		ta=0.2*basicsalary;
		hra=0.25*basicsalary;
		
		totalsalary=basicsalary+da+ta+hra;
		
		printf("Basic Salary is : %d\n",basicsalary);
		printf("Da is : %d\n",da);
		printf("Ta is : %d\n",ta);
		printf("hra is : %d\n",hra);
		printf("Total Salary is : %d\n",totalsalary);		
	}
	else{
		da=0.15*basicsalary;
		ta=0.25*basicsalary;
		hra=0.3*basicsalary;
		
		totalsalary=basicsalary+da+ta+hra;
		
		printf("Basic Salary is : %d\n",basicsalary);
		printf("Da is : %d\n",da);
		printf("Ta is : %d\n",ta);
		printf("hra is : %d\n",hra);
		printf("Total Salary is : %d\n",totalsalary);	
	}
}

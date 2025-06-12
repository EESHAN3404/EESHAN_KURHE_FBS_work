//Print strong numbers in the given range 1 to n.

#include<stdio.h>

void main(){

	
	int s,e;
	printf("Enter the range to start : ");
    scanf("%d", &s);

    printf("Enter the range to end : ");
    scanf("%d", &e);

    printf("Strong numbers from %d to %d are:\n", s, e);
    
       for (int n=s;n<=e;n++) {
        int temp=n, sum=0;

        while (temp > 0) {
            int digit = temp % 10;

            int fact = 1;
            for (int i=1;i<=digit;i++) {
                fact *= i;
            }

            sum=sum+fact;
            temp=temp/10;
        }

        if (sum == n) {
            printf("%d\n", n);
        }
    }


}
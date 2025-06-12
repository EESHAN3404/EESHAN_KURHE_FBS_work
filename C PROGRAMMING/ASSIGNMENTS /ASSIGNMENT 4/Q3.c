//Print perfect numbers in the given range 1 to n. 

#include<stdio.h>

void main(){
	
	int s,e;
	printf("Enter the range to start : ");
    scanf("%d", &s);

    printf("Enter the range to end : ");
    scanf("%d", &e);

    printf("Perfect numbers from %d to %d are:\n", s, e);
    
   for (int n=s;n<=e;n++){
        int sum=0;

        for (int i=1;i<n;i++){ 
            if (n%i == 0){
                sum=sum+i;
            }
        }

        if (sum==n){
            printf("%d\n", n);
        }
    }

}
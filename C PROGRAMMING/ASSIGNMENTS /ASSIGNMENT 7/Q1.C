//1. Find minimum and maximum number in array.

#include<stdio.h>

int main(){
	
	int arr[5];
	
	printf("Enter elements of arr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Elements of arr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
    int max=arr[0];
	int min=arr[0];
	for (int i=0;i<5;i++)
	{
       if(max<arr[i])
       max=arr[i];
       
       if(min>arr[i])
       min=arr[i];
	}
		printf("\nMaximum %d",max);
		printf("Minimum %d",min);
	
}



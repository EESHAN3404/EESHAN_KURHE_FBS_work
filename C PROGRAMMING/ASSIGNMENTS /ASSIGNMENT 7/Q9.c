//9. Reverse the given array.

#include <stdio.h>

void main(){
	
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
	printf("\nReverse of arr\n");
	for(int i=4;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	
	
}
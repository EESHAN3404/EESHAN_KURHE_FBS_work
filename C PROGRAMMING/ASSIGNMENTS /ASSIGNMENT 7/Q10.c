//10. Sort the array.

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
		printf("%d ",arr[i]);
	}
	int temp;
	for(int i=1;i<5;i++) {
        temp=arr[i];
        int j = i - 1;
        while(j>=0 &&arr[j]>temp) 
		{
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
	printf("\nSorted arr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
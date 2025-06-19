//8. Merge two arrays
#include<stdio.h>

int main(){
	
	int arr[5];
	int brr[5];
	int crr[10];
	
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
	printf("\nEnter elements of brr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
    printf("\nElements of brr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",brr[i]);
	}
	// for merging two array into single array with third arrray
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i];
		crr[i+5]= brr[i];
	}
	printf("\n Merged Array\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ", crr[i]);
	}
}

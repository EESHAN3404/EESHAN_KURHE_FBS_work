//9. Reverse the given array.

#include <stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void Reverse(int* ,int );

void main(){
	
	int arr[5];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Elements of arr\n");
	PrintArray(arr,5);
	printf("\nReverse of arr\n");
	Reverse(arr,5);
	
}

void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
void Reverse(int *ptr,int size)
{
	for(int i=4;i>=0;i--)
	{
		printf("%d ",ptr[i]);
	}
		
}
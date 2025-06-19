//1. Find minimum and maximum number in array.

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
int Maxmin(int* ,int );

void main(){
	
	int arr[5];
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Elements of arr\n");
	PrintArray(arr,5);
	Maxmin(arr,5);
	
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
		printf("%d",ptr[i]);
	}
}
int Maxmin(int *ptr,int size)
{
	int max=ptr[0];
	int min=ptr[0];
	for (int i=0;i<size;i++)
	{
       if(max<ptr[i])
       max=ptr[i];
       
       if(min>ptr[i])
       min=ptr[i];
	}
		printf("\nMaximum  %d",max);
		printf("\nMinimum  %d",min);
	
	
}
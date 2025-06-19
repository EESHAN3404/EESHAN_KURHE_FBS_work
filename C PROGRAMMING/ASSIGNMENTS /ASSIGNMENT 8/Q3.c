//3. Find sum of all numbers.

#include <stdio.h>

void StoreArray(int* ,int );
void Sum(int* ,int );

void main(){
	
	int arr[5];
	
	printf("Enter the numbers : \n");
	StoreArray(arr,5);
	Sum(arr,5);
	
}

void StoreArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void Sum(int* ptr,int size)
{
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+ptr[i];
	}
	printf("\nSum = %d",sum);
}

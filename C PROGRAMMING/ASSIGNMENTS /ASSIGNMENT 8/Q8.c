//8. Merge two arrays

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void Merge(int*,int*,int );

void main(){
	
	int arr[5];
	int brr[5];
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Enter elements of brr :\n");
	StoreArray(brr,5);
	printf("Elements of arr\n");
	PrintArray(arr,5);
	printf("\nElements of brr\n");
	PrintArray(brr,5);
	printf("\n Merged Array\n");
	Merge(arr,brr,5);
	
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
void Merge (int *ptr1,int *ptr2,int size)
{
    for(int i=0;i<size;i++)
	{
		printf("%d ",ptr1[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("%d ",ptr2[i]);
	}
		
}
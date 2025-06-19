/*7. Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}*/

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void Sum(int* ,int* ,int* ,int );

void main(){
	
	int arr[5];
	int brr[5];
	int crr[5];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Enter elements of brr :\n");
	StoreArray(brr,5);
	
	printf("Elements of arr\n");
	PrintArray(arr,5);
	printf("Elements of brr\n");
	PrintArray(brr,5);
	
	Sum(arr,brr,crr,5);
	
}

void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d ",&ptr[i]);
    }
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
void Sum(int *ptr1,int *ptr2,int *ptr3,int size)
{
	for(int i=0;i<5;i++)
	{
		ptr3[i]=ptr1[i]+ptr2[i];
	}
	printf("\nSum of Arrays\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ", ptr3[i]);
	}
}
//5. Print alternate elements in array.
#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void Alter(int* ,int );

void main(){
	
	int arr[10];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,10);
	
	printf("Elements in array \n");
	PrintArray(arr,10);
	
	printf("\nNumbers Are:\n");
	Alter(arr,10 );
	
	
	
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
void Alter(int* ptr,int size)
{
	for (int i=0;i<10;i=i+2)
	{   
       	printf("%d ",ptr[i]);
    }
}
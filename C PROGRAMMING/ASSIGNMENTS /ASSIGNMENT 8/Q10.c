//10. Sort the array.

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void SortArray(int* ,int );

void main(){
	
	int arr[5];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Elements of arr\n");
	PrintArray(arr,5);
	SortArray(arr,5);
	
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
void SortArray(int *ptr,int size)
{
	int temp;
	for(int i=1;i<size;i++) {
        temp=ptr[i];
        int j = i - 1;
        while(j>=0 &&ptr[j]>temp) 
		{
            ptr[j+1]=ptr[j];
            j--;
        }
        ptr[j+1]=temp;
    }
    printf("\nSorted arr\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}
	
}
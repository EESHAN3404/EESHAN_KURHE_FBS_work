//4. Find odd and even among the numbers.

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
int Evenodd(int* ,int );

int main(){
	
	int arr[10];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,10);
	
	printf("Elements of arr :\n");
	PrintArray(arr,10);
	
	Evenodd(arr,10);
	
	
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
int Evenodd(int* ptr,int size)
{
	printf("\nEven Numbers Are:\n");
	for (int i=0;i<size;i++)
	{
       if(ptr[i]%2==0){
       	printf("%d ",ptr[i]);
	   }
    }
    printf("\nOdd Numbers Are:\n");
    for (int i=0;i<size;i++){
	   if(ptr[i]%2!=0){
       	printf("%d ",ptr[i]);
	   }
	}
}
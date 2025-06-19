#include <stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
int Found(int* ,int );

int main(){
	
	int arr[5];
	int num,found=0;
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	
	printf("Enter number to search\n");
	scanf("%d",&num);
	Found(arr,num);
	
	
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
int Found(int* ptr,int num)
{
	int found=0;
	for(int i=0;i<5;i++)
	{
		if(ptr[i]==num){
			printf("Number %d found",num);
			found=1;
			break;
		}
		
	}
	if(found==0)
	printf("Number %d Not Found \n",num);
}
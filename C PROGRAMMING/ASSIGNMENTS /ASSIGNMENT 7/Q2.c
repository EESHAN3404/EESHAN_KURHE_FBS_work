//2. Search the given number in array.

#include <stdio.h>

int main(){
	
	int arr[5];
	int num,found=0;
	
	printf("Enter elements of arr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter number to search\n");
	scanf("%d",&num);
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]==num){
			printf("Number %d found",num);
			found=1;
			break;
		}
		
	}
	if(found==0)
	printf("Number %d Not Found \n",num);
	
}
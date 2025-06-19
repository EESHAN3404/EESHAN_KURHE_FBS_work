//4. Find odd and even among the numbers.

#include<stdio.h>

int main(){
	
	int arr[10];
	
	printf("Enter elements of arr :\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Elements of arr\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEven Numbers Are:\n");
	for (int i=0;i<10;i++)
	{
       if(arr[i]%2==0){
       	printf("%d ",arr[i]);
	   }
    }
    printf("\nOdd Numbers Are:\n");
    for (int i=0;i<10;i++){
	   if(arr[i]%2!=0){
       	printf("%d ",arr[i]);
	   }
	}
	
}
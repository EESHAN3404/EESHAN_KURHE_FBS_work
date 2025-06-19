//5. Print alternate elements in array.
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
	printf("\nNumbers Are:\n");
	for (int i=0;i<10;i=i+2)
	{   
       	printf("%d ",arr[i]);
    }
   
}
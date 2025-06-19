//6. Accept array and print only prime numbers of array.

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
int Prime(int* ,int );

void main(){
	
	int arr[10];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,10);
	printf("Elements of arr\n");
	PrintArray(arr,10);
	printf("\nPrime Numbers Are:\n");
	Prime(arr,10);
	
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
int Prime(int *ptr,int size)
{
	for (int i = 0; i < 10; i++) {   
        int status = 1;
        int num=ptr[i];

        if(num <= 1) {
            status = 0; 
        } else {
            for(int j=2; j<=num/2;j++) {
                if(num%j==0) {
                    status=0;
                    break;
                }
            }
        }

        if(status) {
            printf("%d ", num);
        }
    }	
}

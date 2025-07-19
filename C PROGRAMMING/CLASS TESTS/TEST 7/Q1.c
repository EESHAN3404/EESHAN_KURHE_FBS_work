#include <stdio.h>

void swap(int arr[], int x, int y);
void printArr(int arr[], int size);

void main()
{
	int arr[100];
	int size,x,y;
	
	printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
	printf("Enter two positions to swap (1-based index): ");
    scanf("%d %d", &x, &y);

	
	printf("Array berfore Swap : \n");
	printArr(arr,size);
	
	swap(arr,x,y);
	
	printf("Array after swapping %d and %d :\n",x,y);
	printArr(arr, size);
}

void swap(int arr[], int x, int y)
{
	int temp = arr[x-1];
	arr[x-1]=arr[y-1];
	arr[y-1]=temp;
}

void printArr(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
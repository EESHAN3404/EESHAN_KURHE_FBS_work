#include <stdio.h>

int palindrome(int arr[], int size);
void main()
{
	int arr[100];
	int size;
	
	printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
	
	if (palindrome(arr,size))
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not Palindrome\n");
	}
}

int palindrome(int arr[], int size)
{
	int start=0;
	int end=size-1;
	
	while(start<end)
	{
		if(arr[start] != arr[end])
		return 0;
		
		start++;
		end--;
	}
	return 1;
}
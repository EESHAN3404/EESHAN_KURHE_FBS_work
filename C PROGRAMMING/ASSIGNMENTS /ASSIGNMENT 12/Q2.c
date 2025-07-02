#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Found(int*, int, int);

int main() 
{
    int *arr;
    int size, num;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));

    if (arr == NULL) 
	{
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    StoreArray(arr, size);

    printf("Enter number to search: ");
    scanf("%d", &num);

    Found(arr, size, num);
    free(arr);

    return 0;
}

void StoreArray(int* ptr, int size) 
{
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) 

{
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void Found(int* ptr, int size, int num) 
{
    int found = 0;
    for (int i = 0; i < size; i++) 
	{
        if (ptr[i] == num) 
		{
            printf("Number %d found at index %d\n", num, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Number %d not found in array.\n", num);
}

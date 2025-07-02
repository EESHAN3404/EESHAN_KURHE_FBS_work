//6. Accept array and print only prime numbers of array.

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Prime(int*, int);

int main() 
{
    int *arr;
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

   
    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    StoreArray(arr, size);

    printf("Elements of array:\n");
    PrintArray(arr, size);

    printf("\nPrime Numbers Are:\n");
    Prime(arr, size);

    free(arr);  
    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void Prime(int *ptr, int size) 
{
    for (int i = 0; i < size; i++) {
        int num = ptr[i];
        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

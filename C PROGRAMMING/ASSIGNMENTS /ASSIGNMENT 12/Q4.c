#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Evenodd(int*, int);

int main() {
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

    Evenodd(arr, size);

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

void Evenodd(int* ptr, int size) {
    printf("\nEven Numbers Are:\n");
    for (int i = 0; i < size; i++) {
        if (ptr[i] % 2 == 0) {
            printf("%d ", ptr[i]);
        }
    }

    printf("\nOdd Numbers Are:\n");
    for (int i = 0; i < size; i++) {
        if (ptr[i] % 2 != 0) {
            printf("%d ", ptr[i]);
        }
    }
    printf("\n");
}

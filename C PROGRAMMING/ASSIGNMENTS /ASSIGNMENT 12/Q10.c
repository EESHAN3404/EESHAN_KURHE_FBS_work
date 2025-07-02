#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void ReverseArray(int*, int);

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

    printf("Enter elements of array:\n");
    StoreArray(arr, size);

    printf("Original array:\n");
    PrintArray(arr, size);

    ReverseArray(arr, size);

    printf("Array after in-place reverse:\n");
    PrintArray(arr, size);

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

void ReverseArray(int* ptr, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = ptr[i];
        ptr[i] = ptr[size - 1 - i];
        ptr[size - 1 - i] = temp;
    }
}

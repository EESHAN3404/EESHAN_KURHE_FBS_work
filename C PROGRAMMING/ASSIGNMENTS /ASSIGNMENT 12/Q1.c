#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Maxmin(int*, int);

void main() {
    int *arr;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return;
    }

    printf("Enter %d elements:\n", size);
    StoreArray(arr, size);

    printf("Elements of array: ");
    PrintArray(arr, size);

    Maxmin(arr, size);
    free(arr);
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

void Maxmin(int *ptr, int size) {
    int max = ptr[0];
    int min = ptr[0];

    for (int i = 1; i < size; i++) {
        if (ptr[i] > max)
            max = ptr[i];
        if (ptr[i] < min)
            min = ptr[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

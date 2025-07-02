//3. Find sum of all numbers.

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void Sum(int*, int);

void main() {
    int *arr;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter the numbers:\n");
    StoreArray(arr, size);

    Sum(arr, size);

    free(arr);
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void Sum(int* ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ptr[i];
    }
    printf("\nSum = %d\n", sum);
}


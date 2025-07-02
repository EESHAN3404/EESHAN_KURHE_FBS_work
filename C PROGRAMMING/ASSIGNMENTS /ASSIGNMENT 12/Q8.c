//8. Merge two arrays

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void MergeArrays(int*, int, int*, int, int*);

int main() {
    int *arr, *brr, *crr;
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    arr = (int*) malloc(size1 * sizeof(int));
    brr = (int*) malloc(size2 * sizeof(int));
    crr = (int*) malloc((size1 + size2) * sizeof(int));

    if (arr == NULL || brr == NULL || crr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements of first array:\n");
    StoreArray(arr, size1);

    printf("Enter elements of second array:\n");
    StoreArray(brr, size2);

    printf("First array:\n");
    PrintArray(arr, size1);

    printf("Second array:\n");
    PrintArray(brr, size2);

    MergeArrays(arr, size1, brr, size2, crr);

    printf("Merged array:\n");
    PrintArray(crr, size1 + size2);

    free(arr);
    free(brr);
    free(crr);

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

void MergeArrays(int* ptr1, int size1, int* ptr2, int size2, int* merged) {
    for (int i = 0; i < size1; i++) {
        merged[i] = ptr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = ptr2[i];
    }
}

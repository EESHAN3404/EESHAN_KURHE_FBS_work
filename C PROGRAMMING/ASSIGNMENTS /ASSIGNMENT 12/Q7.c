/*7. Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}*/

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Sum(int*, int*, int*, int);

int main() {
    int *arr, *brr, *crr;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));
    brr = (int*) malloc(size * sizeof(int));
    crr = (int*) malloc(size * sizeof(int));

    if (arr == NULL || brr == NULL || crr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements of arr:\n");
    StoreArray(arr, size);

    printf("Enter elements of brr:\n");
    StoreArray(brr, size);

    printf("Elements of arr:\n");
    PrintArray(arr, size);

    printf("Elements of brr:\n");
    PrintArray(brr, size);

    Sum(arr, brr, crr, size);

    printf("Sum of Arrays (crr):\n");
    PrintArray(crr, size);

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

void Sum(int *ptr1, int *ptr2, int *ptr3, int size) {
    for (int i = 0; i < size; i++) {
        ptr3[i] = ptr1[i] + ptr2[i];
    }
}

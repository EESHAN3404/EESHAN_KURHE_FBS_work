//6. Accept array and print only prime numbers of array.

#include<stdio.h>

int main() {
    int arr[10];

    printf("Enter elements of arr:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of arr:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nPrime Numbers Are:\n");

    for (int i = 0; i < 10; i++) {   
        int status = 1;
        int num=arr[i];

        if(num <= 1) {
            status = 0; 
        } else {
            for(int j=2; j<=num/2;j++) {
                if(num%j==0) {
                    status=0;
                    break;
                }
            }
        }

        if(status) {
            printf("%d ", num);
        }
    }
}
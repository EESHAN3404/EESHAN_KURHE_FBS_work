#include<stdio.h>

void findSum();

int main(){
    findSum();
    return 0;
}

void findSum(){
    int i = 1, sum = 0;
    while(i <= 5){
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
}

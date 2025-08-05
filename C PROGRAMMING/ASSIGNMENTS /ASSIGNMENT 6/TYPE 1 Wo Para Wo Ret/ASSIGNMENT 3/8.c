#include<stdio.h>

void checkStrong();

int main(){
    checkStrong();
    return 0;
}

void checkStrong(){
    int num, sum = 0, rem;
    printf("Enter the Number: ");
    scanf("%d", &num);
    int org = num;
    while(num > 0){
        rem = num % 10;
        int fact = 1;
        while(rem >= 1){
            fact *= rem;
            rem--;
        }
        sum += fact;
        num /= 10;
    }
    if(sum == org)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");
}

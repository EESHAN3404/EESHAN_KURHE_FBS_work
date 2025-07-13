//4. HR (id, name, salary, commission)

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int id;
    char name[20];
    float salary;
    float commission;
} HR;

void store(HR h[]) 
{
    h[0].id= 3;
    strcpy(h[0].name, "Eeshan");
    h[0].salary = 100000;
    h[0].commission = 20000;
}

void display(HR h[]) 
{
    printf("ID: %d\nName: %s\nSalary: %.2f\nCommission: %.2f\n", h[0].id, h[0].name, h[0].salary, h[0].commission);
}

void main() {
    HR h[1];
    store(h);
    display(h);
}

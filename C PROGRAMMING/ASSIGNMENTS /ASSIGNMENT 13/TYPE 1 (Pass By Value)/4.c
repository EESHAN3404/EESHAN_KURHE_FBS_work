//4. HR (id, name, salary, commission)

#include <stdio.h>

typedef struct 
{
    int id;
    char name[20];
    float salary;
    float commission;
} HR;

void store(HR h) 
{
    h.id = 101;
    strcpy(h.name, "Eeshan");
    h.salary = 30000.0;
    h.commission = 20000.0; 

    printf("Values in Store\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nCommission: %.2f\n", h.id, h.name, h.salary, h.commission);
}

void display(HR h) 
{
    printf("Values in Display\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nCommission: %.2f\n", h.id, h.name, h.salary, h.commission);
}

void main() 
{
    HR h1 = {0, "", 0.0};
    store(h1);
    display(h1);
}

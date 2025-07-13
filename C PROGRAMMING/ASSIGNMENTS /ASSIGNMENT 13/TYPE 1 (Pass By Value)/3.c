//3. Admin (id, name, salary, allowance)

#include <stdio.h>

typedef struct 
{
    int id;
    char name[20];
    float salary;
    float allowance;
} Admin;

void store(Admin a) 
{
    a.id = 101;
    strcpy(a.name, "Eeshan");
    a.salary = 30000.0;
    a.allowance = 10000.0; 

    printf("Values in Store\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nAllowance: %.2f\n", a.id, a.name, a.salary, a.allowance);
}

void display(Admin a) 
{
    printf("Values in Display\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nAllowance: %.2f\n", a.id, a.name, a.salary, a.allowance);
}

void main() 
{
    Admin a1 = {0, "", 0.0};
    store(a1);
    display(a1);
}

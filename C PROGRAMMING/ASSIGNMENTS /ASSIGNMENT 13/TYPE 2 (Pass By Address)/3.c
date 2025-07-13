//3. Admin (id, name, salary, allowance)

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int id;
    char name[20];
    float salary;
    float allowance;
} Admin;

void store(Admin a[]) 
{
    a[0].id= 3;
    strcpy(a[0].name, "Eeshan");
    a[0].salary = 100000;
    a[0].allowance = 20000;
}

void display(Admin a[]) 
{
    printf("ID: %d\nName: %s\nSalary: %.2f\nAllowance: %.2f\n", a[0].id, a[0].name, a[0].salary, a[0].allowance);
}

void main() {
    Admin a[1];
    store(a);
    display(a);
}

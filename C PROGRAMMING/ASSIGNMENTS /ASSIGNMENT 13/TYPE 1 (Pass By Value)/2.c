//2. Employee (id, name, salary)

#include <stdio.h>

typedef struct 
{
    int id;
    char name[20];
    float salary;
} Employee;

void store(Employee e) 
{
    e.id = 101;
    strcpy(e.name, "Eeshan");
    e.salary = 30000.0;

    printf("Values in Store\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
}

void display(Employee e) 
{
    printf("Values in Display\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
}

void main() 
{
    Employee e1 = {0, "", 0.0};
    store(e1);
    display(e1);
}

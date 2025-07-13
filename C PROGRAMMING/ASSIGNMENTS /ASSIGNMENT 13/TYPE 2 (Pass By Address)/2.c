//2. Employee (id, name, salary)

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int id;
    char name[20];
    float salary;
} Employee;

void store(Employee e[]) 
{
    e[0].id= 3;
    strcpy(e[0].name, "Eeshan");
    e[0].salary = 100000;
}

void display(Employee e[]) 
{
    printf("ID: %d\nName: %s\nSalary: %.2f\n", e[0].id, e[0].name, e[0].salary);
}

void main() {
    Employee e[1];
    store(e);
    display(e);
}

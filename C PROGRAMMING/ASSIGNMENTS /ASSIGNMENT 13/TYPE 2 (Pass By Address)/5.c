//5. SalesManager (id, name, salary, incentive, target)

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
} SalesManager;

void store(SalesManager m[]) 
{
    m[0].id = 3;
    strcpy(m[0].name, "Eeshan");
    m[0].salary = 45000;
    m[0].incentive = 5000;
    m[0].target = 50;
}

void display(SalesManager m[]) 
{
    printf("ID: %d\nName: %s\nSalary: %.2f\nIncentive: %.2f\nTarget: %d\n",m[0].id, m[0].name, m[0].salary, m[0].incentive, m[0].target);
}

void main() 
{
    SalesManager m[1];
    store(m);
    display(m);
}

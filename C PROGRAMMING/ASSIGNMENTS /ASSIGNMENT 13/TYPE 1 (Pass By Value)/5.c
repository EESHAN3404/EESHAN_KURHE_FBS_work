//5. SalesManager (id, name, salary, incentive, target)
#include <stdio.h>

typedef struct 
{
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
} SalesManager;

void store(SalesManager s) 
{
    s.id = 101;
    strcpy(s.name, "Eeshan");
    s.salary = 30000.0;
    s.incentive = 20000.0;
	s.target=50; 

    printf("Values in Store\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nIncentive: %.2f\nTarget: %d\n", s.id, s.name, s.salary, s.incentive, s.target);
}

void display(SalesManager s) 
{
    printf("Values in Display\n");
     printf("ID: %d\nName: %s\nSalary: %.2f\nIncentive: %.2f\nTarget: %d\n", s.id, s.name, s.salary, s.incentive, s.target);
}

void main() 
{
    SalesManager s1 = {0, "", 0.0,0.0,0};
    store(s1);
    display(s1);
}

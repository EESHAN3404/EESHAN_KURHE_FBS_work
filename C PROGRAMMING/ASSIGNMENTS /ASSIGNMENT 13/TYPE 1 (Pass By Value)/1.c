//1. Student (rollNo, name, marks)
#include <stdio.h>

typedef struct 
{
    int rollNo;
    char name[20];
    float marks;
} Student;

void store(Student s) 
{
    s.rollNo = 1;
    strcpy(s.name, "Eeshan");
    s.marks = 90.5;
    printf("Values in Store\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

void display(Student s) 
{
	printf("Values in Display \n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
void main() 
{
    Student s1 = {0, "", 0.0};  
    store(s1);     
    display(s1);  
}



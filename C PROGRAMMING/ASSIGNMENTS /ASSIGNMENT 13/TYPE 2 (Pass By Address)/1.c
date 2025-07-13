//1. Student (rollNo, name, marks)

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int rollNo;
    char name[20];
    float marks;
} Student;

void store(Student s[]) 
{
    s[0].rollNo = 3;
    strcpy(s[0].name, "Eeshan");
    s[0].marks = 90.5;
}

void display(Student s[]) 
{
    printf("Roll No: %d\nName: %s\nMarks: %.2f\n", s[0].rollNo, s[0].name, s[0].marks);
}

void main() {
    Student s[1];
    store(s);
    display(s);
}

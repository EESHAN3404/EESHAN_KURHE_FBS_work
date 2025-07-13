//8. Distance ( feet, inch)

#include <stdio.h>

typedef struct 
{
    int feet;
    int inch;
} Distance;

void store(Distance d[]) 
{
    d[0].feet = 5;
    d[0].inch = 8;
}

void display(Distance d[]) 
{
    printf("Distance: %d feet %d inches\n", d[0].feet, d[0].inch);
}

void main() 
{
    Distance d[1];
    store(d);
    display(d);
}

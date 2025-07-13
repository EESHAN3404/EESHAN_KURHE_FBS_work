//8. Distance ( feet, inch)

#include <stdio.h>

typedef struct 
{
    int feet;
    int inch;
} Distance;

void store(Distance d) 
{
    d.feet = 5;
    d.inch = 8;

    printf("Values in Store\n");
    printf("Distance: %d feet %d inches\n", d.feet, d.inch);
}

void display(Distance d) 
{
    printf("Values in Display\n");
    printf("Distance: %d feet %d inches\n", d.feet, d.inch);
}

void main() 
{
    Distance d1 = {0, 0};
    store(d1);
    display(d1);
}

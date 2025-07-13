//9. Complex (real, imaginary)

#include <stdio.h>

typedef struct 
{
    float real;
    float imaginary;
} Complex;

void store(Complex c) 
{
    c.real = 4.5;
    c.imaginary = 3.2;

    printf("Values in Store\n");
    printf("Complex: %.2f + %.2fi\n", c.real, c.imaginary);
}

void display(Complex c) 
{
    printf("Values in Display\n");
    printf("Complex: %.2f + %.2fi\n", c.real, c.imaginary);
}

void main() 
{
    Complex c1 = {0, 0};
    store(c1);
    display(c1);
}

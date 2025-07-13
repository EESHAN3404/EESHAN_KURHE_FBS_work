//9. Complex (real, imaginary)

#include <stdio.h>

typedef struct 
{
    float real;
    float imaginary;
} Complex;

void store(Complex c[]) 
{
    c[0].real = 4.5;
    c[0].imaginary = 3.2;
}

void display(Complex c[]) 
{
    printf("Complex Number: %.2f + %.2fi\n", c[0].real, c[0].imaginary);
}

void main() 
{
    Complex c[1];
    store(c);
    display(c);
}

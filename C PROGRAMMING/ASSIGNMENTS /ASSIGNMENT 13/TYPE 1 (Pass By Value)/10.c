//10. Product (id, name, quantity, price)

#include <stdio.h>

typedef struct 
{
    int id;
    char name[20];
    int quantity;
    float price;
} Product;

void store(Product p) 
{
    p.id = 101;
    strcpy(p.name, "Laptop");
    p.quantity = 100;
    p.price = 1500000;

    printf("Values in Store\n");
    printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", p.id, p.name, p.quantity, p.price);
}

void display(Product p) 
{
    printf("Values in Display\n");
    printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", p.id, p.name, p.quantity, p.price);
}

void main() 
{
    Product p1 = {0, "", 0,0.0};
    store(p1);
    display(p1);
}

//10. Product (id, name, quantity, price)

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int id;
    char name[20];
    int quantity;
    float price;
} Product;

void store(Product p[]) 
{
    p[0].id = 501;
    strcpy(p[0].name, "Laptop");
    p[0].quantity = 100;
    p[0].price = 100000;
}

void display(Product p[]) 
{
    printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", p[0].id, p[0].name, p[0].quantity, p[0].price);
}

void main() 
{
    Product p[1];
    store(p);
    display(p);
}

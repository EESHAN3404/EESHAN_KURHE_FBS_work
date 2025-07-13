//6. Date (date, month, year)

#include <stdio.h>

typedef struct 
{
    int date;
    int month;
    int year;
} Date;

void store(Date d) 
{
    d.date = 13;
    d.month = 7;
    d.year = 2025;

    printf("Values in Store\n");
    printf("Date: %d/%d/%d\n", d.date, d.month, d.year);
}

void display(Date d) {
    printf("Values in Display\n");
    printf("Date: %d/%d/%d\n", d.date, d.month, d.year);
}

void main() {
    Date d1 = {0, 0, 0};
    store(d1);
    display(d1);
}

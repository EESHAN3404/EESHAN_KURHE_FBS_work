//6. Date (date, month, year)

#include <stdio.h>

typedef struct
{
    int date;
    int month;
    int year;
} Date;

void store(Date d[]) 
{
    d[0].date = 12;
    d[0].month = 7;
    d[0].year = 2025;
}

void display(Date d[]) 
{
	printf("\nDate: %d/%d/%d\n", d[0].date, d[0].month, d[0].year);
}

void main() 
{
	Date d[1];
    store(d);
    display(d);
}

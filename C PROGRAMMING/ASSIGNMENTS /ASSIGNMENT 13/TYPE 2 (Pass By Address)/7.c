//7. Time (hour, min, sec)

#include <stdio.h>

typedef struct 
{
    int hour;
    int min;
    int sec;
} Time;

void store(Time t[]) 
{
    t[0].hour = 10;
    t[0].min = 30;
    t[0].sec = 45;
}

void display(Time t[]) 
{
    printf("\nTime: %d hrs: %d mins: %d secs\n", t[0].hour, t[0].min, t[0].sec);
}

void main() 
{
    Time t[1];
    store(t);
    display(t);
}

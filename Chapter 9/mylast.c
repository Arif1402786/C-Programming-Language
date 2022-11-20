#include <stdio.h>

typedef struct TimeStamp
{
    int year;
    int month;
    int day;
    int hours;
    int mins;
    int second;
} TimeStamp;

void show(TimeStamp t1, TimeStamp t2)
{
    printf("Time Stamp T1 is  %d-%d-%d  %d:%d:%d\n", t1.year, t1.month, t1.day, t1.hours, t1.mins, t1.second);
    printf("Time Stamp T2 is  %d-%d-%d  %d:%d:%d\n", t2.year, t2.month, t2.day, t2.hours, t2.mins, t2.second);
}
int TimeStampcmp(TimeStamp t1, TimeStamp t2)
{
    if (t1.year > t2.year)
    {
        return 1;
    }
     if (t1.year < t2.year)
    {
        return -1;
    }
 if (t1.month > t2.month)
    {
        return 1;
    }
     if (t1.month < t2.month)
    {
        return -1;
    }
     if (t1.day > t2.day)
    {
        return 1;
    }
     if (t1.day < t2.day)
    {
        return -1;
    }
     if (t1.hours > t2.hours)
    {
        return 1;
    }
     if (t1.hours < t2.hours)
    {
        return -1;
    }
     if (t1.mins > t2.mins)
    {
        return 1;
    }
       if (t1.mins < t2.mins)
    {
        return -1;
    }
        if (t1.second > t2.second)
    {
        return 1;
    }
        if (t1.second < t2.second)
    {
        return -1;
    }
    else{
        return 0;
    }

    
}

int main()
{

    TimeStamp t1, t2;
    t1.year = 2000;
    t2.year = 2000;
    t1.month = 11;
    t2.month = 11;
    t1.day = 30;
    t2.day = 30;
    t1.hours = 11;
    t2.hours = 11;
    t1.mins = 45;
    t2.mins = 45;
    t1.second = 50;
    t2.second = 50;
    show(t1, t2);
int c = TimeStampcmp(t1,t2);
printf("Time Stamp Comparison Gives: %d\n",c);

    return 0;
}
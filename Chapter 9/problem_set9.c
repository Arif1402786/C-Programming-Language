#include <stdio.h>

typedef struct Date{
int date;
int month;
int year;
}Date;

void display(Date d){
    printf("The Date Is %d/%d/%d\n", d.date,d.month, d.year);
}

int datecmp(Date d1, Date d2){
//Make decision on the basis of Year Comparison
if(d1.year>d2.year){
    return 1;
}
if(d1.year<d2.year){
    return -1;
}

//Make decision on the basis of Month Comparison

if(d1.month>d2.month){
    return 1;
}
if(d1.month<d2.month){
    return -1;

//Make decision on the basis of Date Comparison

}if(d1.date>d2.date){
    return 1;
}
if(d1.date<d2.date){
    return -1;
}
    return 0;
}


int main(){
   Date d1 = {8, 3 , 1996};
   Date d2 = {14, 2, 2000};
display(d1);
display(d2);
 int a = datecmp(d1,d2);
 printf("Date comparison Return = %d\n",a);
    return 0;
}

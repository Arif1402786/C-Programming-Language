#include <stdio.h>

int main(){
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    if(year%4==0 &year%100!=0 || year%400==0)
    {
        printf("Given year is the Leap Year\n");

    }
    else 
    {
        printf("Given Year is not the Leap year\n");
    }
    return 0;
}
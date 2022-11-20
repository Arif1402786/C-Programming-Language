#include <stdio.h>
//leap year is exactly divisible by 4 except for century years.
int main(){
    int year;
    printf("Enter your Year\n");
    scanf("%d", &year);
if((year%4==0 && year%100!=0) || year%400==0)
{
    printf("entered year is a leap year\n");
}
else {
    printf("entered year is not a leap year\n");

}
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 4;
    // int b =4.5; // not recommended coz 4.5 is not an integer
    float b = 4.5;
    char c = 'u';
    int d = 45;
    int e = 45 + 4;
    printf(" the value of a is %d \n", a);
    printf(" the value of b is %f \n", b);
    printf(" the value of c is %c \n", c);
    printf(" the sum of a and d is %d \n", a + d);
       printf(" the difference of a and d is %d \n", a - d);
    printf(" the sum of a and d is %d \n", e);
    return 0;
}
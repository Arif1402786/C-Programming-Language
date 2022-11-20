#include <stdio.h>
#include <math.h>

int main()
{
     int a = 4;
     int b = 9;
     printf("the value of a + b is %d\n", a + b);
     printf("the value of a-b is %d\n", a - b);
     printf("the value of a*b is %d\n", a * b);
     printf("the value of a / b is %d\n", a / b);

     int z;
     z = b * a; // legal
     // b*a = z  illegal
     printf("the value of z is %d\n", z);

     printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
     printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2); // numerator sign takes into consideration
     printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);

     // no operator is assumed to be present
     // printf("the value of 4 * 5 is is %d\n", 45; will not give 20
     printf("the value of 4 * 5 is is %d\n", 4 * 5);

     // no operator to perform exponention in CS
     // printf("the value of 4 ^ 5 is %d\n", 4^5); not applicable
     // printf("the value of 4 ^ 5 is %d\n", (4)*(5)); will not give the result
     printf("the value of 4^5 is %f\n", pow(4, 5));
     //%f coz it gives double return and include math.h
     printf("the value of 5 + 5 is %d\n", 5 + 5);
     printf("the value of 5 + 5.6 is %f\n", 5 + 5.6);
     printf("the value of 5/2 is %d\n", 5 / 2); // coz its an integer operation
     printf("the value of 5.0/2 is %f\n", 5.0 / 2);
     printf("the value of 2/5 is %d\n", 2 / 5);
     printf("the value of 2.0/5 is %f\n", 2.0 / 5);

     int k = 3.0 / 9;
     printf("the value of k is %d\n", k);
     printf("the value of k is %f\n", k);

     return 0;
}
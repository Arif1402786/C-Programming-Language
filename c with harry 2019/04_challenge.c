#include <stdio.h>
int add(int *a, int *b)
{
    *a = *a + *b;
    return *a;
}

int sub(int *a, int *b)
{
    *a = (*a - *b) - *b;
    return *a;
}

int main()
{
    int a = 6;
    int b = 4;
    printf("The value of a and b before running the function are %d and %d respectively.\n", a, b);
    int c = add(&a, &b);
    int d = sub(&a, &b);
    printf("The value of a and b after running the function are %d and %d respectively.\n", c, d);
    return 0;
}
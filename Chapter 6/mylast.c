#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 4, y = 6;
    printf("THE value of x and y before calling the function are %d and %d respectively\n", x, y);
    swap(&x, &y);
    printf("THE value of x and y after calling the function are %d and %d respectively\n", x, y);

    return 0;
}
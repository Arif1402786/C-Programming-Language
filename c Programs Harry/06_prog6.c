// Write a program to Reverse a Number

#include <stdio.h>

int main()
{
    int num;
    int i = 0;
    int reverse = 0;
    int remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num)
    {
        remainder = (num % 10);
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("%d\n", reverse);
    return 0;
}

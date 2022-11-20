// # write a program to counts digit in an integer

#include <stdio.h>

int countDigit(int num)
{
    int count=0;
    while (num)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter the number to count its Digit: ");
    scanf("%d", &num);
    int x = countDigit(num);
    printf("The number of Digits in the Integer is: %d\n", x);
    return 0;
}

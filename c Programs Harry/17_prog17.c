// Write a Program to calculate the power of a Number

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int power;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("Enter the Power: ");
    scanf("%d", &power);
    long long int result = 1;
    for (int i = 1; i <= power; i++)
    {
        result *= num;
    }
    printf("The value of %d^%d using loops is: %lld\n",num,power, result);
    printf("The value of %d^%d using pow function is: %.1f\n",num,power, pow(num,power));

    return 0;
}
// Write a program to find the sum of first 'n' numbers.
#include <stdio.h>

int sumOfNum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num + sumOfNum(num - 1);
    }
}

int main()
{
    int num;
    int sum = 0;
    printf("Enter the last natural number you want the sum of: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first %d Natural numbers using iterative approach is %d\n", num, sum);
    int x = sumOfNum(num);
    printf("The sum of first %d Natural numbers using Recursive approach approach is %d\n",num, x);

    return 0;
}

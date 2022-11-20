// write a program to print Prime Numbers in a given range

#include <stdio.h>

int isPrime(int num)
{
    int prime = 1;
    for(int j = 2;j<num;j++)
    {
        if(num%j==0)
        {
            prime = 0;
        }
    }
    return prime;
}

int main()
{
    int low, up;
    printf("Enter the lower limit: ");
    scanf("%d", &low);
    printf("Enter the upper limit: ");
    scanf("%d", &up);
    printf("Prime Numbers Between %d and %d are: \n",low,up);
    for(int i=low;i<=up;i++)
    {
        if(isPrime(i))
        {
            printf("%d  ",i);
        }
    }
    return 0;
}
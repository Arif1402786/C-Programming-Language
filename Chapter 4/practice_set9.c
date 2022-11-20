#include <stdio.h>
// Finding Prime Number using For Loop

int main()
{
    // not the best way to solve this problem.
    // i did not understand this program.
    int n = 9, prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("this is not a prime number\n");
    }
    else
    {
        printf("this is a prime number\n");
    }
    return 0;
}
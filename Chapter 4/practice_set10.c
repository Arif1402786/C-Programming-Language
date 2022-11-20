#include <stdio.h>
// finding Prime Number using Do While loop
int main()
{
    int i = 2;
    int prime = 1;
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    do
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }while(i<num);
    if (prime)
    {
        printf("Given number is Prime number\n");
    }
    else
    {
        printf("GIven number is not Prime Number\n");
    }

    return 0;
}

// Finding Prime Number using While Loop
#include <stdio.h>

int main()
{
    int i = 2;
    int prime = 1;
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (i < num)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }
    if (prime)
    {
        printf("Given number is Prime number\n");
    }
    else
    {
        printf("GIven number is not Prime Number\n");
    }

    return 0;
}
// // # write a program to find whether a number is prime or not
#include <stdio.h>

int main(){
    int n,i,prime = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        prime = 1;
    }
    for(i=2;i<=(n/2);++i)
    {
        if(n%i==0)
        {
            prime = 1;
            break;
        }
    }
    if(prime==0)
    {
        printf("Given number is a Prime Number\n");
    }
    else
    {
        printf("Given Number is not a Prime Number\n");
    }
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int num, prime = 0;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     if (num == 0 || num == 1)
//     {
//         prime = 1;
//     }
//     for (int i = 2; i <= (num / 2); ++i)
//     {
//         if (num % i == 0)
//         {
//             prime = 1;
//             break;
//         }
//     }
//     if (prime == 0)
//     {
//         printf("Given Number is a prime Number\n");
//     }
//     else
//     {
//         printf("Given Number is not a prime Number\n");
//     }
//     return 0;
// }
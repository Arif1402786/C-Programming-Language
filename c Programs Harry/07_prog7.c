// Write a program to find its Factorial
// 1. iterative Process
// #include <stdio.h>

// int main()
// {
//     int num;
//     int fact = 1;
//     printf("Enter the numbwer to find its factorial: ");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         fact *= i;
//     }
//     printf("%d! = %d\n", num, fact);

//     return 0;
// }

// 2. Recursice Process
#include <stdio.h>

int fact(int num)
{
    if(num==1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }

}

int main(){
    int num;
    printf("Enter the numbwer to find its factorial: ");
    scanf("%d", &num);
    int x = fact(num);
    printf("%d! = %d\n", num, fact(num));
    return 0;
}
// For Finding the element in the Fibonacci Series

// fib(n) = fib(n-1)+fib(n-2)
// fib(1) = 0
// fib(2) = 1  
// For Finding Fibonacci Series


// #include <stdio.h>

// int fib(int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     printf("The %d element of the Fibonacci Series is %d\n", num, fib(num));
//     return 0;
// }

//-------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){
    int n ,  a=0,  b=1, c;
    printf("Enter Limit\n");
    scanf("%d",&n);
    printf("Fibonacci series for %d element: \n-");
    for (int i=1;i<= n;i++){
        printf("\t %d", a);
         c= a + b;
          a=b;
          b=c;

    }
    printf("\n");
    return 0;
}


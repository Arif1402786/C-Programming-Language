#include <stdio.h>
int factorial(int x); // function prototype

int main(){
    int a;
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("the value of the factorial %d is %d\n", a , factorial(a)); // function calling
    return 0;
}
//function definition

int factorial(int x)
{
    if (x == 1 || x == 0) // base condition
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
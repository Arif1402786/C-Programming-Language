//no need to learn these things
#include <stdio.h>

int sum;

// int myfunc(int a, int b)
// {
//     // auto int sum;
//     sum = a+b;
//     return sum;
// }

extern int sum = 98;
int main()
{
    // Declaration and Definition
    // Declaration: Telling the compiler about the variable(No space Reserved)
    // Definition: Declaration +  space reservation
    //  int sum = myfunc(3,5);
    printf("The sum is %d\n", sum); // sum is a local variable

    return 0;
}
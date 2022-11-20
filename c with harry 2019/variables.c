// Variables
#include <stdio.h>

int b = 34; //  this is a global variable since it is declared outside main() function


int ret()
{
    return 9*7;
}
int func1(int b1)
{
    // static int mymvar = ret; -->wont work because because it needs a constant value 
    static int mymvar = 98;

    printf("The value of myvar is %d\n", mymvar);
    mymvar++;
    // int loc = 89;// it is a local variable as it cannot be accessed outside this function
    //  printf("The addrress of b1 inside the func1 id %d\n", b);

    // printf("The addrress of b inside the function id %d\n", &b);
    return b1 + mymvar;
}

int main()
{
    int b = 344;
    // printf("The addrress of b inside the function id %d\n", &b);

    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d\n", val);
    return 0;
}
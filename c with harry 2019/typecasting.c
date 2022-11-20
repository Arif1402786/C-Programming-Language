#include <stdio.h>
//typecasting syntax
//(type) value
int main()
{
    int a = 54;
    float b = (float)90/8;

    printf("hello world\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of b is %d\n", (int)b);

    return 0;
}
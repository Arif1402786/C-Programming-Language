// function pointer is used for call back function
#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
float avg(float a, float b)
{
    return (a + b)/2;
}
void greetHelloandexecute(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5,7));
}
void greetGMandexecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5,7));
}
void greetGEandexecute(float (*ptr)(float, float))
{
    printf("Good Evening User\n");
    printf("The average of 3 and 6 is %f\n",ptr(3,6));
}
void greetGAandexecute(float (*ptr)(float, float))
{
    printf("Good Afternoon User\n");
    printf("The sum of 2 and 7 is %f\n", ptr(2,7));
}
int main()
{

    int (*ptr)(int, int);
    float (*ptr2)(float, float);
ptr = sum;//doesnt matter whether you put & or not
greetGMandexecute(ptr);
greetHelloandexecute(ptr);
greetGEandexecute(ptr2);
greetGAandexecute(ptr2);
    return 0;
}
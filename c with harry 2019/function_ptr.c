//function ptr is used as callback functino
//used to pass a function to a function
#include <stdio.h>
int Sum(int a, int b)
{
    return a+b;
}

float sub(int a, int b)
{
    return a-b;
}
int main(){
    printf("the sum of 1 and 2 is %d\n",Sum(1,2));// testing the function
    int (*fptr)(int, int);// declaring a function pointer
fptr = &Sum;// creating a function pointer
int d = (*fptr)(4,6);// Dereferencing the function pointer
printf("the value of d is %d\n",d);
int (*ptr)(int,int);
ptr = &sub;
int a = (*ptr)(1,4);
printf("The value of a is %d\n", a);
    return 0;
}
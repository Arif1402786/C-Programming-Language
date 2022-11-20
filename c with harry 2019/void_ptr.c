#include <stdio.h>
//Void Pointer
//General purpose pointer that can be type casted and can be deferenced
int main(){
    int a = 56;
    float b = 7.8;
    void *ptr;
    ptr = &a;
    // printf("The value of by dereferencing the ptr variable is %d\n", *ptr);//Not possible as ptr is a void pointer and it contains no data type pointer
    printf("The value of a by dereferencing the ptr variable is %d\n",*((int *)ptr));// will work because of type casting
    ptr = &b;
    printf("The value of b by dereferencing the ptr variable is %f\n",*((float *)ptr));// will work because of type casting
    return 0;
}
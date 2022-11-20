#include <stdio.h>

int main(){
    int a = 3;
    int *ptr;
    ptr = &a;

 printf("the address of variable a is %u\n",&a);   
 printf("the value of variable a is %d\n",*ptr);   

    return 0;
}

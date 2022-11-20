#include <stdio.h>
void printAdd( int a){
    printf("the address of variable a is %u\n", &a);
}
int main(){
    int i = 4;
    printf("the value of variable i is %u\n", i);
   
    printf("the address of variable i is %u\n", &i);
    printAdd(i);// the address wont be same as the function contain the xerox copy of i
    // and the address of original and xerox are different
    printf("the address of variable i is %u\n", &i);

    return 0;
}
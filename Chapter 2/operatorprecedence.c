#include <stdio.h>

int main(){
    int x = 3;
    int y = 6;
    printf("the value of 3x-6y is %d\n", 3*x - 6*y);
    printf("the value of 3(x-6y) is %d\n", 3*(x - 6*y));
    // answer will be acc to left to right associativity
    //6 * 6/3*3 will not give the result
    printf("the value of 6*y/3*x is %d\n",  6 * y / 3 * x);

    return 0;
}
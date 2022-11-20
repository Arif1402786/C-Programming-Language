#include <stdio.h>
int sum(int a, int b);
int main(){
    int x = 4, y = 7;
    printf("the value of x and y is %d and %d\n",x,y);
    printf("the value of 4+7 is %d\n", sum(x,y));
    printf("the value of x and y after function call is %d and %d\n",x,y);
    return 0;
}
int sum(int a, int b){
    int c;
    c = a+b;
    a + 3345;
    b = 5836;
    return c;
}

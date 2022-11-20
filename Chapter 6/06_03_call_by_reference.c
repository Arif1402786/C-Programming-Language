#include <stdio.h>
// void wrong_swap(int a, int b);
 void swap(int *a, int *b);

int main(){
    int x = 3, y = 4;
    printf("the value of x and y before swap are %d and %d respectively\n", x,y);
    swap(&x, &y); // will  work due to call by reference
    //wrong_swap(x, y); // will not work due to call by value

    printf("the value of x and y after swap are %d and %d respectively\n", x,y);

    return 0;
}
// void wrong_swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
#include <stdio.h>
// sum is a function whick takes value of a and b and returns as an output

int sum(int a, int b); // here a and b are monomers

int main(){
    int c;
    c = sum(2,5); // 2 and 5 are arguments
    printf("the value of c is %d\n", c);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}
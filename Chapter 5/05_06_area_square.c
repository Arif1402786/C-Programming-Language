#include <stdio.h>
#include <math.h>

int area(int x);

int main(){
    int side;
    printf("Enter the value of side of square\n");
    scanf("%d",&side);
    printf("required area of the square is %d sq.m\n", area(side));
    return 0;
}
int area(int x){
float c;
c = pow(x,2);
return c;    
}

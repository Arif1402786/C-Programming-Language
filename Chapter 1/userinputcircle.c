#include <stdio.h>
#include <math.h>

int main(){
    int radius;
    float pi;
    printf("enter the radius of the circle\n");
    scanf("%d", &radius);
    printf("enter the value of pi\n");
    scanf("%f", &pi);
    printf("the area of circle is %f", radius*radius*pi);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);

    return sqrt(a);
}

float areaofCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}

int main()
{

    int x1, x2, y1, y2;
    float dst;
    printf("Enter the value of x1: ");
    scanf("%s", &x1);

    printf("Enter the value of y1: ");
    scanf("%s", &y1);

    printf("Enter the value of x2: ");
    scanf("%s", &x2);

    printf("Enter the value of y2: ");
    scanf("%s", &y2);

    dst = areaofCircle(x1, y1, x2, y2, Edistance);
    printf("the distance between this point is %.2f\n", dst);

    printf("The area of The Circle in Euclidean Form is %.2f\n", PI * dst*dst);

    return 0;
}
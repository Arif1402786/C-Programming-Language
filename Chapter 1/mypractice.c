#include <stdio.h>

int main()
{
    int principal, rate, years;
    float simpleinterest;

    printf("Enter the principal\n");
    scanf("%d", &principal);
    printf("Enter the rate\n");
    scanf("%d", &rate);
    printf("Enter the years\n");
    scanf("%d", &years);
    simpleinterest = (principal * rate * years) / 100;
    printf("the SI is %f\n", simpleinterest);
    return 0;
}
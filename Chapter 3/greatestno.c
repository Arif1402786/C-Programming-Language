#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Enter your 1st number\n");
    scanf("%d", &num1);

    printf("Enter your 2nd number\n");
    scanf("%d", &num2);

    printf("Enter your 3rd number\n");
    scanf("%d", &num3);

    printf("Enter your 4th number\n");
    scanf("%d", &num4);

    if ((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        printf("%d is the greatest\n", num1);
    }
    else if ((num2 > num1) && (num2 > num3) && (num2 > num4))
    {
        printf("%d is the greatest\n", num2);
    }
    else if ((num3 > num1) && (num3 > num2) && (num3 > num4))
    {
        printf("%d is the greatest\n", num3);
    }
    else if ((num4 > num1) && (num4 > num2) && (num4 > num3))
    {
        printf("%d is the greatest\n", num4);
    }

    return 0;
}
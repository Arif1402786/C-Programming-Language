// # write a program to convert Decimal to Binary
#include <stdio.h>

int main()
{
    int num;
    int rem, i = 0;
    int arr[10];
    printf("Enter the Number: ");
    scanf("%d", &num);
    while (num)
    {
        rem = num % 2;
        num = num / 2;
        arr[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    printf("\n");
    return 0;
}
// # write a program to print the pattern
// *
// * *
// * * *
// * * * *
// * * * * *    --> for row = 5
#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of Rows: ");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
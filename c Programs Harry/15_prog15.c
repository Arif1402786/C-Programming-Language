// # write a program to print the pattern
// * * * * *
// *       *
// *       *
// *       *
// * * * * *    --> for row = 5
#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of Rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == 1 || i == row || j == 1 || j == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

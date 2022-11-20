#include <stdio.h>

int main()
{
    int i, j, row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
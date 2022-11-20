#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, c;
    int row;
    printf("Enter the number of rows for PASCAL TRIANGLE: ");
    scanf("%d", &row);
    printf("Required pascal triangle: \n");
    for (i = 1; i <= row; i++)
    {
        for (k = row; k >= i; k--)
        {
            printf(" ");
        }
        c = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", c);
            c = c * (i - j) / j;
        }
        printf("\n");
    }
    getch();
    return 0;
}
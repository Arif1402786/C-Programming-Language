#include <stdio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int row1, col1;
    int row2, col2;
    printf("Enter the Number of rows for M1: ");
    scanf("%d", &row1);
    printf("Enter the Number of columns for M1: ");
    scanf("%d", &col1);
    printf("Enter the Number of rows for M2: ");
    scanf("%d", &row2);
    printf("Enter the Number of columns for M2: ");
    scanf("%d", &col2);
    if (col1 == row2)
    {
        printf("Since Number of Columns of 1st matrix is equal to the number of Rows of the 2nd Matrix, Matrix multiplication is Possible\n");

        printf("Enter the elements for M1:\n ");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("Enter the Element M1[%d][%d]: \n", i + 1, j + 1);
                scanf("%d", &a[i][j]);
                fflush(stdin);
            }
        }

        printf("Enter the elements for M2:\n ");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("Enter the Element M2[%d][%d]: \n", i + 1, j + 1);
                scanf("%d", &b[i][j]);
                fflush(stdin);

            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                result[i][j] = 0;
                for(int k=0;k<row2;k++)

                {
                    result[i][j] += a[i][k]*b[k][j];
                }
            }
        }

   for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }


    }

    else{
         printf("Since Number of Columns of 1st matrix is not equal to the number of Row s of the 2nd Matrix, Matrix multiplication is not Possible\n");
    }
    return 0;
}
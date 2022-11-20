#include <stdio.h>

int main()
{
    int student = 3;
    int subject = 7;

    int marks[3][7];

    for (int i = 0; i < student; i++)

    {
        for (int j = 0; j < subject; j++)
        {
            printf("Enter the Marks of Student %d for Subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\n\n\n......PRINTING MARKS OF THE STUDENTS.....\n\n\n");
    for (int i = 0; i < student; i++)

    {
        for (int j = 0; j < subject; j++)
        {
            printf("The Marks of Student %d for Subject %d: %d\n ", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}
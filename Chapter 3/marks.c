#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your Marks(1-100) for Grade\n");
    scanf("%d", &marks);

    if (marks <= 70)
    {
        printf("you've got Grade F\n");
    }
    else if (marks > 70 && marks <= 80)
    {
        printf("you've got Grade C\n");
    }
    else if (marks > 80 && marks <= 90)
    {
        printf("you've got Grade B\n");
    }

    else if (marks > 90 && marks <= 100)
    {
        printf("you've got Grade A\n");
    }
    else
    {
        printf("invalid marks\n");
    }
    return 0;
}
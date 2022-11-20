#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("You have Entered %d\n ", ptr[i]);
    }
    printf("\n");

    ptr = realloc(ptr,7*sizeof(int));
    for(int i=0;i<7;i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
     for(int i=0;i<7;i++)
    {
        printf("You have Entered %d\n ", ptr[i]);
    }
    return 0;
}
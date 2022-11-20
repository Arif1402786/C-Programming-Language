#include <stdio.h>

int main()
{
    int i, j; 
    // we can put more than 1 variables in expression 1(initialisation) in "for loop"
    //expression 1 is optional
    //expression 2 can have more than 1 condition however the loop will iterate until the last condition becomes false
    //expression 2 is optional(but it will lead to infinite loop)
    // expression 3 is used to update loop variable
    //expression 3 is optional
    for (i = 0, j = 0;i < 10, j<6; i++, j++)
    {
        printf("%d %d\n", i, j);
    }
    return 0;
}
// # write a program to print the pattern
//* * * * *
//  * * * *
//    * * *
//      * *
//        *    --> for row = 5
#include <stdio.h>

int main(){
    int row;
    printf("Enter the number of Rows: ");
    scanf("%d",&row);
    for(int i = row;i>=1;i--)
    {
        for(int k=row;k>=i;k--)
        {
            printf(" ");
        }
        for(int j = 1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
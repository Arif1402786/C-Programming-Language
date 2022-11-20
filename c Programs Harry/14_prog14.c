// # write a program to print the pattern
//0 0 0 0 0
//  1 1 1 1
//    2 2 2
//      3 3
//        4    --> for row = 5
#include <stdio.h>

int main(){
    int row;
    int num = 0;
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
            printf("%d",num);
        }
        printf("\n");
        num++;
    }
    return 0;
}
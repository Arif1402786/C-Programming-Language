#include <stdio.h>
// //for triangular pattern
// int main(){
//     int num,i,j;
//     printf("Enter the number of Rows: ");
//     scanf("%d", &num);
//     for(i=1;i<=num;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//for reversed triangular pattern
int main(){
    int num,i,j;
    printf("Enter the number of Rows: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        for(j=num;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}
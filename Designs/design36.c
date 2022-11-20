#include <stdio.h>

int main(){
    int n,i,j,k;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(k=n;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// //star in right diagonal
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if((i+j)<=5){
//                 printf(" ");
//             }
//             else{
// printf("*");
//         }
//         }
    
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main(){
    int n,i,j,k;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);
    for(i=n;i>=1;i--){
        for(k=n;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
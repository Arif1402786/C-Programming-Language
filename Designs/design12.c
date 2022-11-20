#include <stdio.h>

int main(){
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for(i=1;i<=r;i++){
    for(j=1;j<=i;j++){
        printf("%c ",i+64);
    }
    printf("\n");
    }
    return 0;
}
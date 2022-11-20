#include <stdio.h>

int main(){
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for(i=r;i>=1;i--){
    for(j=1;j<=i;j++){
        printf("%c ",j+64);
    }
    printf("\n");
    }
    return 0;
}
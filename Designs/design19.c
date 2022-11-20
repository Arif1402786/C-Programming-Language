#include <stdio.h>

int main(){
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for(i=1;i<=r;i++){
    for(j=r;j>=i;j--){
        printf("%d ",j);
    }
    printf("\n");
    }
    return 0;
}
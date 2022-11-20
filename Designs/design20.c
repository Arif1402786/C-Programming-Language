#include <stdio.h>

int main(){
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    for(i=r;i>=1;i--){
    for(j=i;j>=1;j--){
        printf("%d ",j);
    }
    printf("\n");
    }
    return 0;
}
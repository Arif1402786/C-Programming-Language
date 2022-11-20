#include <stdio.h>

int main(){
    int r,k=1,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
   

    for(i=1;i<=r;i++){
    for(j=1;j<=i;j++){
        printf("%d ",k++);
    }
    printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
   

    for(i=1;i<=r;i++){
    for(j=1;j<=r;j++){
        if(i==j||i==r||j==1){
        printf("* ");
    }
    else {
        printf("  ");
    }
    }
    printf("\n");
    }
    return 0;
}
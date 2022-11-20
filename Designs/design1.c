//rows and columns
#include <stdio.h>


int main(){
    int i,j,r,c;

    printf("Enter the number of rows\n");
scanf("%d", &r);
printf("Enter the number of columns\n");
scanf("%d", &c);

    for(i=1;i<=r;i++){
    for(j=1;j<=c;j++){
        printf("%d ",j);
    }
    printf("\n");
    }
    return 0;
}
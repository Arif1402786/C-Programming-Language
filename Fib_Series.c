
#include <stdio.h>

int main(){
    int n ,  a=0,  b=1, c;
    printf("Enter Limit\n");
    scanf("%d",&n);
    printf("Fibonacci series for %d element: \n");
    for (int i=1;i<= n;i++){
        printf("\t %d", a);
         c= a + b;
          a=b;
          b=c;

    }
    printf("\n");
    return 0;
}

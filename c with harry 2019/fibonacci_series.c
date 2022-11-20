#include <stdio.h>

int main(){
    int n, a=0,b=1,c;
    printf("Enter the limit for fibonacci series: ");
    scanf("%d", &n);
    printf("The Fibonacci Series For %d elements is as follows:\n",n);
    for(int i=0;i<=n;i++)
    {
        printf("%d\t", a);
        c = a+b;
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}
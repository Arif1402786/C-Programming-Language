#include <stdio.h>

int main(){
    int i, n, factorial=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    printf("required factorial of %d is %d\n", n, factorial);
    return 0;
}
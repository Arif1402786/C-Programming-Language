#include <stdio.h>
// a Program Where The input is ANYTHING But Output is only 99
int main(){
    int i,n;
    printf("Enter The value of n: ");
    scanf("%d", &n);
    for (i=n;i;i--){
        if(i!=99){
            continue;
        }
        else{
        printf("%d\n", i);

        }
    }
    return 0;
}
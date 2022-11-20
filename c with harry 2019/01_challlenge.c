//printf a multiplication table of a number entered by the user
#include <stdio.h>

int main(){
    int a;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &a);
    printf("table of %d is given below:\n", a);
    for(int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n", a,i,a*i);
    }
    return 0;
}
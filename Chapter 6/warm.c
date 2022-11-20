#include <stdio.h>
int tentimes(int a);
int main(){
    int num ;
    printf("Enter the number\n");
    scanf("%d", &num);
printf("Its ten times value is %d\n", tentimes(num));
    return 0;
}
int tentimes(int a){
    a *=10; 
    a = 7;
}

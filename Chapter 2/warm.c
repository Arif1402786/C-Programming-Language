#include <stdio.h>

int main(){
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
if(num%97 == 0){
    printf("the number is divisible by 97\n");
}
else {
    printf("the number is not divisible by 97\n");
    
}
    return 0;
}
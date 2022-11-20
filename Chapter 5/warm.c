#include <stdio.h>

int fact(int num)

{
    if(num==0||num==1)
    return 1;
    else
    return num *fact(num-1);

}

int main(){
    int num;
    printf("ENter the number: ");
    scanf("%d", &num);
    printf("%d! = %d\n", num,fact(num));
    return 0;
}
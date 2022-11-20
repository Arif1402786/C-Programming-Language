#include <stdio.h>

int main(){
    int i;
    for( i = 0; i < 1000;i++){
    printf("the value of i is %d\n",i);
    if(i == 80){
    break;
    }
    i++;
    }
    return 0;
}
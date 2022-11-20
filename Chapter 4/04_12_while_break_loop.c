#include <stdio.h>

int main(){
    int i=0;
    while (i<500){
printf("the value of i is %d\n",i);
if(i==150){
    break;
}
    i++;
    }
    return 0;
}
#include <stdio.h>

int main(){
    int num=0;
    while(num<100)
    {
        num++;
        if(num == 4)
        {
        continue;
        }
        else{
            printf("%d\n",num);
        }
    }
    return 0;
}
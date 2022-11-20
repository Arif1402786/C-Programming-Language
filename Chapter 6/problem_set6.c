#include <stdio.h>
int tentimes(int a);
int main(){
    int i = 4;
  printf("its present value is %d\n",i);
    printf("its 10 times value is %d\n", tentimes(i));
    return 0;
}
int tentimes(int a){
    a *= 10;
    a = 6; // by changing the value, the value of the said variable does not change.
}



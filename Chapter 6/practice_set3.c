#include <stdio.h>
int tentimes(int *a);
int main(){
    int i = 4;
  printf("its present value is %d\n",i);
    tentimes(&i);
    printf("its 10 times value is %d\n", i);
    return 0;
}
int tentimes(int *a){
    *a *= 10;
}



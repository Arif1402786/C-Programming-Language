#include <stdio.h>

int main(){
    int i = 4;
    int *j = &i; // pointer 
    int ** k = &j; // pointer to pointer
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*(&i));
    printf("the value of i is %d\n",*j);
    printf("the value of i is %d\n",**k); // with the help of a pointer to a pointer

    return 0;
}
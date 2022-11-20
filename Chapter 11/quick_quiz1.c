#include <stdio.h>
#include <stdlib.h>

int main(){
    float *ptr; // 1 byte = 8 bit
    // sizeof operator in C
    // printf("the size of int on my pc is %d bytes\n", sizeof(int));
    // printf("the size of float on my pc is %d bytes\n", sizeof(float));
    // printf("the size of char on my pc is %d byte\n", sizeof(char));
    
    // type casting to int
    ptr = (float *) malloc(5 * sizeof(float));

for ( int i = 0;i<5 ; i++){
    printf("Enter the value of %d element\n", i);
    scanf("%f", & ptr[i]);
}

for ( int i = 0;i<5 ; i++){
    printf("The value of %d element is %f\n",i, ptr[i]);
}
    return 0;
}
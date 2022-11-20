#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr; // 1 byte = 8 bit
    // sizeof operator in C
    // printf("the size of int on my pc is %d bytes\n", sizeof(int));
    // printf("the size of float on my pc is %d bytes\n", sizeof(float));
    // printf("the size of char on my pc is %d byte\n", sizeof(char));
    
    // type casting to int
    ptr = (int *) malloc(6 * sizeof(int));// type casted void pointer to integer pointer

for ( int i = 0;i<6 ; i++){
    printf("Enter the value of %d element\n", i);
    scanf("%d", & ptr[i]);
}

for ( int i = 0;i<6 ; i++){
    printf("The value of %d element is %d\n",i, ptr[i]);
}
    return 0;
}
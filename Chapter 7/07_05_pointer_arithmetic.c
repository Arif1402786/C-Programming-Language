#include <stdio.h>

int main(){
    int i = 34;
    int * ptr = &i;

    printf("the address of i is %u \n", ptr);
    printf("the value of ptr is %d \n", *ptr);
    ptr++; // ptr ++ = ptr + 1;
    ptr++;
    ptr++;
    printf("the address of i  is %u \n", ptr);


// char c ='d';
//     char * ptr = &c;

//     printf("the address of i  is %u \n", ptr);
//     ptr++; // ptr ++ = ptr + 1;
    // printf("the address of i  is %u \n", ptr);

// float f =3.4;
//     float * ptr = &f;

//     printf("the address of i  is %u \n", ptr);
//     ptr++; // ptr ++ = ptr + 1;

//     printf("the address of i  is %u \n", ptr);

    return 0;
}
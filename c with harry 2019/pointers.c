#include <stdio.h>

int main(){
    int a = 45;
    int *ptra;
    int *ptr2 = NULL;
    ptra = &a;
 printf("The value of a is %d\n", a);   
 printf("The value of a is %d\n", *(&a));   
 printf("The addrress of a is %u\n", &a);   
 printf("The value of ptra is %u\n", ptra);   
 printf("The addrress to a pointer is %u\n", &ptra);   
 printf("The addrress to a pointer is %x\n", &ptra);// %p--> used to print the hexadecimal unsigned integer9p   
 printf("The addrress to a pointer in hexadecimal form is %p\n", &ptra);// %p--> used to print addrress in hexadecimal form   
 printf("The value to a pointer is %u\n", *(&ptra));   
 printf("The value of ptr2 is %d\n", *(&ptr2));   
 printf("The addrress of some garbage value of ptr2 is %p\n", ptr2);   
     return 0;
}
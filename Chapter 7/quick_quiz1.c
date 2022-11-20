#include <stdio.h>

int main(){
    int a = 4;
    int *ptr1 = &a;
    int * ptr2 = &a;
    
     //first part

    printf("the value of ptr is %u\n" , ptr1);
    ptr1++; 
    printf("the value of ptr is %u\n" , ptr1);

   // second part
// 
    // ptr2--; 
    // printf("the value of ptr is %u\n" , ptr2);


// third part

ptr2 = ptr2 + 3; 
ptr1;
printf("the value of ptr2 after adding 3 is %u\n" , ptr2);
printf("the value of ptr1 is %u\n" , ptr1);
printf("their subtraction is %d \n", ptr2 - ptr1);

// // fourth part

printf("%u \n", ptr1);
printf("%u \n", ptr2);

if(*ptr1 == *ptr2){
    printf("they are equal\n");
}

    return 0;
}
#include <stdio.h>

void encrypt(char *c){
    char *ptr = c;
    while(*ptr!= '\0'){
        *ptr += 1;
        ptr++;
    }
}

int main(){
    char c[] ="i can and i will"; // to change OR ALLOCATE individual element we have to use this format.
    encrypt(c);
printf(" encrypted string is : %s",c);
printf("\n");
    return 0;
}
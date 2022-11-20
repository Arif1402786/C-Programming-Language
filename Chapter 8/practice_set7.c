#include <stdio.h>

void decrypt(char *c){
    char *ptr = c;
    while(*ptr!= '\0'){
        *ptr -= 1;
        ptr++;
    }
}

int main(){
    char c[] ="j!dbo!boe!j!xjmm";
    decrypt(c);
printf(" decrypted string is : %s",c);
printf("\n");
    return 0;
}
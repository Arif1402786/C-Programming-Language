#include <stdio.h>

int main(){  
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122){
        printf("It is lowercase\n");
    }
    else{
        printf("It is not lowercase\n");

    }
    return 0;
}
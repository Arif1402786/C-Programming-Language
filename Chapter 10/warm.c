#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("warm54.txt","r");
    char c;
    if(ptr == NULL){
        printf("this file doesnt exist\n");
    }
else{
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
}
    return 0;
}
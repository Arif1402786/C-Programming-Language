#include <stdio.h>

int main(){
    FILE *ptr;
    
    // fgetc demo for reading a file

    ptr = fopen("getc_demo.txt", "r");
    //  char c = fgetc(ptr);
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));

//     ptr = fopen("putc_demo.txt", "w");
// fputc('A',ptr);
// fputc('r',ptr);
// fputc('i',ptr);
// fputc('f',ptr);

fclose(ptr);

        return 0;
}
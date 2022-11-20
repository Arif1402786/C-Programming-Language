#include <stdio.h>

int main(){
//    char str[] = "ARIF";
   char str[] ={'A', 'R', 'I', 'F', '\0' };
   char *ptr = &str[0]; // or char *ptr = str;

   while(*ptr!='\0'){
       printf("%c", *ptr);
       ptr++;
   }
   printf("\n");
    return 0;
}
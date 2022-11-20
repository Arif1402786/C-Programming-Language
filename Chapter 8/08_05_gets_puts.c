#include <stdio.h>

int main(){
    char st[100];
    printf("Enter Your Name: ");
   gets(st);
   puts(st);

   printf("Your Name Is %s\n",st);
//    printf("\n");
    return 0;
}
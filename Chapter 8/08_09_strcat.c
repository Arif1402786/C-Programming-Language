#include <stdio.h>
#include <string.h>


int main(){
    char st1[40]= "HELLO";
    char st2[] = "ARIF"; // no space in  between them
    strcat(st1,st2); 
    printf("now the st1 is %s\n",st1);
    return 0;
}
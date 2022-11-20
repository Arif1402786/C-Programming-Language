#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Arif Ali";// strrev doesnt work on char *str
    printf("the reversed string of str is:");
    puts(strrev(str));
    return 0;
}
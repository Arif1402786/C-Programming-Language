#include <stdio.h>
#include <string.h>


int main(){
    char *st = "ARIF ALI";
    char st2[40];
    strcpy(st2,st); // ST2 IS THE TARGET STRING AND ST IS THE SOURCE STRING
    printf("Now the st2 is %s\n",st2);
    return 0;
}
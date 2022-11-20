#include <stdio.h>
#include <string.h>


int main(){
    char st1[]= "Arif";
    char st2[] = "arif"; 
    int val = strcmp(st1,st2); 
    int val2 = strcmpi(st1,st2); 
    printf("now the value of val is %d\n",val);
    printf("now the value of val2 is %d\n",val2);
    return 0;
}
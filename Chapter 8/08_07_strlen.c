#include <stdio.h>
#include <string.h>
int main(){
    char *str = "ARIF_ALI";
    int a = strlen(str); // COUNTS THE LENGTH OF THE STRING EXCLUDING THE NULL CHARACTER
    printf("the length of string str is %d\n",a);
    return 0;
}
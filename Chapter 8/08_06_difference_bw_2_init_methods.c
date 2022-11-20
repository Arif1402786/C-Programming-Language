#include <stdio.h>

int main(){
      char *ptr ="ARIF ALI"; // can be reinitialized
    //   char ptr[] ="ARIF ALI"; // cannot be reinitialized
     ptr = "ASIF BHAI";
    printf("%s",ptr);
    printf("\n");

    return 0;
}
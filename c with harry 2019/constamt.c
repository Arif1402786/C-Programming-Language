#include <stdio.h>
#define pi 3.14 // #define preprocessor

int main(){
    int a = 8;
   const float b = 7.333;//constant keyword
    // b = 7.22; --> cannot do this as b is constant
//pi = 7.33;-> cannot do this as pie is a constant
   printf("%f\n", pi);
printf("My backslash \\n \n");
printf("tab character \t hehee \n");
printf("\a \n");
printf("\b \n");
    return 0;
}
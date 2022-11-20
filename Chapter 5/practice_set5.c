#include <stdio.h>

int main(){
    int a = 4 ,b =3;
     printf("%d %d %d\n", a ,++a,a++ ); // it depends on the compiler whether the arguments
     // are passed from left to right or vice versa.
     // asked the interviewer how the arguments are passed in the compiler 
     // here the arguments are passed from right to left
    // printf("%d %d %d\n", a ,a++,++a );// why 6 in the right?
     printf("%d %d \n", b ,b++); 
     
    return 0;
}
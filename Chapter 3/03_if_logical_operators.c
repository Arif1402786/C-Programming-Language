#include <stdio.h>

int main(){
    int age;
    int vipPass=0;
    vipPass=1;

    printf("Enter your age\n");
    scanf("%d", & age);

    if(( age >= 18  && age <= 80) || !(vipPass==1) )
    {
printf(" you are above 18 and less than 80, you can drive\n");
    }
    else{
printf("sorry you are not eligible for driving\n");
    }
    return 0;
}
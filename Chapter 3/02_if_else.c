#include <stdio.h>

int main(){
    int age;
    printf
    ("Enter your Age: ");
    scanf("%d", &age);
    if(age>0 && age<18)
    {
        printf("You are not elgibile for Driving\n");
    }
    else if(age>=18 &&age<65){
        printf("You are eligible for Driving\n");
    }
    else if(age>=65 &&age <110){
        printf("You are too old to drive\n");
    }
    else{

        printf("Invalid Age Input\n");
    }
    return 0;
}
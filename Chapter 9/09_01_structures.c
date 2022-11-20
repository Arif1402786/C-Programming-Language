#include <stdio.h>
#include <string.h>
// Structure is a user define data type
struct employee{
    int code;
    float salary;   
    char name[10];
};

int main(){
    int a = 74;
    char b ='y';
    float c = 23.56708;
// employee e1;
// e1. salary = 23.56708; ...> wont work until employee structure

struct employee e1;
e1.code = 100;//  .--> member operator
e1.salary = 34.454;
// e1.name = ARIF;... > wont work
strcpy(e1.name, "ARIF");

printf("%d\n", e1.code);
printf("%.3f\n", e1.salary);
printf("%s\n", e1.name);
    return 0;
}
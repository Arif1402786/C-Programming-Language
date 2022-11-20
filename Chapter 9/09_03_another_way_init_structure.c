#include <stdio.h>
#include <string.h>


struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee ASIF = {100, 34.23, "Asif" };
printf("code is : %d\n", ASIF.code);
printf("salary is : %f\n", ASIF.salary);
printf("name is : %s\n", ASIF.name);

   struct employee ARIF = { 0};//  Everything will be initialised to 0
printf("code is : %d\n", ARIF.code);
printf("salary is : %f\n", ARIF.salary);
printf("name is : %s\n", ARIF.name);



    return 0;
}
#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
}emp; // now instead of writing struct employee , we can now only have to write emp

void show(emp emp1){ // though we can also use struct employee
    printf("The code of employee is: %d\n", emp1.code);
    printf("The salary of employee is: %f\n", emp1.salary);
    printf("The name of employee is: %s\n", emp1.name);
emp1.code = 232;
}
int main(){
    //declaring e1 and ptr
    emp e1;
    emp *ptr;

// pointing ptr to e1
    ptr = &e1;  

    // set the member values of e1
    ptr->code =101;
    ptr->salary =209.566;
    strcpy(ptr->name,"ARIF");

show(e1);
    printf("The code of employee is: %d\n", e1.code);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct  employee emp){
    printf("The code of employee is: %d\n", emp.code);
    printf("The salary of employee is: %f\n", emp.salary);
    printf("The name of employee is: %s\n", emp.name);
emp.code = 34;// value in the main function wont change
}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;  
    ptr->code =101;
    ptr->salary =209.566;
    strcpy(ptr->name,"ARIF");
    show(e1); // because it is pass by value ..only the copy of structure is forwarded
    printf("%d\n", e1.code);
    return 0;


}
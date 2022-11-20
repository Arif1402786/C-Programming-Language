#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1; // *ptr = e1--> here . is the memeber accessing operator
    // (*ptr).code = 100; // not *(ptr).code
    ptr->code = 100; // or we can also write  : (*ptr).code = 100; .... ->arrow operator
    (*ptr).salary = 10000.0001;
    strcpy((*ptr).name, "arif");
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);
    printf("\n");
    // alternately
    printf("%d\n", (*ptr).code);
    printf("%f\n", (*ptr).salary);
    printf("%s\n", (*ptr).name);

    return 0;
}
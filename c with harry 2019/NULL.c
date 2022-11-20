#include <stdio.h>
// NULL pointer
// points to nullity and cannot be dereferenced
// A check must be run by the c programmwe to know whether a pointer is null before dereferencing it
int main()
{
    int a = 34;
    int *ptr;
    // int *ptr = &a;
    // int *ptr = NULL;->it will print the else statement
    if (ptr != NULL)
    {
        printf("The addrress of a is %u\n", ptr);
    }
    else
    {
        printf("The given pointer is a null pointer and it cannot be dereferenced\n");
    }
    return 0;
}
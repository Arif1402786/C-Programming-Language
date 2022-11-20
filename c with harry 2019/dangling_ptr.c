#include <stdio.h>
#include <stdlib.h>
// Dangling ptr is a pointer pointing to a freed memory location ot whose content has been deleted
int *functionDangling()
{
    int a, b, sum;
    sum = a + b;
    return &sum;
}
int main()
{
    // case 1: Deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 1;
    ptr[0] = 2;
    ptr[0] = 3;
    ptr[0] = 4;
    free(ptr); // ptr is now dangling pointer

    // case 2: Function returning local variable address
    int *dangPtr = functionDangling(); // ptr is now dangling pointer

    // case 3: If the variable goes out of scope
    int *dangPtr3;
    {
        int a = 1;
        dangPtr3 = &a;
    }
    // Here variable goes out of scope which means dangling ptr is pointing to a location which is freed  and hence dangptr3 is now a dangling pointer

    return 0;
}
#include <stdio.h>
//also called jump statement
//used to transfer program control to a predefined label
//preferable when used to break multiple loops using a single statement at the same time
// avoid as much as possible
int main(){
    label:
    printf("we are inside label\n");
    goto end;
    printf("Hello world\n");
    goto label;
    end:
    printf("We are at the end\n");
    return 0;
}
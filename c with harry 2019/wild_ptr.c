#include <stdio.h>
#include <stdlib.h>
//wild pointer are also called uninitialised pointer
//points to some arbitrary location in memory
//dereferencing will cause nasty bugs
int main(){
    int a = 5;
    int *ptr;//this is a wild pointer
    // *ptr = 34;// though it is not a good thing to do
    ptr = &a;//ptr no more 
    printf("the value of a is %d\n", *ptr);
    return 0;
}
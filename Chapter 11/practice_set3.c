
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    // ptr = (int *)malloc(6 * sizeof(int)); //-> with malloc
    ptr = (int *)calloc(6,  sizeof(int)); //--> with calloc
    return 0;
}
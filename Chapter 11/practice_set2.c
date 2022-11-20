#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int)); //-> with malloc
    // ptr = (int *)calloc(6,  sizeof(int)); --> with calloc
for (int i =0; i< 6; i++){
printf("Enter The Value Of The %d Number\n ", i+1);
scanf("%d", &ptr[i]);
}
for (int i =0; i< 6; i++){
printf("The Value Of The %d Number is = %d\n ", i+1, ptr[i]);
}

    return 0;
}
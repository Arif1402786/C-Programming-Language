#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("double.txt", "r");
    fscanf(ptr,"%d", &num);
    printf("the number is %d\n",num);
    ptr = fopen("double.txt", "w");
    fprintf(ptr,"%d\n", 2*num);


    return 0;
}
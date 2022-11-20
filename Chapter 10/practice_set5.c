#include <stdio.h>

int main(){
    FILE *ptr1;
    int num;
    ptr1 = fopen("pr05.txt", "r");
fscanf(ptr1,"%d\n",&num);
    ptr1 = fopen("pr05.txt", "w");
    fprintf(ptr1,"%d\n", 2*num);

    fclose(ptr1);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    ptr = (int*) malloc(10*sizeof(int));
    // ptr = (int*) calloc(6,sizeof(int));
    
    for(int i = 0;i<10;i++){
        ptr[i]= n*(i+1);
printf("%dX%d=%d\n",n,i+1,ptr[i]);
    }

printf("\n\n AFTER REALLOCATING: \n\n");

    ptr = realloc(ptr, 15*sizeof(int));
    for(int i = 0;i<15;i++){
        ptr[i]= n*(i+1);
printf("%dX%d=%d\n",n,i+1,ptr[i]);
    }
    return 0;
}
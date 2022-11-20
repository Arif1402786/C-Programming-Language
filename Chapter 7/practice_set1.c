#include <stdio.h>

int main(){
    int arr[10];
    int *ptr = &arr[0];
    //or int *ptr = arr;
    ptr = ptr+2;
if(ptr == &arr[2]){
    printf("These two are pointing in the same memory location\n");
    
}

  else{
    printf("These two are not pointing in the same memory location\n");
  }
    return 0;
}
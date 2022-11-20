#include <stdio.h>

// void printArray(int *ptr, int n){
//     for(int i=0; i<n;i++){
//         printf("The value of the element %d is %d \n", i+1, *(ptr+i));
//     } 
// }

// alternate

void printArray(int ptr[], int n){
    for(int i=0; i<n;i++){
        printf("The value of the element %d is %d \n", i+1, ptr[i]);
    } ptr[2] = 5555; // will change the actual value in arr value in main
    // because we have given the addrress
}

int main(){
    int arr[] = { 1, 45, 76, 353,34, 55, 77};
    printArray(arr , 7); // 7 because of boundary, if more or less than 7 it will start misbehaving 
     printf("%d\n", arr[2]);
    return 0;
}
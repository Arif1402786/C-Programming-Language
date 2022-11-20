#include <stdio.h>
int countposnumber(int *arr, int n){
    int pos_number=0;
    for(int i=0;i<n;i++){
if(arr[i]>=0){
    pos_number++;
}
    }
    return pos_number;
}


int countnegnumber(int *arr, int n){
    int neg_number=0;
    for(int i=0;i<n;i++){
if(arr[i]<0){
    neg_number++;
}
    }
    return neg_number;
}

void printArray(int *arr, int n){
    printf("ARRAY: ");
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
}
printf("\n");
}

int main(){
    int arr[] = {2 , -6, 5, 8, -4 , -67 ,9, 0};
    int n;
    n= sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    printf("Total positive number in the array is %d\n", countposnumber(arr,n));
    printf("Total negative number in the array is %d\n", countnegnumber(arr,n));
    return 0;
}
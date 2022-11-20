#include <stdio.h>
   void  Display(int *A,int n){
for(int i=0;i<n;i++){
    printf("%d ", A[i]);
}
printf("\n");
    }
    
   void Bubble_sort(int *A,int n){
    printf("Running Bubble Sort ....\n");
       int temp;
for(int i=0;i<n-1;i++){ // for number of passes
    for(int j=0;j<n-i-1;j++){ // for comparison in each pass
    // for ascending order
        if(A[j]>A[j+1])
        {
         temp = A[j];
         A[j] = A[j+1];
         A[j+1] = temp;
        }
        // // for descending order
        // if(A[j]<A[j+1]){
        // temp = A[j];
        // A[j] = A[j+1];
        // A[j+1] = temp;
        // }
    }
}
    }

int main(){
    int A[] = {12,54,8,2,5,86,58};
    int n = 7;
    printf("Array before sorting: ");
    Display(A,n);
    Bubble_sort(A,n);
    printf("Array after sorting: ");
    Display(A,n);

    return 0;
}
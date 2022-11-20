#include <stdio.h>

void printArray(int *A, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selection_sort(int *A,int n)
{
    printf("Running Selection Sort....\n");
  int indexOfMin,temp;
  for(int i=0;i<n-1;i++)
    {
     indexOfMin = i;
     for(int j=i+1;j<n;j++)
     {
        if(A[j]<A[indexOfMin])
        {
            indexOfMin = j;
        }
     }
     // swapping A[i] and A[indexOfmin]
        temp = A[i];
    A[i] = A[indexOfMin];
    A[indexOfMin] = temp;
    }
}
int main(){
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A,n);
    selection_sort(A,n);
    printArray(A,n);

    return 0;
}
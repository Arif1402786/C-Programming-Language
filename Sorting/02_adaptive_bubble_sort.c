#include <stdio.h>
void Display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Bubble_sort_Adaptive(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // for number of passes
    {
     printf("Working on Pass Number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j < n - i - 1; j++) // for comparison in each pass
        {   
            // for ascending order
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
            // // for descending order
            // if(A[j]<A[j+1]){
            // temp = A[j];
            // A[j] = A[j+1];
            // A[j+1] = temp;
            // isSorted = 0;
            // }
        }
        if(isSorted){ 
           // here it means (isSorted !=0)
            return;
        }
    }
}

int main()
{
    int A[] = {1,2,3,4,5,6,7}; // Sorted array
    // int A[] = {7, 11, 9,2,17,4};
    // int A[] = {7, 11, 9,2,3,634,67,7,36,5,0,17,4};
    int n = sizeof(A)/sizeof(A[0]);
    printf("Array before sorting: ");
    Display(A, n);
    Bubble_sort_Adaptive(A, n);
    printf("Array after sorting: ");
    Display(A, n);

    return 0;
}
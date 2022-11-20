#include <stdio.h>

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[low]; // to see thr actual change in the array we should swap A[j] and A[low]
    // not A[j] and pivot 
    A[low] = A[j];
    A[j] = temp; 
    return j;
}

void quick_sort(int *A, int low, int high)
{
    int partition_index; // index of pivot element after partition
    if (low < high)
    {
        partition_index = partition(A, low, high);
        quick_sort(A, low, partition_index - 1);  // sort left sub array
        quick_sort(A, partition_index + 1, high); // sort right sub array
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45, 56, 2, 5, 84};
    int n = sizeof(A)/sizeof(A[0]);
    PrintArray(A, n);
    quick_sort(A, 0, n - 1);
printf("Running Quick Sort....\n");

    PrintArray(A, n);
    return 0;
}
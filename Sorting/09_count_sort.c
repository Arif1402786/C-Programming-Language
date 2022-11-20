// Takes extra space
// One of the fastests sorting technique
// Time Complexity = O(n)
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maximum(int *a, int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

void count_Sort(int *arr, int size)
{
    int i, j;
    // Find the maximum element in the array
    int max = maximum(arr, size);

    // Create the count(auxillary) array
    int *count = (int *)malloc(sizeof(int) * (max + 1));

    // Initialise the array elements to 0
    for (i = 0; i < (max + 1); i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
    for (j = 0; j < size; j++)
    {
        count[arr[j]] = count[arr[j]] + 1;
    }
    i = 0; // Counter for the count array
    j = 0; // counter for the given array (arr)
    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int *a;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    a = (int *)malloc(sizeof(int) * size);
    printf("Enter the elements in the Array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Array before Count Sort: \n");
    printArray(a, size);
    count_Sort(a, size);
    printf("Array after Count Sort: \n");
    printArray(a, size);

    return 0;
}
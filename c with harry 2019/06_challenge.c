// reverse the given array

#include <stdio.h>

void ArrayRev(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nArray before Reversing:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    ArrayRev(arr, n);

    printf("\nArray after Reversing:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
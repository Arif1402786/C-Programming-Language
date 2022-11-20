// # write a program to find the greatest number in a digit
#include <stdio.h>
#include <stdlib.h>

int greatestNo(int *arr, int n)
{
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[50];
    int size, data;
    printf("Enter the size of the Array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }

    int x;
    x = greatestNo(arr, size);
    printf("The greatest number in the array: %d\n ",x);

    return 0;
}
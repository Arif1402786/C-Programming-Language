#include <stdio.h>

void Display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int *arr, int n)
{
        int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {3, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array In Order: \n");
    Display(arr, n);
    reverse(arr, n);
    printf("Array In Reversed Order: \n");
    Display(arr, n);

    return 0;
}

// #include <stdio.h>
// void reverse(int *arr, int n)
// {
//     int temp;
//     for (int i = 0; i < (n / 2); i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     reverse(arr, 7);
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The value of %d is %d\n", i+1, arr[i]);
//     }

//     return 0;
// }
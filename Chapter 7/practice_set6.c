// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     scanf("%d", &i);
//     while (i <= 20)
//     {
//         if (i >= 10)
//         {
//             printf("the value of i is %d\n", i);
//         }
//         i++;
//     }
//     return 0;
// }
// count of positive and negative numbers
#include <stdio.h>
int countpositivenumbers(int *arr, int n)
{
    int pos_number = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0){
        
            pos_number++;
        }
     
    }
       return pos_number;
}
int countnegativenumbers(int *arr, int n)
{

    int neg_number = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg_number++;
        }
    
    }
        return neg_number;
}
void printArray(int *arr, int n)
{
    int i;
    printf("ARRAY: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// main function
int main()
{
    int arr[] = {0, 2, -5, 6, 7, -3, 9, 5};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);

    printf("number of positive elements is %d\n",
           countpositivenumbers(arr, n));
    printf("number of negative elements is %d\n",
           countnegativenumbers(arr, n));

    return 0;
}
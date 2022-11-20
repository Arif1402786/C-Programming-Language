// #include <stdio.h>
// int main(){
//      int arr[4];
//      arr[0] = 55;
//      arr[1] = 56;
//      arr[2] = 34;
//      arr[3] = 78;
//     int *j = &arr[0];
//     printf("the value of arr[0]is %d\n", arr[0]);
//     printf("the value of arr[0]is %d\n", *j);
//     printf("the addrress of arr[0]is %u\n", j);
//     j++;
//     printf("the addrress of arr[0]is %u\n", j);
//     printf("the value of arr[0]is %d\n", *j);
//     j++;
//     printf("the addrress of arr[0]is %u\n", j);
//     printf("the value of arr[0]is %d\n", *j);
//     return 0;
// }

// C program to find the count of positive
// and negative integers in an array
  
#include <stdio.h>
  
// Function to find the count of
// positive integers in an array
int countPositiveNumbers(int* arr, int n)
{
    int pos_count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0){
            pos_count++;
        }
    }
    return pos_count;
}
  
// Function to find the count of
// negative integers in an array
int countNegativeNumbers(int* arr, int n)
{
    int neg_count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0){
            neg_count++;
    }
    }
    return neg_count;
}
  
// Function to print the array
void printArray(int* arr, int n)
{
    int i;
  
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
  
// Driver program
int main()
{
    int arr[] = { -2, -1, 5, 6, 0, -3 };
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
  
    printArray(arr, n);
  
    printf("Count of Positive elements = %d\n",
           countPositiveNumbers(arr, n));
    printf("Count of Negative elements = %d\n",
           countNegativeNumbers(arr, n));
  
    return 0;
}
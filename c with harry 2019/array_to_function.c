#include <stdio.h>
void func1(int array[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value at index %d is %d\n", i, array[i]);
    }
    //    array[2] = 56;if we change the value in the function it will reflect in the main function

    printf("\n");
}

void func2(int *ptr)
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value at index %d is %d\n", i, *(ptr + i));
    }
    // *(ptr+3) = 90;if we change the value in the function it will reflect in the main function

    printf("\n");
}

void func3(int arr[2][2])
{
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    func1(arr);
    printf("%d\n", arr[2]);

    func2(arr);
    func2(arr);
    return 0;
}
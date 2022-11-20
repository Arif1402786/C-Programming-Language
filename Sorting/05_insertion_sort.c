#include <stdio.h>

void Display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void insertion_sort(int *A, int n)
{
    int key, i, j;
    for (i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;
        // for ascending order
        while (j >= 0 && A[j] > key)
        { // for descending order simply put j>=0 && A[j]<key
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

// 0   1   2   3   4   5   6
// 12, 54, 08, 02, 05, 86, 58 --> Array

// 12,| 54, 08, 02, 05, 86, 58 -->(i=1), key = 54, j = 0
// 12,| 54, 08, 02, 05, 86, 58 -->1st pass done

// 12, 54,| 08, 02, 05, 86, 58 --> (i=2), key = 08, j = 1
// 12, 54,| 54, 02, 05, 86, 58 --> (i=2), key = 08, j = 0
// 12, 12,| 54, 02, 05, 86, 58 --> (i=2), key = 08, j = -1
// 08, 12,| 54, 02, 05, 86, 58 --> 2nd pass done

// 08, 12, 54,| 02, 05, 86, 58 --> (i=3), key = 02 , j = 2
// 08, 12, 54,| 54, 05, 86, 58 --> (i=3), key = 02 , j = 1
// 08, 12, 12,| 54, 05, 86, 58 --> (i=3), key = 02 , j = 0
// 08, 08, 12,| 54, 05, 86, 58 --> (i=3), key = 02 , j = -1
// 02, 08, 12,| 54, 05, 86, 58 -->3rd pass done

// fast forwarding
// 4th pass gives
// 02, 08, 12, 54,| 05, 86, 58 -->(i=4)
// 02, 05, 08, 12,| 54, 86, 58 -->4th pass done

// 5th pass gives
// 02, 05, 08, 12, 54,| 86, 58 -->(i=5)
// 02, 05, 08, 12, 54,| 86, 58 -->5th pass done

// 6th pass gives
// 02, 05, 08, 12, 54, 86,| 58 -->(i=6)
// 02, 05, 08, 12, 54, 58 86 -->6th pass done

// ARRAY AFTER INSERTION SORTING

// 02, 05, 08, 12, 54, 58, 86|

int main()
{
    int A[] = {12, 54, 8, 2, 5, 86, 58};
    int n = sizeof(A) / sizeof(A[0]);
    Display(A, n);
    insertion_sort(A, n);
    Display(A, n);
    return 0;
}
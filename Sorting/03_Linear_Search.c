#include <stdio.h>
// search complexity --> big O(n)

int Linear_Search(int arr[], int size, int search){
    for(int i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    //Both sorted or unsorted array for linear search
    int arr[] = {23, 90,6,5,4,56,78,67,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int search;
    printf("Enter the element you wanna search in the array: ");
    scanf("%d", &search);
    int search_index = Linear_Search(arr,size,search);
    printf("The element %d is found at the index %d\n", search, search_index);
    return 0;
}
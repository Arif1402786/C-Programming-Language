#include <stdio.h>
// search complexity --> big O(logn)
int Binary_Search(int arr[], int size, int search){
    int low,mid,high;
    low = 0;
    high = size - 1;
while(low<=high){
    mid = (low+high)/2;
        if(arr[mid] == search){
            return mid;
        }
        if(arr[mid]<search){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        // searching ends
}
    return -1;
    
}
int main(){
    //Sorted array for binary search
    int arr[] = {1,2,3,4,5,6,7,8,9,10,100,456,789,888,947,1005,1135};
    int size = sizeof(arr)/sizeof(arr[0]);
    int search;
    printf("Enter the element you wanna search: ");
    scanf("%d", &search);
    int search_index = Binary_Search(arr,size,search);
    printf("The element %d is found at the index %d\n", search, search_index);
 
    return 0;
}
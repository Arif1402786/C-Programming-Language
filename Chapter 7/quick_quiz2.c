#include <stdio.h>

int main(){
    int i,j;
    int arr[3][3];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter the element of arr[%d][%d]: ", i+1,j+1);
        scanf("%d", &arr[i][j]);
    }
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("The element of arr[%d][%d] is %d\n ", i+1,j+1, arr[i][j]);
    }
}

    return 0;
}
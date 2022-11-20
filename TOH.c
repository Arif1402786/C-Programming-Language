#include <stdio.h>
#include <stdlib.h>

void Tower_of_Hanoi(int n, char beg,char aux, char end);

int main(){
    int x;
    printf("Enter the number of Disks: ");
    scanf("%d", &x);
    Tower_of_Hanoi(x, 'A','B','C');
    return 0;
}

void Tower_of_Hanoi(int n, char beg,char aux, char end)
{
    if(n>=1)
    {
        Tower_of_Hanoi(n-1,beg,end,aux);
        printf("%d disk from %c to %c via %c \n", n,beg,end,aux);
        Tower_of_Hanoi(n-1,aux,beg,end);
    }
}
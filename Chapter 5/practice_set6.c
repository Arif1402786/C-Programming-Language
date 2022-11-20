//Recursive way of finding the sum

#include <stdio.h>

int sum(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;

    }
    else {
        return num + sum(num-1);
    }
}

int main(){
    int num;
    printf("Enter the limit: ");
    scanf("%d", &num);
    printf("The sum of the first %d numbewr is %d\n", num,sum(num));
    return 0;
}


// General way for finding the sum of numbers
// #include <stdio.h>
// int sum(int k);
// int main(){
//     int a;
//     printf("enter the value of a\n");
//     scanf("%d", &a);
//     printf("sum of %d natural numbers is %d\n",a, sum(a));

//     return 0;
// }

// int sum(int k){
//     if (k == 0){
//         return 0;
//     }
//     else{
//         return k * (k+1)/2;
//     }
// }

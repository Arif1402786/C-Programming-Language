#include <stdio.h>

int main(){
    int i=1, sum=0, n=10;
//for loop

    // for(i=0;i<=n;i++){
    //     sum += i; //sum +=i --->sum + i
    // }
    // printf("the sum of first 10 natural number is %d\n", sum);
    
//while loop

// while(i<=n){
//     sum+=i;
//     i++;
// }
//     printf("the sum of first 10 natural number is %d\n", sum);

// do while loop

do{
    sum+=i;
    i++;
}while(i<=n);
    printf("the sum of first 10 natural number is %d\n", sum);
    return 0;
}
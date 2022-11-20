#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100+1;
    // printf("The number is %d\n", number);
    do{
printf("Guess The Number(1-100)\n",guess);
scanf("%d",&guess);
if(guess>number){
    printf("Lower Number Please!!\n");
}
    else if(guess<number){
        printf("Greater Number Please\n");
       }
        else{
            printf("YOU'VE GUESSED IT CORRECTLY IN %d times\n", nguesses);
        }nguesses++;
    }
    while(guess!=number);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess,nguesses=1;
    srand(time(0));
    number= rand()%100 + 1;// random number between 1 and 100.
   // printf("The number is %d\n", number);
    // keep running the loop until the number is guessed.
do{
printf("Guess the number\n");
scanf("%d", &guess);
if(guess>number){
printf("LOWER NUMBER PLEASE!\n");
}
else if(guess<number){
printf("HIGHER NUMBER PLEASE!\n");
}
else{
    printf("YOU CORRECTLY GUESSED IT IN %d ATTEMPTS\n",nguesses);
}
nguesses++;
} while(guess!= number);

    return 0;
}
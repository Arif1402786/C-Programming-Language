#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess,number,n_guesses = 1;
  
    srand(time(0));
    number = rand()%100+1;
    // printf("the number is %d\n", number);
    do{
          printf("Enter your Guess: ");
    scanf("%d", &guess);
if( guess>number){
    printf("LOWER NUMBER PLEASE!\n");
}
else if( guess<number){
    printf("HIGHER NUMBER PLEASE!\n");
}
else{
    printf("You Have guessed it CORRECTLY in %d attempts.CONGRATULATIONS!!!\n", n_guesses);
}
n_guesses++;
    }while(guess!=number);
    return 0;
}
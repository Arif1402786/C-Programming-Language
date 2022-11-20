#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RockPaperscissor(char you,char comp){
    if(you == comp){
        return 0;
    }
    if(you == 'p' && comp == 'r'){
        return 1;
    }
     else if(you == 'r' && comp == 'p'){
        return -1;
    }

 if(you == 'r' && comp == 's'){
        return 1;
    }
     else if(you == 's' && comp == 'r'){
        return -1;
    }

 if(you == 's' && comp == 'p'){
        return 1;
    }
     else if(you == 'p' && comp == 's'){
        return -1;
    }
}

int main(){
    char you, comp;
    char name[20];
    int number;
    srand(time(0));//take input called seed and is defined under time.h header file
    number = rand()%100+1;
    // printf("The number is %d\n", number);
    printf("Welcome To''ROCK,PAPER And SCISSOR'' Game\n");
        printf("Enter the Name of the Opponent: ");
    gets(name);
   fflush(stdin);
   printf("\n\nThis Tournaments Has 3 rounds. The one with more wins will declare as the champion\n\n..Wishing You Good Luck\n\n");
  
    if(number<=33){
        comp = 'r';
    }
    else if(number>33 && number<=66){
        comp = 'p';
    }
    else{
        comp = 's';
    }
int round = 1;
int youwon=0;
int compwon=0;
    do{
        
        printf(".....STARTING ROUND NUMBER %d.....\n", round);
      printf("Enter r for rock, p for paper or s for scissor: \n");
    scanf("%c", &you);
    int a = RockPaperscissor(you,comp);
    printf("%s has chosen %c and computer has chosen %c\n",name, you, comp);
    if(a == 0){
        printf("GAME DRAW!!\n");
    }
    else if (a == 1){
        printf("YOU WON!!\n");
        youwon++;
    }
    else if (a==-1){
        printf("YOU LOSE!!\n");
        compwon++;
    }
    else{
        printf("invalid input.You Lose!\n");
        compwon++;
    }
    round++;
    fflush(stdin);
    }while(round<=3);

if(youwon>compwon)
{
    printf("Arif Ali Has Defeated The Computer.\n",name);
}
else if(youwon==compwon){
    printf("The Tournament ended in a Tie.\n");
}
else{
    printf("Computer Wins.\n");
}
    return 0;
}
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
        printf("Enter the Name of the Opponent: ");
    gets(name);
   fflush(stdin);
  
    if(number<=33){
        comp = 'r';
    }
    else if(number>33 && number<=66){
        comp = 'p';
    }
    else{
        comp = 's';
    }


      printf("Enter r for rock, p for paper or s for scissor: \n");
    scanf("%c", &you);
    int a = RockPaperscissor(you,comp);
    printf("%s has chosen %c and computer has chosen %c\n",name, you, comp);
    if(a == 0){
        printf("GAME DRAW!!");
    }
    else if (a == 1){
        printf("YOU WON!!\n");
    }
    else if (a==-1){
        printf("YOU LOSE!!\n");
    }
    else{
        printf("invalid input.\n");
    }
    return 0;
}
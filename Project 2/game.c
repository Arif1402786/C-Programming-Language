#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int SnakeWaterGun(char you ,char comp){
     //returns 1 if you win, -1 if you lose and 0 if draw.

// condition for draw
     if(you == comp){
         return 0;
     }

     // condition for not draw
if ( you == 's' && comp == 'w'){
    return 1;
}
else if ( you == 'w' && comp == 's'){
    return -1;
}

if ( you == 'g' && comp == 's'){
    return 1;
}
else if ( you == 's' && comp == 'g'){
    return -1;

}
    if ( you == 'w' && comp == 'g'){
    return 1;
}
else if ( you == 'g' && comp == 'w'){
    return -1;
}

}

int main(){
    char you, comp;
int num;
srand(time(0));
 num = rand()%100+1;
 if (num<33){
 comp ='s';
 }
 else if (num>33 && num <66){
 comp ='g';
 }
 else{
 comp ='w';
 }
    printf("Enters 's' for Snake, 'w' for Water or 'g' for Gun\n");
    scanf("%c", &you);
    int result = SnakeWaterGun(you , comp);
printf("You chose %c and comp chose %c.\n",you, comp );
  
  if (result==1){
        printf("You Won!\n");
    }
else  if (result==-1){
        printf("You Lose!\n");
    }
  else if(result==0){
        printf("Game Draw!\n");
    }
else {
        printf("You haven't input any of the following (s, g, or w).\n");
    }

    return 0;
}
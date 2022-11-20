#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main() // every C function Starts from main function.
{
    int a,b;
     GoodMorning();
    return 0;
}
void GoodMorning(){
    printf("GoodMorning ARIF ALI\n");
     GoodAfternoon();
}
void GoodAfternoon(){
    printf("GoodAfternoon ARIF ALI\n");
     GoodNight();

}
void GoodNight(){
    printf("Goodnight ARIF ALI\n");

}

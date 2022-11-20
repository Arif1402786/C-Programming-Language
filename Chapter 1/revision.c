#include <stdio.h>

int main(){
  int principal,rate, years;
  printf("enter principal\n ");
  scanf("%d", &principal);
    printf("enter rate \n");
  scanf("%d", &rate);  
  printf("enter years\n");
  scanf("%d", &years);
float simpleinterest = (principal*rate* years)/100;
printf("SI is %f\n", simpleinterest);
  return 0;
}
#include <stdio.h>
float average(float a, float b,float c);
int main(){
    float sum, a,b,c;
    printf("enter the value of a\n");
    scanf("%f", &a);
      printf("enter the value of b\n");
    scanf("%f", &b);
      printf("enter the value of c\n");
    scanf("%f", &c);
   sum =  average(a , b, c);
    printf("their average is %f\n", sum);
    return 0;
}
float average(float a,float b,float c){
    float result;
    result = ( a+ b+ c)/3;
 return result;
}

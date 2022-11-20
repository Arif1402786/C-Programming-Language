#include <stdio.h>
 float fahrenite( float celcius);
int main(){
 float temp;
 printf("Enter your temperature(in celcius)\n");
 scanf("%f", &temp);
 printf("the value in fahrenite is %f\n", fahrenite(temp));    
    return 0;
}
 float fahrenite( float celcius){
     float k;
     k = celcius*9/5 + 32;
     return k;

 }

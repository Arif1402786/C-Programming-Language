    //(C × 9/5) + 32 = F
#include <stdio.h>
float farheite( float celcius);

int main(){
float celcius, temp;
printf("Enter Celcius in Kelvin:  ");
scanf("%f", &celcius);
temp = farheite(celcius);
printf("Its Farhenite value is %f",temp);

 return 0;
}

float farheite( float celcius)
{
float c;
c =(celcius * 9/5) + 32;
return c;
}



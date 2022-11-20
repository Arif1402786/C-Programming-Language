#include <stdio.h>

int main(){
    float celcius, farhenite;
    printf("Enter the Celsius: ");
    scanf("%f", &celcius);
    farhenite = (celcius* 9/5)+32;
    printf("Its Farhenite Value is %f\n", farhenite);
    return 0;
}
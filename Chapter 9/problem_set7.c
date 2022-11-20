#include <stdio.h>
#include <string.h>
typedef struct complexnumber{
  float real;
  float img;
}complex;
int main(){
    complex c1,c2;
    c1.real=3 ;
    c1.img= 4;

      c2.real= 7;
    c2.img= 8;
    
    printf("representation of c1 is %.0f +%.0fi\n",c1.real,c1.img);
    printf("\n");
    printf("representation of c2 is %.0f +%.0fi\n",c2.real,c2.img);

    return 0;
}
#include <stdio.h>

int main(){
    // int a; b=a;// not recommended as u do not define b.
    int v = 3^3; // tricky one, it is valid but we will not get the correct answer. it is bitwise xor operator.
    printf("%d\n",v);
     char dt = '2'; // will not give 21
     printf("%c\n",dt);
     0.33;

// 3.0/8 - 2 will give int and float data type but most probably by default double.
//q3.
int num;
printf("enter the number\n", num);
scanf(" %d", &num);
printf("divisibility test return : %d\n", num%97);
//q4

int x = 2, y = 3, z = 3, k = 1;

 int p = 3*x/y-z+k;
 printf("the value of p is %d\n", p);



         return 0;
}
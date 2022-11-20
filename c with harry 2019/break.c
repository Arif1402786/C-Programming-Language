#include <stdio.h>

int main(){
    int i,age;
 printf("Hii world\n");
 for(i=0;i<10;i++)
 {
     printf("%d\n",i);
     printf("Enter the age: ");
     scanf("%d", &age);
     if(age>10)
     {
         break;
     }
 }
    return 0;
}
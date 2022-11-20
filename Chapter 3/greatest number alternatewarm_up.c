#include <stdio.h>

int main(){
    int num1,num2,num3,num4;

    printf("Enter Your first number\n");
    scanf("%d", &num1);

    printf("Enter Your second number\n");
    scanf("%d", &num2);
    
    printf("Enter Your third number\n");
    scanf("%d", &num3);
    
    printf("Enter Your fourth number\n");
    scanf("%d", &num4);

if(num1>num2 && num1>num3 && num1>num4){
    printf("%d is greatest\n", num1);
}
else if( num2>num3 && num2>num4){
    printf("%d is greatest\n", num2);
}

   else if(num3>num4){
    printf("%d is greatest\n", num3);
   }
   else {
       printf("%d is greatest\n",num4);
       }
    return 0;
}
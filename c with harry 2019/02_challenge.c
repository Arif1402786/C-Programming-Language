#include <stdio.h>

int main(){
    char a,b;
    printf("Have you passed in Maths?(y/n); ");
    scanf("%c", &a);
fflush(stdin);
      printf("Have you passed in Science?(y/n); ");
    scanf("%c", &b);

if(a=='y' && b == 'y')
{
    printf("You will receivea gift worth Rs. 1000. CONGRATULATIONS!!\n");
}
else if(a=='y' && b == 'n' || b == 'y' && a == 'n')
{
    printf("You will receivea gift worth Rs. 500.\n!");
}
else
{
    printf("You wont receive any gift. Sorry\n");
}
    return 0;
}
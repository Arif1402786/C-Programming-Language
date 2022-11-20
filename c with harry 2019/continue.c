#include <stdio.h>
//useed to bring the program control to the next iteration of the loop
//the continue statement skips some code inside the loop and continue with the next iteration
//mainly used for the condition so that we can skip some lines for a particular condition
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
    continue;
}
     
printf("we haven't come across any continue statement\n");
printf("we haven't come across any continue statement\n");
printf("we haven't come across any continue statement\n");
printf("i am a good boy\n");

 }
    return 0;
}
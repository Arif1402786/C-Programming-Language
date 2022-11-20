// #include <stdio.h>

// int main(){
//     int num,temp,digit,i,sum=0,fact=1;
//     printf("enter the number: ");
//     scanf("%d", &num);
//     temp = num;

//     while(num>0){
// digit = num%10;
// for(i = 1;i<=digit;i++){
//     fact = fact *i;
// }
// sum = sum+fact;
// fact = 1;
// num = num/10;
// }
// if(temp==sum){
//     printf("it is a peterson number\n");
// }
// else{
//     printf("it is not a peterson number\n");
// }
//     return 0;
// }

#include <stdio.h>

int main(){
    int num,i,temp,digit,sum = 0, fact = 1;
    printf("ENter the number : ");
    scanf("%d", &num);
    temp = num;
    while(num>0)
    {
        digit = num%10;
        for(i=1;i<=digit;i++)
        {
            fact = fact *i;
        }
        sum = sum + fact;
        fact = 1;
        num = num/10;
    }

if(temp == sum)
{
    printf("Given number is peterson number.\n");
}
else
{
    printf("Given number is not a peterson number.\n");

}

    return 0;
}
//o find the Peterson numbers from 1-1000
#include<stdio.h>
int fact(int n)
{
    int fact=1;
    while(n>0)
    {
        fact*=n;
        n--;
    }//end of while loop
    return(fact);
}//end of fn.
int main()
{
    int num,sum,i,l,u;
    printf("enter the lower limit\n");
    scanf("%d", &l);
       printf("enter the upper limit\n");
    scanf("%d", &u);
    printf("The Peterson numbers from 1-1000 are:\n");
    for(i=l;i<=u;i++)
    {
    num=i;
    sum=0;
    while(num>0)
    {
        sum+=(fact(num%10));
        num/=10;
    }//end of while loop
    if(sum==i)
    printf("%d\n",i);
    }//end of for loop
    return 0;
}//end of main
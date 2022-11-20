// you have to create a command line utility to add/subtract/divide/multiplied two numbers
// first command line argument of your c program must be the operation
// the next line being the two numbers. for example:
//>>command.c add 45 5
//>> 49
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char * operation;
    int num1,num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    printf("operation is %s\n", operation);
    printf("Num1 is %d\n", num1);
    printf("Num2 is %d\n", num2);

    if(strcmp(operation,"add")==0)
    {
        printf("%d\n",num1+num2);
    }
     else if(strcmp(operation,"subtract")==0)
    {
        printf("%d\n",num1-num2);
    }
     else if(strcmp(operation,"multiply")==0)
    {
        printf("%d\n",num1*num2);
    }

 if(strcmp(operation,"divide")==0)
    {
        printf("%d\n",num1/num2);
    }

    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{// argc-> counts; argv->gives value
    printf("The Value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This Argument at index number %d has value of %s\n", i,argv[i]);
        
    }
    
    return 0;
}

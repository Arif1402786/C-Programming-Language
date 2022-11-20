#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value after i++ is %d\n ", i++);
    printf("the value of i++ is %d\n ", ++i);

    
    i++; //--> means pehle print karo fir increment karo
    ++i; //--> means pehle increment karo fir print karo
    i += 10; // i += 10--> i +10 increments i by 10
    printf("the value of i is %d\n", i);
    //-->
    return 0;
}
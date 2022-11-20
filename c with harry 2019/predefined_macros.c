#include <stdio.h>

int main(){
    printf("File name is %s\n", __FILE__);
    printf("Todays date is %s\n", __DATE__);
    printf("The Time now is %s\n", __TIME__);
    printf("Line number is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}
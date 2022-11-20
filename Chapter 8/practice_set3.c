#include <stdio.h>

int strlen(char *st)
{
    char *ptr = st;
    int length=0;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
     return length++;
}
/*Alternate way
   int count = 0;
    int i=0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count++;
*/
int main()
{
    char st[] = "arif";
    int a = strlen(st);
    printf("the value of strlen for st is %d\n", a);
    return 0;
}
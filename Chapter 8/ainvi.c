
// Whether Character is Present in String or Not
#include <stdio.h>
#include <string.h>
int presence(char *st, char c)
{
    char *ptr = st;
    char count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "mastermind";
    char *ptr = st;
    char c;
    char count;
    printf("Enter the Character you want to check in string st\n");
    scanf("%c", &c);

    printf("position of %c in string %s : ", c, st);
    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == c)
        {
            printf("%d  ", i + 1);
            ptr++;
        }
        
    }
    count = presence(st, c);
    if (count > 0)
    {
        printf("\nEntered Character %c is present in String %s", c, st);
    }
    else
    {
        printf("\nEntered Character %c is not present in String %s", c, st);
    }
    return 0;
}
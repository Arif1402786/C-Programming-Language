#include <stdio.h>

void *my_strcpy(char *target, char *source);

int main()
{
    char st1[40] = "ARIF ALI IS A GOOD BOY";
    char st2[40];
    my_strcpy(st2, st1);
    printf("%s", st2);
    printf("\n");
    return 0;
}

void *my_strcpy(char *target, char *source)
{
    int i = 0;
    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}
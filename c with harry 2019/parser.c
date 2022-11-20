/*
Input:
<h1>This is a Heading</h1>
Output:
This is a Heading

Input:
<spam>This is a Heading2</spam>
Output:
This is a Heading2

*/
#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int i;
    int in = 0; // variable which will help us to know whether we are inside the tag or not
    int index = 0;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // removing the trailing space
    while (string[0] == ' ')
    {
        for (int j = 0; j < strlen(string); j++)
        {
            string[j] = string[j + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char str[] = "         <harry>This is a Heading</happy>     "; // doesnt matter whether the tag is similar or not
    parser(str);
    printf("The parsed string is ~~%s~~\n", str);
    return 0;
}
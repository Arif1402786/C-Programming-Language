#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);
    // lets count the number of times the old word occur in the string
    for (i = 0; str[i] != '\0'; i++)

    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }

        else
        {
            resultString[i] = *str;
            i++;
            str++;
        }

        resultString[i] = '\0';
    }
    return resultString;
}
// driving program
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The Given Bill Template Was:\n %s", str);

    // call the replaceWord function
    char *newStr;
    newStr = replaceWord(str, "{{name}}", "Arif Ali");
    newStr = replaceWord(newStr, "{{item}}", "Television");
    newStr = replaceWord(newStr, "{{outlet}}", "Malhotra outlet");
    printf("The Actual Bill Template Generated is:\n %s", newStr);
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
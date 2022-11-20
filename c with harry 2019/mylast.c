#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[30];
    char str3[40];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("S1 will now contain %s\n", str1);
    strcat(str3, str1);
    printf("s3 will be %s\n",str3);
    return 0;
}
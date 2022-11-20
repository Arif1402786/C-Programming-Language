/*allow user to enter two strings and then concatenate them by saying that str1 is a friend of str2*/
// make another string str3 and concatenate with "str1 is a friend of str2"

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30];
    char s2[30];
    char s3[30];
    printf("Enter the first string: ");
    gets(s1);
    fflush(stdin);
    printf("Enter the second string: ");
    gets(s2);
    puts(strcat(s1,s2));
    strcpy(s3,s1);
   
   printf("The content  of s3 is %s\n",s3);
    return 0;
}
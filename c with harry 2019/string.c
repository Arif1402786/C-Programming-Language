#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Arif";
    char s2[] = "Rahul";
    char s3[30];
    // puts(strcat(s1,s2));
    printf("The strcmp of s1 and s2 is %d\n", strcmp(s1,s2));
    printf("The length of the s1 is %d\n", strlen(s1));
    printf("The length of the s2 is %d\n", strlen(s2));
    printf("The reversed string of s1 is:");
    puts(strrev(s1));
     printf("The reversed string of s2 is:");
    puts(strrev(s2));
strcpy(s3,strcat(s1,s2));
    puts(s3);

    return 0;
}
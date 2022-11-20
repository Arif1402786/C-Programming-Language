// # write a program to reverse a String

#include <stdio.h>
#include <string.h>

void revstr(char *str)
{
    int i,len;
    char temp;
    len = strlen(str);
    for(i = 0;i<(len/2);i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main(){
    
    char str[50];
    printf("Enter the String: ");
    gets(str);
    printf("Before Reversing the string:%s\n",str);
    revstr(str);
    printf("After Reversing the string:%s\n",str);
    


    return 0;
}





// Alternate

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char s[] = "Arif";
//     char temp;
//     int len = 0;
//     while(s[len]!='\0')
//     {
//         len++;
//     }
//     printf("The length of the string is %d\n",len);
//     for(int i = 0;i<(len)/2;i++)
//     {
//         temp = s[i];
//         s[i] = s[len-1-i];
//         s[len-1-i]=  temp;
//     }
//     printf("String now is %s\n",s);
//     return 0;
// }

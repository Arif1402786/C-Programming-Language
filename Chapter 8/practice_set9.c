#include <stdio.h>
#include <string.h>
void presence(char *str, char c)
{
    int present = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            present = 1;
        }
    }
    if (present)
    {
        printf("The Character is present in the String\n");
    }
    else
    {
        printf("The Character is not present in the String\n");
    }
}
int main()
{
    char str[] = "Arif Ali Is A Good Boy";
    // char *str = "Arif Ali Is A Good Boy";
    pre(str, 'I');
    printf("number of times %c occur in the string is %d\n", 'I', d);
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// // cant do it
// void presence(char st[], char c){
//       char *ptr=st;
//       char count =0;

// for (int i = 0; i < strlen(st); i++)
//     {
//         if (st[i] == c)
//         {
//             printf("%d  ", i + 1);
//             ptr++;
//         }
//         else{
//             printf("it is not present");
//         }
//     }
// }
// int main(){
//     char st[]="ASIFALI";
//     presence(st, 'Y');
//     return 0;
// }
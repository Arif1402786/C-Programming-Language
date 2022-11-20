#include <stdio.h>
// switch can be used only in case of integer and character 
int main()
{
    char rating;
    printf("enter your rating(a-e)\n");
    scanf("%c", &rating);
    switch (rating)
    {
    case 'a':
        printf("Your ratings indicate that you have enjoyed in our hotel..visit again\n");
        break;
    case 'b':
        printf("thank you so much for the rating.. visit again\n");
        break;
    case 'c':
        printf("thanks\n");
        break;
    case 'd':
        printf("poor rating\n");
        break;
    case 'e':
        printf("fuck off\n");
      break;
    default:
        printf("your rating is invalid\n");
        break;
    }

    return 0;
}
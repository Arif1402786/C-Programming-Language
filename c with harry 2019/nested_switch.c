#include <stdio.h>
// switch can be used only in case of integer and character 
int main()
{
    int age,marks;
    printf("enter your age\n");
    scanf("%d", &age);
      printf("enter your marks\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 18:
        printf("your age is 18\n");
        switch (marks)
        {
        case 90:
            printf("Your marks is 90\n");
            break;
        
        default:
        printf("Your marks is not 90");
            break;
        }
        break;
    case 20:
        printf("your age is 20\n");
        break;
    case 25:
        printf("your age is 25\n");
        break;
    case 32:
        printf("your age is 32\n");
        break;
    case 50:
        printf("your age is 50\n");
      break;
    default:
        printf("your age is invalid\n");
        break;
    }

    return 0;
}
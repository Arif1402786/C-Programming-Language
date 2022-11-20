#include <stdio.h>

int palindrome(int num)
{
    int original;
    int reverse = 0;
    original = num;
    while (num != 0)
    {
        reverse = reverse * 10 + (num % 10);
        num = num / 10;
    }
    printf("Reverse: %d\n", reverse);
    if (original == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int c = palindrome(num);
    if (c)
    {
        printf("Given number is a palindrome number\n");
    }
    else
    {
        printf("Given number is not a palindrome number\n");
    }
    return 0;
}
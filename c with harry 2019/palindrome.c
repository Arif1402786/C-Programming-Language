#include <stdio.h>
int isPalindrome(int number)
{
    // reverse the number
    int reverse = 0;
    int original_number;
    original_number = number;
    while (number != 0)
    {
        reverse = reverse * 10 + (number % 10);
        number = number / 10;
    }
    printf("The reversed number is %d\n", reverse);

    if (original_number == reverse)
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
    int number;
    printf("Enter the number to check whether it is palindrome or not: ");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("Given Number is a Palindrome\n");
    }
    else
    {
        printf("Given Number is not a Palindrome\n");
    }
    return 0;
}
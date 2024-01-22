// Check whether a number is a palindrome or not

#include <stdio.h>

int isPalindrome(int num);

int main() 
{
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check and display if the number is a palindrome
    if (isPalindrome(num)) 
    {
        printf("%d is a palindrome.\n", num);
    } 
    else 
    {
        printf("%d is not a palindrome.\n", num);
    }
}

int isPalindrome(int num) 
{
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the digits of the number
    while (num != 0) 
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    return (originalNum == reversedNum);
}

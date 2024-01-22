// Reverse a number

#include <stdio.h>

int reverseDigits(int num);

int main() 
{
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the digits and display the result
    printf("Reversed number: %d\n", reverseDigits(num));
}

int reverseDigits(int num) 
{
    int reversedNum = 0;

    // Reverse the digits using a loop
    while (num != 0) 
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

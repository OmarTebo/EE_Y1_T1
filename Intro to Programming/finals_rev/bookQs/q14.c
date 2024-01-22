// Count number of digits of an integer

#include <stdio.h>

int countDigits(int num);

int main() 
{
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Find and display the number of digits
    printf("Number of digits in %d is: %d\n", num, countDigits(num));
}

int countDigits(int num) 
{
    int count = 0;

    // Handle the case when num is 0
    if (num == 0) 
    {
        return 1;
    }

    // Count the digits using a loop
    while (num != 0) 
    {
        num /= 10;
        ++count;
    }

    return count;
}

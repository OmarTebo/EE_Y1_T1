// Check Armstrong number

#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() 
{
    int num;

    // Input an integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check and display if the number is an Armstrong number
    if (isArmstrong(num)) 
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }
}

int isArmstrong(int num) 
{
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) 
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the result
    while (originalNum != 0) 
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    return (result == num);
}

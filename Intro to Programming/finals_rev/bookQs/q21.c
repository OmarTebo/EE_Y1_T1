// Display Armstrong numbers between two intervals

#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() 
{
    int start, end;

    // Input two positive integers as intervals
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    // Check and display Armstrong numbers within the interval
    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; ++i) 
    {
        if (isArmstrong(i)) 
        {
            printf("%d\n", i);
        }
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

// Find LCM of two numbers

#include <stdio.h>

int findGCD(int num1, int num2);
int findLCM(int num1, int num2);

int main() 
{
    int num1, num2;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Check if input numbers are positive
    if (num1 <= 0 || num2 <= 0) 
    {
        printf("Please enter positive integers.\n");
        return 1; // Exit with an error code
    }

    // Find and display the LCM
    printf("LCM of %d and %d is: %d\n", num1, num2, findLCM(num1, num2));
}

int findGCD(int num1, int num2) 
{
    int temp;

    // Euclidean algorithm to find GCD
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    return num1;
}

int findLCM(int num1, int num2) 
{
    // Calculate LCM using the relationship with GCD
    int gcd = findGCD(num1, num2);
    return (num1 * num2) / gcd;
}

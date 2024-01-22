// Find HCF of two numbers (HCF: Highest Common Factor)

#include <stdio.h>

int findHCF(int num1, int num2);

int main() 
{
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) 
    {
        printf("Please enter positive integers.\n");
        return 1; // Exit with an error code
    }

    printf("HCF of %d and %d is: %d\n", num1, num2, findHCF(num1, num2));
}

int findHCF(int num1, int num2) 
{
    int temp;

    if (num2 > num1) 
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while (num2 != 0) 
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    return num1;
}


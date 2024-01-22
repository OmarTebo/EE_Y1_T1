// Calculate the power of a number

#include <stdio.h>
#include <math.h>

int main() 
{
    double base, exponent;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Calculate and display the power using pow
    printf("%.2f^%.2f is: %.2f\n", base, exponent, pow(base, exponent));
}

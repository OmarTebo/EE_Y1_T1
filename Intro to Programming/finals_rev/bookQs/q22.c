// Display factors of a number

#include <stdio.h>

void displayFactors(int num);

int main() 
{
    int num;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check and display factors of the number
    printf("Factors of %d are: ", num);
    displayFactors(num);
}

void displayFactors(int num) 
{
    // Display factors using a loop
    for (int i = 1; i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

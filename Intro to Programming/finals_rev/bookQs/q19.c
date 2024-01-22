// Display prime numbers between two intervals

#include <stdio.h>

int isPrime(int num);

int main() 
{
    int start, end;

    // Input two positive integers as intervals
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    // Check and display prime numbers within the interval
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; ++i) 
    {
        if (isPrime(i)) 
        {
            printf("%d\n", i);
        }
    }
}

int isPrime(int num) 
{
    // Handle special cases for 0 and 1
    if (num <= 1) 
    {
        return 0; // Not prime
    }

    // Check for prime using a loop
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

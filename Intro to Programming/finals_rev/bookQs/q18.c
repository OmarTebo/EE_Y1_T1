// check whether an integer is prime or not

#include <stdio.h>

int isPrime(int num);

int main() {
    int num;

    // Input an integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check and display if the number is prime
    if (isPrime(num)) 
    {
        printf("%d is a prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a prime number.\n", num);
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

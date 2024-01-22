// Check whether a number is even or odd
#include <stdio.h>

char* odd_even(int num)
{
    if ((num % 2) == 0)
        return "even";
    else
        return "odd";
}

int main()
{
    int n;

    printf("Enter a number> ");
    scanf("%d", &n);

    printf("The number is %s\n", odd_even(n));
}

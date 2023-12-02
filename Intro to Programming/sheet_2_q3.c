/*
 * Write C program to Check Whether a Number is Positive or Negative or Zero.
 */

#include <stdio.h>

int main(int argc, char **argv)
{
    float n;

    printf("Enter a number to check if its a positive or negative or zero> ");
    scanf("%f", &n);

    if (n == 0)
    {
        printf("you have entered ZERO\n");
    }
    else
        printf("Your number is %s\n", (n > 0) ? "Positive" : "Negative");

    return 0;
}

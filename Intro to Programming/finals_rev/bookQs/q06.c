// Check Whether a Number is positive ore negative or zero

#include <stdio.h>

char* pos_zero_neg(int num)
{
   if (num == 0)
       return "zero";

   return (num > 0) ? "positive" : "negative";
}

int main()
{
    int n;

    printf("Enter a number to check> ");
    scanf("%d", &n);

    printf("Your number is %s\n", pos_zero_neg(n));
}

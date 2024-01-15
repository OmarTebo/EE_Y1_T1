/* 
 * Write C program to swap two numbers
 */

#include <stdio.h>

int main()
{
    float x,
          y,
          temp;

    printf("Enter 2 numbers separated by a space> ");
    scanf("%f %f", &x, &y);

    printf("Before Swap: X = %.3f, Y = %.3f\n\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After Swap: X = %.3f, Y = %.3f\n\n", x, y);

    return 0;
}

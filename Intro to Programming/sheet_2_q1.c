/*
 * Write C program to find the maximum number out of the three, give numbers using
 * if-else statement
 */

#include <stdio.h>

int main(int argc, char **argv)
{
    float n1,
          n2,
          n3;

    printf("Enter 3 numbers separated by a space> ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
        printf("%.2f is the greatest\n", n1);
    else if (n2 > n1 && n2 > n3)
        printf("%.2f is the greatest\n", n2);
    else if (n3 > n1 && n3 > n2)
        printf("%.2f is the greatest\n", n3);
    else
        printf("The numbers are equal\n");

    return 0;
}

#include <stdio.h>

int main()
{
    int marks[10] = {0},
        n,
        sum = 0;
    double average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number #%d> ", i+1);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }

    average = sum / n;
    printf("Average = %.2lf\n", average);
}

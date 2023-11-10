#include <stdio.h>

void take_input(char *letter, int *age, int *n);

void calc_avg(int n, double *avg);

void output(char letter, int age, double avg);

int main()
{
    char letter;
    
    int age;
    int n;
    
    double avg;

    take_input(&letter, &age, &n);
    
    calc_avg(n, &avg);

    output(letter, age, avg);
}

void take_input(char *letter, int *age, int *n)
{
    printf("Enter first letter of your name> ");
    scanf("%c", letter);

    printf("Enter your age> ");
    scanf("%d", age);

    printf("Enter how many numbers to be averaged> ");
    scanf("%d", n);
}

void calc_avg(int n, double *avg)
{
    double sum;
    double carry;

    sum = 0.0;
    carry = 0.0;
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d> ", i + 1);
        scanf("%lf", &carry);

        sum += carry;
    }

    *avg = sum / n;
 
}

void output(char letter, int age, double avg)
{
    printf("First Letter> %c\n", letter);
    printf("Age> %d\n", age);
    printf("Average of the numbers = %.2lf\n", avg);
}


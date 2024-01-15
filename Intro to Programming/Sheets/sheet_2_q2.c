/*
 * Write C Program to make a Simple Calculator Using switch case.
 */

#include <stdio.h>

int main(int argc, char **argv)
{
    int choice;
    float n1,
          n2,
          result;

    do
    {
        printf("-1) Exit\n");
        printf("1) Addition\n");
        printf("2) Subtraction\n");
        printf("3) Multiplication\n");
        printf("4) Division\n");

        printf("Enter your choice by number> ");
        scanf("%d", &choice);


        switch(choice)
        {
            case -1:
                printf("Exiting...\n");
                continue;
        }

        printf("Enter 2 numbers> ");
        scanf("%f %f", &n1, &n2);

        switch(choice)
        {
            case 1:
                result = n1 + n2;
                break;
            case 2:
                result = n1 - n2;
                break;
            case 3:
                result = n1 * n2;
                break;
            case 4:
                switch ((int)n2)
                {
                    case 0:
                        printf("You Cannot Divide by 0\n");
                        continue;
                    default:
                        result = n1 / n2;
                        break;
                }
                break;
            default:
                printf("Please enter a valid choice\n");
                break;
        }
        
        printf("Result = %.3f\n\n", result);

    } while (choice != -1);

    return 0;
}

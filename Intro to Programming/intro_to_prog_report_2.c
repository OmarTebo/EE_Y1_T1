#include <stdio.h>

double add(double n1, double n2);
double subtract(double n1, double n2);
double multiply(double n1, double n2);
double divide(double n1, double n2);
int modulo(double n1, double n2);

void take_input(double *n1, double *n2);
void take_choice(int *opt);


int main()
{
  double n1,
         n2,
         sum,
         sub,
         mult,
         div;
  int option,
      mod;
  
  option = 0;
  n1 = 0.0;
  n2 = 0.0;

  take_choice(&option);
  take_input(&n1, &n2);

  switch(option)
  {
    case 1:
      sum = add(n1, n2);
      printf("\nThe Result of your Chosen Operation = %.2lf\n", sum);
      break;
    case 2:
      sub = subtract(n1, n2);
      printf("\nThe Result of your Chosen Operation = %.2lf\n", sub);
      break;
    case 3:
      mult = multiply(n1, n2);
      printf("\nThe Result of your Chosen Operation = %.2lf\n", mult);
      break;
    case 4:
      div = divide(n1, n2);
      printf("\nThe Result of your Chosen Operation = %.2lf\n", div);
      break;
    case 5:
      mod = modulo(n1, n2);
      printf("\nThe Result of your Chosen Operation = %d\n", mod);
      break;
  }

  
}

void take_choice(int *opt)
{
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Modulus\n");
  printf("Enter your Choice by Number> ");
  scanf("%i", opt);
}


void take_input(double *n1, double *n2)
{
  printf("Enter Number 1> ");
  scanf("%lf", n1);

  printf("Enter Number 2> ");
  scanf("%lf", n2);
}

double add(double n1, double n2)
{
  return (n1 + n2);
}

double subtract(double n1, double n2)
{
  return (n1 - n2);
}

double multiply(double n1, double n2)
{
  return (n1 * n2);
}

double divide(double n1, double n2)
{
  return (n1 / n2);
}

int modulo(double n1, double n2)
{
  return ((int) n1 % (int) n2);
}

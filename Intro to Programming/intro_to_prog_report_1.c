#include <stio.h>

#define PI 3.14159

int main()
{
    float r,
          area,
          circumference;

    printf("Enter the radius of circle> ");
    scanf("%f", &r);

    circumference = 2 * PI * r;
    area = PI * r * r;

    printf("\nFor a circle with radius of %.2lf\n", r);
    printf("The Circumference = %.2lf\n", circumference);
    printf("The Area = %.2lf\n", area);
}

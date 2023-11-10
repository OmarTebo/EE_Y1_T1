#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Functions Prototypes
void take_input(double *bp, double *cp, double *anglep);
void deg_to_rad(double deg, double *radp);
double calc_third_side(double b, double c, double rad_angle);

int main()
{
    double side_a,
           side_b,
           side_c,
           alpha_deg,
           alpha_rad;
    
    take_input(&side_b, &side_c, &alpha_deg);

    deg_to_rad(alpha_deg, &alpha_rad);

    side_a = calc_third_side(side_b, side_c, alpha_rad);

    printf("The Length of the third side A = %.2lf \n", side_a);
}

void take_input(double *bp, double *cp, double *anglep)
{
    printf("    To Calculate the length of a triangle side using \nopposite angle and adjacent side length, Please enter the following:\n\n");
    printf("Adjacent Side B> ");
    scanf("%lf", bp);
    printf("Adjacent Side C> ");
    scanf("%lf", cp);
    printf("Opposite Angle (in deg)> ");
    scanf("%lf", anglep);
}

void deg_to_rad(double deg, double *radp)
{
    *radp = deg * PI / 180;
}

double calc_third_side(double b, double c, double rad_angle)
{
    return sqrt(pow(b, 2) + pow(c, 2) - ( 2 * b * c * cos(rad_angle)) );
}


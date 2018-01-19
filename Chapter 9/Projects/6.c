#include<stdio.h>
#include<math.h>

double poly_compute(double x);

int main(void)
{
    double x;

    printf("Enter a value of x: ");
    scanf("%lf", &x);

    printf("The computed result is: %.3f\n", poly_compute(x));

    return 0;
}

double poly_compute(double x)
{
    return (3 * pow(x, 5.0) + 2 * pow(x, 4.0) - 5 * pow(x, 3.0) - pow(x, 2.0) + 7 * x - 6);
}

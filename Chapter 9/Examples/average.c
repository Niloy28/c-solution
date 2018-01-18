#include<stdio.h>

double average(double a, double b);

int main(void)
{
    double a, b, c;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Average of %g & %g: %g\n", a, b, average(a, b));
    printf("Average of %g & %g: %g\n", b, c, average(b, c));
    printf("Average of %g & %g: %g\n", c, a, average(c, a));

    return 0;
}

double average(double a, double b)
{
    return (a + b) / 2;
}

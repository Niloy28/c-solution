#include<stdio.h>

double median(double, double, double);

int main(void)
{
    double x, y, z;

    printf("Enter 3 numbers to calculate median: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("The median is %.3f\n", median(x, y, z));

    return 0;
}

double median(double a, double b, double c)
{

}

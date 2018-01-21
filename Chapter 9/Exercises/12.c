#include<stdio.h>

#define SIZE 50

double inner_product(double a[], double b[], int n);

int main(void)
{
    double a[SIZE], b[SIZE];
    int n, i;

    printf("Enter values of number of terms in the expression: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter values of no. %d term of a & b: ", i + 1);
        scanf("%lf %lf", &a[i], &b[i]);
    }

    printf("The result of the expression is: %.3f\n", inner_product(a, b, n));

    return 0;
}

double inner_product(double a[], double b[], int n)
{
    int i;
    double total;

    for(i = total = 0; i < n; i++)
        total += a[i] * b[i];

    return total;
}

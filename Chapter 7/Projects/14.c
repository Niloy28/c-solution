#include<stdio.h>
#include<math.h>

int main(void)
{
    double x, y, result, old_y;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for(y = 1; fabs(old_y - y) >= 0.00001 * y; ){
        result = y;
        old_y = y;
        y = (y + (x / y)) / 2;
    }

    printf("Square root: %.5f\n", result);

    return 0;
}

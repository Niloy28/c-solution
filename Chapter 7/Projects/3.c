#include<stdio.h>

int main(void)
{
    double i, sum = 0;

    printf("This programs sums a series of floating point numbers.\n");
    printf("Enter numbers(0 to terminate): ");

    scanf("%lf", &i);
    while(i){
        sum += i;
        scanf("%lf", &i);
    }

    printf("The sum is: %f", sum);

    return 0;
}

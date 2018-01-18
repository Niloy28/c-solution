#include<stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR 5.0f/9.0f

int main(void)
{
    float fahrenheit;

    scanf("%f", &fahrenheit);

    printf("%.2f", (fahrenheit - FREEZING_POINT) * SCALE_FACTOR);

    return 0;
}
